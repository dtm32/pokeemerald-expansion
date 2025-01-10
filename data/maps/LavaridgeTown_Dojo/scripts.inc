.set LOCALID_BLACK_BELT, 1
.set LOCALID_DOJO_MASTER, 2
.set LOCALID_OLD_MAN, 3

LavaridgeTown_Dojo_MapScripts::
	.byte 0

LavaridgeTown_Dojo_EventScript_BlackBelt::
	msgbox LavaridgeTown_Dojo_Text_BlackBeltStudent, MSGBOX_NPC
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	end

LavaridgeTown_Dojo_EventScript_DojoMaster::
	lockall
	faceplayer
	showmoneybox 0, 0
	msgbox LavaridgeTown_Dojo_Text_DojoExplanation, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, LavaridgeTown_Dojo_EventScript_DojoMasterCheckMoney
	closemessage
	hidemoneybox
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

LavaridgeTown_Dojo_EventScript_DojoMasterCheckMoney::
	hidemoneybox
	checkmoney 3000
	goto_if_eq VAR_RESULT, NO, LavaridgeTown_Dojo_EventScript_DojoMasterNotEnoughMoney
	goto LavaridgeTown_Dojo_EventScript_DojoMasterSelectTraining
	end

LavaridgeTown_Dojo_EventScript_DojoMasterNotEnoughMoney::
	msgbox LavaridgeTown_Dojo_Text_NotEnoughMoney, MSGBOX_AUTOCLOSE
	releaseall
	end

LavaridgeTown_Dojo_EventScript_DojoMasterSelectTraining::
	msgbox LavaridgeTown_Dojo_Text_DojoSelect, MSGBOX_DEFAULT
	multichoice 0, 0, MULTI_DOJO_TRAINING_TYPES, FALSE
	closemessage
	switch VAR_RESULT
	case 0, LavaridgeTown_Dojo_EventScript_TrainHP
	case 1, LavaridgeTown_Dojo_EventScript_TrainAttack
	case 2, LavaridgeTown_Dojo_EventScript_TrainDefense
	case 3, LavaridgeTown_Dojo_EventScript_TrainSpAttack
	case 4, LavaridgeTown_Dojo_EventScript_TrainSpDefense
	case 5, LavaridgeTown_Dojo_EventScript_TrainSpeed
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

LavaridgeTown_Dojo_EventScript_TrainHP::
	setvar VAR_0x8004, 0
	goto LavaridgeTown_Dojo_EventScript_WalkToBattle
	end

LavaridgeTown_Dojo_EventScript_TrainAttack::
	setvar VAR_0x8004, 1
	goto LavaridgeTown_Dojo_EventScript_WalkToBattle
	end

LavaridgeTown_Dojo_EventScript_TrainDefense::
	setvar VAR_0x8004, 2
	goto LavaridgeTown_Dojo_EventScript_WalkToBattle
	end

LavaridgeTown_Dojo_EventScript_TrainSpAttack::
	setvar VAR_0x8004, 3
	goto LavaridgeTown_Dojo_EventScript_WalkToBattle
	end

LavaridgeTown_Dojo_EventScript_TrainSpDefense::
	setvar VAR_0x8004, 4
	goto LavaridgeTown_Dojo_EventScript_WalkToBattle
	end

LavaridgeTown_Dojo_EventScript_TrainSpeed::
	setvar VAR_0x8004, 5
	goto LavaridgeTown_Dojo_EventScript_WalkToBattle
	end

LavaridgeTown_Dojo_EventScript_WalkToBattle::
	switch VAR_FACING
	case DIR_NORTH, LavaridgeTown_Dojo_EventScript_WalkToBattleNorth
	case DIR_EAST, LavaridgeTown_Dojo_EventScript_WalkToBattleEast
	case DIR_SOUTH, LavaridgeTown_Dojo_EventScript_WalkToBattleSouth
	case DIR_WEST, LavaridgeTown_Dojo_EventScript_WalkToBattleWest
	releaseall
	end

