.set LOCALID_COP1, 1
.set LOCALID_COP2, 2

Route110East_MapScripts::
	.byte 0

Route110East_EventScript_PoliceTriggerRight::
	lockall
	applymovement LOCALID_COP1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_COP1, Route110East_EventScript_PoliceBlockRight
	waitmovement 0
	msgbox Route110East_Text_CrimeSceneAhead, MSGBOX_AUTOCLOSE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	applymovement LOCALID_COP1, Route110East_EventScript_PoliceReturnRight
	waitmovement 0
	releaseall
	end

Route110East_EventScript_PoliceTriggerMiddle::
	lockall
	applymovement LOCALID_COP2, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_COP2, Route110East_EventScript_PoliceBlockMiddle
	waitmovement 0
	msgbox Route110East_Text_CrimeSceneAhead, MSGBOX_AUTOCLOSE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	applymovement LOCALID_COP2, Route110East_EventScript_PoliceReturnMiddle
	waitmovement 0
	releaseall
	end

Route110East_EventScript_PoliceTriggerLeft::
	lockall
	applymovement LOCALID_COP2, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_COP2, Route110East_EventScript_PoliceBlockLeft
	waitmovement 0
	msgbox Route110East_Text_CrimeSceneAhead, MSGBOX_AUTOCLOSE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	applymovement LOCALID_COP2, Route110East_EventScript_PoliceReturnLeft
	waitmovement 0
	releaseall
	end

Route110East_EventScript_BlockadeCop::
	msgbox Route110East_Text_OnTheJob, MSGBOX_NPC
	end

Route110East_EventScript_PoliceBlockRight:
	walk_fast_down
	walk_in_place_faster_left
	step_end

Route110East_EventScript_PoliceReturnRight:
	walk_fast_up
	walk_in_place_faster_down
	step_end

Route110East_EventScript_PoliceBlockMiddle:
	walk_fast_right
	walk_fast_right
	walk_in_place_faster_up
	step_end

Route110East_EventScript_PoliceReturnMiddle:
	walk_fast_left
	walk_fast_left
	walk_in_place_faster_right
	step_end

Route110East_EventScript_PoliceBlockLeft:
	walk_fast_right
	walk_in_place_faster_up
	step_end

Route110East_EventScript_PoliceReturnLeft:
	walk_fast_left
	walk_in_place_faster_right
	step_end

Route110East_Text_CrimeSceneAhead:
	.string "Sorry, this area is off limits.\n"
	.string "There's a crime scene ahead.$"

Route110East_Text_OnTheJob:
	.string "… … …\n"
	.string "Sorry can't talk right now.$"