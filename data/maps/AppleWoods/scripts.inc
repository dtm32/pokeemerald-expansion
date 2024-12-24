.set LOCALID_RED, 1

AppleWoods_MapScripts::
	.byte 0

AppleWoods_EventScript_Red::
	lockall
	faceplayer
	msgbox AppleWoods_Text_RedIntro, MSGBOX_AUTOCLOSE
	applymovement LOCALID_RED, AppleWoods_Movement_RedExit
	waitmovement 0
	setflag FLAG_MET_RED
	removeobject LOCALID_RED
	releaseall
	end

AppleWoods_Movement_RedExit::
	jump_2_left
	delay_16
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end


AppleWoods_Text_RedIntro::
	.string "???: Hey TRAINER!\n"
	.string "My name is RED!\p"
	.string "My parents and I just moved here\n"
	.string "from KANTO!\p"
	.string "I just caught my first POKéMON and\n"
	.string "have been exploring this forest!\p"
	.string "Maybe I'll see you around!$"
