.set LOCALID_RED, 9

FieryPath_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FieryPath_OnTransition
	.byte 0

FieryPath_OnTransition:
	call_if_unset FLAG_LANDMARK_FIERY_PATH, FieryPath_EventScript_MoveScottToFallarbor
	setflag FLAG_LANDMARK_FIERY_PATH
	end

FieryPath_EventScript_MoveScottToFallarbor::
	setflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
	clearflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
	return

FieryPath_EventScript_RedTrigger1::
	lockall
	setobjectxyperm LOCALID_RED, 18, 5
	goto FieryPath_EventScript_Red
	end

FieryPath_EventScript_RedTrigger3::
	lockall
	setobjectxyperm LOCALID_RED, 20, 5
	goto FieryPath_EventScript_Red
	end

FieryPath_EventScript_Red::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	addobject LOCALID_RED
	applymovement LOCALID_RED, FieryPath_Movement_RedEntrance
	waitmovement 0
	goto_if_unset FLAG_MET_RED, FieryPath_EventScript_RedIntroHaventMet
	goto FieryPath_EventScript_RedIntro
	end

FieryPath_EventScript_RedIntroHaventMet::
	msgbox FieryPath_Text_RedIntroHaventMet, MSGBOX_AUTOCLOSE
	goto FieryPath_EventScript_RedBattle
	end

FieryPath_EventScript_RedIntro::
	msgbox FieryPath_Text_RedIntro, MSGBOX_AUTOCLOSE
	goto FieryPath_EventScript_RedBattle
	end

FieryPath_EventScript_RedBattle::
	trainerbattle_no_intro TRAINER_RED_1, FieryPath_Text_RedDefeat
	msgbox FieryPath_Text_RedOutro, MSGBOX_AUTOCLOSE
	applymovement LOCALID_RED, FieryPath_Movement_RedExit
	waitmovement 0
	setflag FLAG_MET_RED
	releaseall
	end

FieryPath_Movement_RedEntrance:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

FieryPath_Movement_RedExit:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

FieryPath_Text_RedIntro:
	.string "RED: Hey {PLAYER}!\n"
	.string "Good to see you again!\p"
	.string "Want to see all the POKéMON\n"
	.string "I've collected?$"

FieryPath_Text_RedIntroHaventMet:
	.string "???: Hey TRAINER!\n"
	.string "My name is RED!\p"
	.string "My parents and I just moved here\n"
	.string "from KANTO!\p"
	.string "Want to see all the POKéMON\n"
	.string "I've collected?$"

FieryPath_Text_RedDefeat:
	.string "Wow, you're great!$"

FieryPath_Text_RedOutro:
	.string "I need to collect more POKéMON\n"
	.string "and keep training!\p"
	.string "I'll see you soon {PLAYER}!$"
