.set LOCALID_POLICEMAN, 9

ZoneB_MapScripts::
	.byte 0

ZoneB_EventScript_Policeman::
	lock
	goto_if_eq VAR_BLEAKISLE_TOWN_STATE, 2, ZoneB_EventScript_Policeman2
	msgbox ZoneB_Text_PoliceBlockForest, MSGBOX_NPC
	applymovement LOCALID_POLICEMAN, Common_Movement_FaceLeft
	waitmovement 0
	release
	end

ZoneB_EventScript_Policeman2::
	msgbox ZoneB_Text_PolicemanGoRightAhead, MSGBOX_NPC
	release
	end

ZoneB_EventScript_PoliceTrigger0::
	lock
	applymovement LOCALID_POLICEMAN, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	msgbox ZoneB_Text_PoliceBlockForest, MSGBOX_AUTOCLOSE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	release
	end

ZoneB_EventScript_PoliceTrigger1::
	lock
	applymovement LOCALID_POLICEMAN, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	msgbox ZoneB_Text_PoliceLetIntoForest, MSGBOX_AUTOCLOSE
	setvar VAR_BLEAKISLE_TOWN_STATE, 2
	release
	end

@ ZoneB_Movement_

ZoneB_Text_PoliceBlockForest:
	.string "Sorry, the woods are off limits while\n"
	.string "we finish our investigation.$"

ZoneB_Text_PoliceLetIntoForest:
	.string "Sorry, this area is off limits-\p"
	.string "Oh, AGATHA said to let you by?\n"
	.string "My apologies, go right ahead.$"

ZoneB_Text_PolicemanGoRightAhead:
	.string "Be careful in there.\n"
	.string "People say this forest is haunted.$"
