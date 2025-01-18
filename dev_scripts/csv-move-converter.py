import csv
import re

# Regular expressions to match Pokemon families and level-up moves
family_regex = re.compile(r'#if P_FAMILY_(\w+)')
move_regex = re.compile(r'LEVEL_UP_MOVE\(\s*(\d+),\s*(MOVE_\w+)\s*\)')
evolution_regex = re.compile(r's(\w+)LevelUpLearnset')

# Dictionary to map family names to indices
family_index = {}

def camel_case_to_words(name):
    # Remove the word "MOVE_" and convert the rest to camel case with spaces
    return ' '.join(word.capitalize() for word in name.replace('MOVE_', '').lower().split('_'))

def parse_file(file_path):
    with open(file_path, 'r') as file:
        lines = file.readlines()

    pokemon_index = 0
    current_family = ""
    current_pokemon = ""
    level_up_moves = []
    data = []
    max_moves = 0

    for line in lines:
        family_match = family_regex.search(line)
        evolution_match = evolution_regex.search(line)
        move_match = move_regex.search(line)

        if family_match:
            current_family = family_match.group(1)
        elif evolution_match and current_family:
            if current_pokemon:
                data.append([family_index[current_pokemon], current_pokemon] + level_up_moves)
                max_moves = max(max_moves, len(level_up_moves))
                level_up_moves = []
            pokemon_index += 1
            current_pokemon = evolution_match.group(1)
            family_index[current_pokemon] = pokemon_index
        elif move_match:
            level_up_moves.append(f"{move_match.group(1)}, {camel_case_to_words(move_match.group(2))}")

    if current_pokemon:
        data.append([family_index[current_pokemon], current_pokemon] + level_up_moves)
        max_moves = max(max_moves, len(level_up_moves))

    return data, max_moves

def write_to_csv(data, max_moves, output_file):
    with open(output_file, 'w', newline='') as csvfile:
        csvwriter = csv.writer(csvfile)
        header = ["Index", "Pokemon"] + [f"Move {i+1}" for i in range(max_moves)]
        csvwriter.writerow(header)
        for row in data:
            row += [""] * (max_moves - len(row) + 2)  # Pad rows to have the same number of columns
            csvwriter.writerow(row)

if __name__ == '__main__':
    input_file = '../src/data/pokemon/level_up_learnsets/gen_9.h'  # Change this to your file path
    output_file = 'pokemon_level_up_moves.csv'
    data, max_moves = parse_file(input_file)
    write_to_csv(data, max_moves, output_file)

    print("CSV file has been created successfully.")
