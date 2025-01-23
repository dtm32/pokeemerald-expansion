.set LOCALID_GOODY_BAG, 1
.set LOCALID_POKEBALL, 2

LittlerootTest_MapScripts::
	.byte 0

@ CUSTOM SCRIPTS

sLittlerootTown_GiveTestingMonEtc::
	lock
	msgbox LittlerootTown_Text_TakePokeball, MSGBOX_DEFAULT
	closemessage
	getpartysize
	compare VAR_RESULT, 6
	goto_if_eq Script_PlayerHasFullParty
	call LittlerootTown_Script_GiveTestMons
	removeobject LOCALID_POKEBALL
	call LittlerootTown_Script_SkipBirchEncounter
	release
	end

Script_PlayerHasFullParty::
	msgbox cLittlerootTown_Text_PlayerHasFullParty, MSGBOX_DEFAULT
	release
	end

@ Pokeball to test new species
LittlerootTown_Script_GiveTestMons::
	getpartysize
	compare VAR_RESULT, 6
	goto_if_eq Script_PlayerHasFullParty
	@ givemon SPECIES_GLIGAR, 30, item=ITEM_EVIOLITE, move1=MOVE_AERIAL_BASH, move2=MOVE_EARTHQUAKE, move3=MOVE_POISON_TAIL, move4=MOVE_BULLDOZE
	@ givemon SPECIES_SANDSLASH_DELTA, 28
	@ givemon SPECIES_NINETALES, 30
	givemon SPECIES_BRELOOM, 44, move1=MOVE_BULLET_SEED, move2=MOVE_FORCE_PALM, move3=MOVE_MEGA_DRAIN
	givemon SPECIES_NIDOKING, 44, move1=MOVE_POISON_STING, move2=MOVE_DOUBLE_KICK
	givemon SPECIES_BEEDRILL_DELTA, 49
	return

LittlerootTown_Text_TakePokeball:
	.string "Oh look! A POKéBALL!$"

cLittlerootTown_Text_ReceivedVaporeon:
	.string "{PLAYER} received a VAPOREON!$"

cLittlerootTown_Text_PlayerHasFullParty:
	.string "Better leave this for later.$"

cLittlerootTown_EventScript_PickupGoodyBag::
	lock
	@ TESTING RUSTBORO RIVAL
	@ setvar VAR_RUSTBORO_CITY_STATE, 7
	@ clearflag FLAG_HIDE_RUSTBORO_CITY_RIVAL

	@ temp
	clearflag FLAG_HIDE_DEBUG_POKEBALLS
	setvar VAR_NORMAN_STATE, 2
	setflag FLAG_HIDE_DIG_SITE_2_ARCO_MEMBERS
	msgbox cLittlerootTown_Text_PickupGoodyBag
	msgbox cLittlerootTown_Text_FoundRustyOldBadges
	additem ITEM_MASTER_BALL, 50
	additem ITEM_MAX_REPEL, 50
	additem ITEM_ACRO_BIKE
	additem ITEM_GO_GOGGLES
	additem ITEM_RARE_CANDY, 100
	@ giveitem ITEM_PROTEIN, 10
	@ giveitem ITEM_ADAMANT_MUSHROOM, 10
	call LittlerootTown_Script_SkipBirchEncounter
	call LittlerootTown_Script_GiveStartingMons
	call LittlerootTown_Script_GiveBadges
	call LittlerootTown_Script_SetFlyFlags
	call LittlerootTown_Script_GiveHMs
	removeobject LOCALID_GOODY_BAG
	setflag FLAG_STOLE_GOODY_BAG
	setflag FLAG_RECEIVED_RUNNING_SHOES
	closemessage
	release
	end


LittlerootTown_Script_SkipBirchEncounter::
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_RESCUED_BIRCH
	@ setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
	setvar VAR_BIRCH_LAB_STATE, 2
	setvar VAR_ROUTE101_STATE, 3
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	checkplayergender
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	return

LittlerootTown_Script_GiveStartingMons::
	getpartysize
	compare VAR_RESULT, 6
	goto_if_eq Script_PlayerHasFullParty
	@ givemon SPECIES_EMPOLEON, 90
	@ givemon SPECIES_THERAZOR, 46, move1=MOVE_SCISSOR_CUT, move2=MOVE_ROCK_CLIMB, move3=MOVE_JAGGED_BLOW, move4=MOVE_SLASH
	@ givemon SPECIES_MANECTRIC, 46
	givemon SPECIES_KYOGRE, 45, move1=MOVE_WATERFALL, move2=MOVE_SURF, move3=MOVE_HYDRO_PUMP, move4=MOVE_WATER_SPORT
	@ givemon SPECIES_MEDICHAM, 46, move1=MOVE_ZEN_HEADBUTT, move2=MOVE_FORCE_PALM, move3=MOVE_HIGH_JUMP_KICK, move4=MOVE_THUNDER_PUNCH
	givemon SPECIES_JOLTEON, 45, move1=MOVE_AGILITY, move2=MOVE_SPARK, move3=MOVE_SURF, move4=MOVE_THUNDER
	givemon SPECIES_CLEFABLE, 45
	givemon SPECIES_SHEDINJA, 45
	return


LittlerootTown_Script_GiveBadges::
	setflag FLAG_BADGE01_GET
	setflag FLAG_BADGE02_GET
	setflag FLAG_BADGE03_GET
	setflag FLAG_BADGE04_GET
	setflag FLAG_BADGE05_GET
	setflag FLAG_BADGE06_GET
	setflag FLAG_BADGE07_GET
	setflag FLAG_BADGE08_GET
	return

LittlerootTown_Script_GiveHMs::
	@ giveitem ITEM_HM_ROCK_CLIMB
	return

LittlerootTown_Script_SetFlyFlags::
	setflag FLAG_VISITED_LITTLEROOT_TOWN
	setflag FLAG_VISITED_OLDALE_TOWN
	setflag FLAG_VISITED_DEWFORD_TOWN
	setflag FLAG_VISITED_LAVARIDGE_TOWN
	setflag FLAG_VISITED_FALLARBOR_TOWN
	setflag FLAG_VISITED_VERDANTURF_TOWN
	setflag FLAG_VISITED_PACIFIDLOG_TOWN
	setflag FLAG_VISITED_PETALBURG_CITY
	setflag FLAG_VISITED_SLATEPORT_CITY
	setflag FLAG_VISITED_MAUVILLE_CITY
	setflag FLAG_VISITED_RUSTBORO_CITY
	setflag FLAG_VISITED_FORTREE_CITY
	setflag FLAG_VISITED_LILYCOVE_CITY
	setflag FLAG_VISITED_MOSSDEEP_CITY
	setflag FLAG_VISITED_SOOTOPOLIS_CITY
	setflag FLAG_VISITED_EVER_GRANDE_CITY
	setflag FLAG_VISITED_BLEAKISLE_TOWN
	setflag FLAG_LANDMARK_BATTLE_FRONTIER
	setflag FLAG_LANDMARK_SOUTHERN_ISLAND
	return

cLittlerootTown_Text_PickupGoodyBag:
	.string "Someone left their bag here…$"

cLittlerootTown_Text_FoundRustyOldBadges:
	.string "Found some rusty old badges too…$"
