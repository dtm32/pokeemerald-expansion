.set LOCALID_PINA, 1

BleakisleCave_SpiritRoom_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BleakisleCave_SpiritRoom_OnFrame
	.byte 0

BleakisleCave_SpiritRoom_OnFrame:
	map_script_2 VAR_BLEAKISLE_TOWN_STATE, 3, BleakisleCave_SpiritRoom_EventScript_FindPina
	.2byte 0

BleakisleCave_SpiritRoom_EventScript_FindPina::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox BleakisleCave_SpiritRoom_Text_HelpMe, MSGBOX_AUTOCLOSE
	applymovement OBJ_EVENT_ID_PLAYER, BleakisleCave_SpiritRoom_Movement_ApproachPina
	waitmovement 0
	goto BleakisleCave_SpiritRoom_EventScript_SpiritombFight
	releaseall
	end

BleakisleCave_SpiritRoom_EventScript_SpiritombFight::
	lockall
	playmoncry SPECIES_SPIRITOMB_CURSED, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	msgbox BleakisleCave_SpiritRoom_Text_PinaWait, MSGBOX_AUTOCLOSE
	setwildbattle SPECIES_SPIRITOMB_CURSED, 70
	setvar VAR_0x8009, 0
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, BleakisleCave_SpiritRoom_SpiritombPostBattle
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, BleakisleCave_SpiritRoom_SpiritombPostBattle
	@ goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route120_EventScript_RemoveBridgeKecleonPostBattle
	releaseall
	end

BleakisleCave_SpiritRoom_SpiritombPostBattle::
	lockall
	setvar VAR_BLEAKISLE_TOWN_STATE, 4
	msgbox BleakisleCave_SpiritRoom_Text_ReturnToTown, MSGBOX_AUTOCLOSE
	delay 30
	warp MAP_BLEAKISLE_TOWN, 24, 10
	waitstate
	releaseall
	end

BleakisleCave_SpiritRoom_Movement_ApproachPina:
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_up
	step_end

BleakisleCave_SpiritRoom_Text_HelpMe:
	.string "???: You! Please!\n"
	.string "You have to help me!$"

BleakisleCave_SpiritRoom_Text_PinaWait:
	.string "???: Wait, it's coming back!$"

BleakisleCave_SpiritRoom_Text_ReturnToTown:
	.string "???: You saved me!\n"
	.string "We have to get back to town, my\l"
	.string "dad must be so worried.$"
