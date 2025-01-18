import csv
import json
import re

from collections import OrderedDict

# Regular expression to match pokemon names from species.h
species_regex = re.compile(r'#define SPECIES_(\w+)')

def camel_case_to_words(name):
    # Remove the word "SPECIES_" and convert the rest to camel case with spaces
    return ' '.join(word.capitalize() for word in name.replace('SPECIES_', '').lower().split('_'))

def parse_species_file(file_path):
    with open(file_path, 'r') as file:
        lines = file.readlines()

    species = OrderedDict()
    for line in lines:
        species_match = species_regex.search(line)
        if species_match:
            species_name = species_match.group().replace('#define ', '')
            species[species_name] = []

    return species

def parse_file(file_path, species):
    with open(file_path, 'r') as file:
        data = json.load(file)

    encounters = data.get('wild_encounter_groups')[0].get('encounters')

    for encounter in encounters:
        map_name = encounter.get('map')[4:]
        land_mons = encounter.get('land_mons')
        water_mons = encounter.get('water_mons')
        rock_smash_mons = encounter.get('rock_smash_mons')
        fishing_mons = encounter.get('fishing_mons')

        mon_set = set()
        
        if land_mons:
            for mon in land_mons.get('mons'):
                mon_set.add(mon.get('species'))

        if water_mons:
            for mon in water_mons.get('mons'):
                mon_set.add(mon.get('species'))

        if rock_smash_mons:
            for mon in rock_smash_mons.get('mons'):
                mon_set.add(mon.get('species'))

        if fishing_mons:
            for mon in fishing_mons.get('mons'):
                mon_set.add(mon.get('species'))
        
        for mon in mon_set:
            species[mon].append(camel_case_to_words(map_name))

    return species

def write_to_csv(species_dict, output_file):
    with open(output_file, 'w', newline='') as csvfile:
        csvwriter = csv.writer(csvfile)
        for key, data in species_dict.items():
            if key == 'SPECIES_NONE':
                continue
            row = [camel_case_to_words(key)] + data
            csvwriter.writerow(row)

if __name__ == '__main__':
    input_file = '../src/data/wild_encounters.json'
    output_file = 'wild_encounters.csv'
    species = parse_species_file('../include/constants/species.h')
    data = parse_file(input_file, species)
    write_to_csv(data, output_file)

    print('\n\n=== CSV file has been created successfully. ===\n\n')