LavaridgeTown_Dojo_EventScript_WalkToBattleNorth::
	applymovement OBJ_EVENT_ID_PLAYER, LavaridgeTown_Dojo_Movement_WalkToBattleNorth
	waitmovement 0
	goto LavaridgeTown_Dojo_EventScript_BattleBegin
	end

LavaridgeTown_Dojo_EventScript_WalkToBattleEast::
	applymovement OBJ_EVENT_ID_PLAYER, LavaridgeTown_Dojo_Movement_WalkToBattleEast
	waitmovement 0
	goto LavaridgeTown_Dojo_EventScript_BattleBegin
	end

LavaridgeTown_Dojo_EventScript_WalkToBattleSouth::
	applymovement OBJ_EVENT_ID_PLAYER, LavaridgeTown_Dojo_Movement_WalkToBattleSouth
	waitmovement 0
	goto LavaridgeTown_Dojo_EventScript_BattleBegin
	end

LavaridgeTown_Dojo_EventScript_WalkToBattleWest::
	applymovement OBJ_EVENT_ID_PLAYER, LavaridgeTown_Dojo_Movement_WalkToBattleWest
	waitmovement 0
	goto LavaridgeTown_Dojo_EventScript_BattleBegin
	end

LavaridgeTown_Dojo_EventScript_BattleBegin::
	applymovement LOCALID_DOJO_MASTER, Common_Movement_WalkInPlaceFasterUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	applymovement LOCALID_BLACK_BELT, Common_Movement_WalkLeft
	waitmovement 0
	msgbox LavaridgeTown_Dojo_Text_BattleBegin1, MSGBOX_AUTOCLOSE
	call_if_eq VAR_0x8004, 0, LavaridgeTown_Dojo_EventScript_BattleHP
	call_if_eq VAR_0x8004, 1, LavaridgeTown_Dojo_EventScript_BattleAttack
	call_if_eq VAR_0x8004, 2, LavaridgeTown_Dojo_EventScript_BattleDefense
	call_if_eq VAR_0x8004, 3, LavaridgeTown_Dojo_EventScript_BattleSpAttack
	call_if_eq VAR_0x8004, 4, LavaridgeTown_Dojo_EventScript_BattleSpDefense
	call_if_eq VAR_0x8004, 5, LavaridgeTown_Dojo_EventScript_BattleSpeed
	@ battle two
	applymovement LOCALID_DOJO_MASTER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox LavaridgeTown_Dojo_Text_BattleBegin2, MSGBOX_AUTOCLOSE
	call_if_eq VAR_0x8004, 0, LavaridgeTown_Dojo_EventScript_BattleHP
	call_if_eq VAR_0x8004, 1, LavaridgeTown_Dojo_EventScript_BattleAttack
	call_if_eq VAR_0x8004, 2, LavaridgeTown_Dojo_EventScript_BattleDefense
	call_if_eq VAR_0x8004, 3, LavaridgeTown_Dojo_EventScript_BattleSpAttack
	call_if_eq VAR_0x8004, 4, LavaridgeTown_Dojo_EventScript_BattleSpDefense
	call_if_eq VAR_0x8004, 5, LavaridgeTown_Dojo_EventScript_BattleSpeed
	goto LavaridgeTown_Dojo_EventScript_BattleEnd
	releaseall
	end

LavaridgeTown_Dojo_EventScript_BattleEnd::
	removemoney 3000
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	applymovement LOCALID_BLACK_BELT, Common_Movement_WalkRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_BLACK_BELT, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox LavaridgeTown_Dojo_Text_BlackBeltStudentThankYou, MSGBOX_AUTOCLOSE
	applymovement LOCALID_DOJO_MASTER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	releaseall
	end

LavaridgeTown_Dojo_EventScript_BattleHP::
	trainerbattle_no_intro TRAINER_DOJO_HP, LavaridgeTown_Dojo_Text_BlackBeltStudentDefeat
	return

