.set LOCALID_NURSE, 1

BleakisleTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BleakisleTown_PokemonCenter_1F_OnTransition
	.byte 0

BleakisleTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_BLEAKISLE_TOWN
	call Common_EventScript_UpdateBrineyLocation
	end

BleakisleTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurseSafe
	waitmessage
	waitbuttonpress
	release
	end
