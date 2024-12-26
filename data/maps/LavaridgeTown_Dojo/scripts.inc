.set LOCALID_BLACK_BELT, 1
.set LOCALID_DOJO_MASTER, 2
.set LOCALID_OLD_MAN, 3

LavaridgeTown_Dojo_MapScripts::
	.byte 0

LavaridgeTown_Dojo_EventScript_BlackBelt::
	msgbox LavaridgeTown_Dojo_Text_BlackBeltStudent, MSGBOX_NPC
	setobjectmovementtype LOCALID_BLACK_BELT, MOVEMENT_TYPE_FACE_LEFT
	end

LavaridgeTown_Dojo_EventScript_DojoMaster::
	lockall
	@ intro training
	
	multichoice 0, 0, MULTI_DOJO_TRAINING_TYPES, FALSE
	switch VAR_RESULT
	case 0, LavaridgeTown_Dojo_EventScript_TrainHP
	case 1, LavaridgeTown_Dojo_EventScript_TrainAttack
	case 2, LavaridgeTown_Dojo_EventScript_TrainDefense
	case 3, LavaridgeTown_Dojo_EventScript_TrainSpAttack
	case 4, LavaridgeTown_Dojo_EventScript_TrainSpDefense
	case 5, LavaridgeTown_Dojo_EventScript_TrainSpeed
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
	@ case DIR_SOUTH, Route103_EventScript_RivalExitFacingSouth
	case DIR_NORTH, LavaridgeTown_Dojo_EventScript_WalkToBattleNorth
	case DIR_WEST, Route103_EventScript_RivalExitFacingEastOrWest
	case DIR_EAST, Route103_EventScript_RivalExitFacingEastOrWest

	end

LavaridgeTown_Dojo_EventScript_WalkToBattleNorth::
	applymovement OBJ_EVENT_ID_PLAYER, LavaridgeTown_Dojo_Movement_WalkToBattleNorth
	waitmovement 0
	goto LavaridgeTown_Dojo_EventScript_BattleBegin
	end

LavaridgeTown_Dojo_EventScript_BattleBegin::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	applymovement LOCALID_BLACK_BELT, Common_Movement_WalkLeft
	waitmovement 0
	msgbox LavaridgeTown_Dojo_Text_BattleBegin, MSGBOX_AUTOCLOSE
	call_if_eq VAR_0x8004, 0, LavaridgeTown_Dojo_EventScript_BattleHP
	@ call_if_eq VAR_0x8004, 1, LavaridgeTown_Dojo_EventScript_BattleAttack
	@ call_if_eq VAR_0x8004, 2, LavaridgeTown_Dojo_EventScript_BattleDefense
	@ call_if_eq VAR_0x8004, 3, LavaridgeTown_Dojo_EventScript_BattleSpAttack
	@ call_if_eq VAR_0x8004, 4, LavaridgeTown_Dojo_EventScript_BattleSpDefense
	@ call_if_eq VAR_0x8004, 5, LavaridgeTown_Dojo_EventScript_BattleSpeed
	@ battle two
	call_if_eq VAR_0x8004, 0, LavaridgeTown_Dojo_EventScript_BattleHP
	@ call_if_eq VAR_0x8004, 1, LavaridgeTown_Dojo_EventScript_BattleAttack
	@ call_if_eq VAR_0x8004, 2, LavaridgeTown_Dojo_EventScript_BattleDefense
	@ call_if_eq VAR_0x8004, 3, LavaridgeTown_Dojo_EventScript_BattleSpAttack
	@ call_if_eq VAR_0x8004, 4, LavaridgeTown_Dojo_EventScript_BattleSpDefense
	@ call_if_eq VAR_0x8004, 5, LavaridgeTown_Dojo_EventScript_BattleSpeed

	releaseall
	end

LavaridgeTown_Dojo_EventScript_BattleHP::
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

LavaridgeTown_Dojo_Text_DojoExplanation:
	.string "Welcome to my DOJO.\n"
	.string "Here you can train your POKéMON's\l"
	.string "stats individually.\p"
	.string "Each round of training will give\n"
	.string "you 30 points in the chosen stat.\p"
	.string "Would you like to begin?$"

LavaridgeTown_Dojo_Text_BattleBegin:
	.string "Battle, begin!$"

LavaridgeTown_Dojo_Text_BlackBeltStudent:
	.string "Speak to the Master if you would\n"
	.string "like to train.$"
