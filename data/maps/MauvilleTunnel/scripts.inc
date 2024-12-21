.set LOCALID_WALLY, 5

MauvilleTunnel_MapScripts::
	@ map_script MAP_SCRIPT_ON_TRANSITION, MauvilleTunnel_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MauvilleTunnel_OnFrame
	.byte 0

MauvilleTunnel_OnFrame:
	map_script_2 VAR_DIG_SITE_2_STATE, 0, MauvilleTunnel_EventScript_WallyFightGrunt
	.2byte 0

MauvilleTunnel_EventScript_WallyFightGrunt::
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	msgbox MauvilleTunnel_Text_WallyIllTakeHim, MSGBOX_AUTOCLOSE
	setvar VAR_DIG_SITE_2_STATE, 1
	end

MauvilleTunnel_EventScript_Wally::
	msgbox MauvilleTunnel_Text_Silent, MSGBOX_AUTOCLOSE
	end

MauvilleTunnel_EventScript_Grunt1::
	trainerbattle_single TRAINER_GRUNT_MAUVILLE_TUNNEL_1, MauvilleTunnel_Text_GonnaLose, MauvilleTunnel_Text_Silent
	msgbox MauvilleTunnel_Text_Silent, MSGBOX_AUTOCLOSE
	end

MauvilleTunnel_EventScript_Grunt2::
	trainerbattle_single TRAINER_GRUNT_MAUVILLE_TUNNEL_2, MauvilleTunnel_Text_WontWinThisTime, MauvilleTunnel_Text_Silent
	msgbox MauvilleTunnel_Text_Silent, MSGBOX_AUTOCLOSE
	end

MauvilleTunnel_EventScript_Grunt3::
	trainerbattle_single TRAINER_GRUNT_MAUVILLE_TUNNEL_3, MauvilleTunnel_Text_StopRightThere, MauvilleTunnel_Text_Silent
	msgbox MauvilleTunnel_Text_Silent, MSGBOX_AUTOCLOSE
	end

MauvilleTunnel_EventScript_GruntWally::
	msgbox MauvilleTunnel_Text_Silent, MSGBOX_AUTOCLOSE
	end

MauvilleTunnel_Text_WallyIllTakeHim:
	.string "WALLY: Grr…\p"
	.string "I'll take this guy, you go ahead!$"

MauvilleTunnel_Text_GonnaLose:
	.string "You're gonna lose, punk!$"

MauvilleTunnel_Text_WontWinThisTime:
	.string "You won't win this time!$"

MauvilleTunnel_Text_StopRightThere:
	.string "Hey, stop right there kid!$"

MauvilleTunnel_Text_Silent:
	.string "…$"