LavaridgeTown_Dojo_EventScript_BattleAttack::
	trainerbattle_no_intro TRAINER_DOJO_ATTACK, LavaridgeTown_Dojo_Text_BlackBeltStudentDefeat
	return

LavaridgeTown_Dojo_EventScript_BattleDefense::
	trainerbattle_no_intro TRAINER_DOJO_DEFENSE, LavaridgeTown_Dojo_Text_BlackBeltStudentDefeat
	return

LavaridgeTown_Dojo_EventScript_BattleSpAttack::
	trainerbattle_no_intro TRAINER_DOJO_SP_ATTACK, LavaridgeTown_Dojo_Text_BlackBeltStudentDefeat
	return

LavaridgeTown_Dojo_EventScript_BattleSpDefense::
	trainerbattle_no_intro TRAINER_DOJO_SP_DEFENSE, LavaridgeTown_Dojo_Text_BlackBeltStudentDefeat
	return

LavaridgeTown_Dojo_EventScript_BattleSpeed::
	trainerbattle_no_intro TRAINER_DOJO_SPEED, LavaridgeTown_Dojo_Text_BlackBeltStudentDefeat
	return

LavaridgeTown_EventScript_Youngster::
	msgbox LavaridgeTown_Dojo_Text_Youngster, MSGBOX_NPC
	end

LavaridgeTown_EventScript_Trainer::
	msgbox LavaridgeTown_Dojo_Text_Trainer, MSGBOX_NPC
	end

LavaridgeTown_EventScript_Expert::
	@ TODO: Trade bottle cap to max IVs
	msgbox LavaridgeTown_Dojo_Text_Expert, MSGBOX_NPC
	end

LavaridgeTown_Dojo_Movement_WalkToBattleNorth:
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_up
	walk_in_place_faster_right
	delay_8
	step_end

LavaridgeTown_Dojo_Movement_WalkToBattleEast:
	walk_left
	walk_up
	walk_up
	walk_left
	walk_left
	walk_up
	walk_in_place_faster_right
	delay_8
	step_end

LavaridgeTown_Dojo_Movement_WalkToBattleSouth:
	walk_left
	walk_left
	walk_up
	walk_left
	walk_left
	walk_up
	walk_in_place_faster_right
	delay_8
	step_end

LavaridgeTown_Dojo_Movement_WalkToBattleWest:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_up
	walk_in_place_faster_right
	delay_8
	step_end

LavaridgeTown_Dojo_Text_DojoExplanation:
	.string "Welcome to my DOJO.\p"
	.string "Here you can train your POKéMON's\n"
	.string "stats individually.\p"
	.string "Each bout of training costs ¥4,000\n"
	.string "and will give you 36 EVs.\p"
	.string "Would you like to begin?$"

LavaridgeTown_Dojo_Text_DojoSelect:
	.string "Please select the stat to train.$"

LavaridgeTown_Dojo_Text_BattleBegin1:
	.string "Round one, battle begin!$"

LavaridgeTown_Dojo_Text_BattleBegin2:
	.string "Round two, battle begin!$"

LavaridgeTown_Dojo_Text_BlackBeltStudent:
	.string "Speak to the Master if you would\n"
	.string "like to train.$"

LavaridgeTown_Dojo_Text_BlackBeltStudentDefeat:
	.string "…$"

LavaridgeTown_Dojo_Text_BlackBeltStudentThankYou:
	.string "Arigatou Gozaimashita!$"

LavaridgeTown_Dojo_Text_NotEnoughMoney:
	.string "You don't have enough money.$"

LavaridgeTown_Dojo_Text_Youngster:
	.string "I heard that old man in the corner\n"
	.string "used to be quite the POKéMON master!$"

LavaridgeTown_Dojo_Text_Trainer:
	.string "I accidentally spent all my cash\n"
	.string "training all day!$"

LavaridgeTown_Dojo_Text_Expert:
	.string "Kekekeke…\n"
	.string "I love watching young men fight!$"
