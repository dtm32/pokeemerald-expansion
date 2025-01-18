import csv
import json
import re

from collections import OrderedDict

# Regular expression to match pokemon names from species.h
species_regex = re.compile(r'#define SPECIES_(\w+)')

def camel_case_to_words(name):
    # Remove the word "SPECIES_" and convert the rest to camel case with spaces
    return ' '.join(word.capitalize() for word in name.replace('SPECIES_', '').lower().split('_'))

def included_species(index, name):
    indexes = [544, 545] # drillbur
    indexes += [581, 582, 583, 584] # tirtouga archen
    indexes += [602, 603, 604, 605, 1160, 1161, 1162, 1163, 1164, 1665] # deerling
    indexes += [606] # emolga
    indexes += [609, 610]
    indexes += [614, 615] # joltik
    indexes += [626, 627, 628] # litwick
    indexes += [652, 653, 654, 655, 656] # deino, larvesta
    indexes += [723, 724] # skrelp
    indexes += [729, 730, 731, 732] # tyrunt, amaura
    indexes += [737, 738, 739] # goomy
    indexes += [741, 742] # phantump
    indexes += [749, 750] # noibat
    indexes += [809, 810] # wimpod
    indexes += [828, 829, 830, 831] # dhelmise, jagmo-o
    indexes += [887, 888, 889, 1509, 1531] # applin
    indexes += [893, 894] # arrokuda
    indexes += [900, 901] # clobbopus
    indexes += [941, 942, 943] # dreepy
    indexes += [1397, 1398, 1399] # pawmi
    indexes += [1473, 1474, 1475, 1476, 1477, 1478, 1496, 1506, 1532, 1533] # paradoxes
    indexes += [1485, 1486, 1487] # frigibax
    return (index in indexes) or name.find('GALAR') or name.find('ALOLA') or name.find('WORMADAM')

def parse_species_file(file_path):
    with open(file_path, 'r') as file:
        lines = file.readlines()

    species = OrderedDict()
    egg_index = 9999
    for index, line in enumerate(lines):
        species_match = species_regex.search(line)
        if species_match:
            species_name = species_match.group().replace('#define ', '')
            # if index > 508 and index < 1633 and not included_species(index, species_name):
            #     continue
            # if species_name == 'SPECIES_EGG':
            #     egg_index = index
            # if index > egg_index and not included_species(index, species_name):
            #     continue
            # if species_name.find('')
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
            count = f"  {len(data)}" if len(data) > 0 else '__0'
            if key == 'SPECIES_NONE':
                continue
            row = [count, camel_case_to_words(key).ljust(15) + ' '] + data
            csvwriter.writerow(row)

if __name__ == '__main__':
    input_file = '../src/data/wild_encounters.json'
    output_file = 'wild_encounters.csv'
    species = parse_species_file('../include/constants/species.h')
    data = parse_file(input_file, species)
    write_to_csv(data, output_file)

    print('\n\n=== CSV file has been created successfully. ===\n\n')
