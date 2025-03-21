.set LOCALID_GRUNT_1, 1

ZoneA_MapScripts::
	.byte 0

RouteA_EventScript_Grunt1::
	trainerbattle_single TRAINER_GRUNT_ROUTE_A_1, RouteA_Text_Grunt1Intro, RouteA_Text_Grunt1Defeated, RouteA_EventScript_Grunt1Defeated
	msgbox RouteA_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	closemessage
	applymovement LOCALID_GRUNT_1, RouteA_Movement_Grunt1RunAway
	end

RouteA_EventScript_Grunt1Defeated::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox RouteA_Text_Grunt1PostBattle, MSGBOX_DEFAULT
	applymovement LOCALID_GRUNT_1, RouteA_Movement_Grunt1RunAway
	waitmovement 0
	setflag FLAG_HIDE_ROUTE_A_GRUNT_1
	removeobject LOCALID_GRUNT_1
	release
	return

RouteA_EventScript_Scientist1::
	msgbox RouteA_Text_Scientist1, MSGBOX_NPC
	end

RouteA_Movement_Grunt1RunAway:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

RouteA_EventScript_Grunt2::
	trainerbattle_single TRAINER_GRUNT_ROUTE_A_2, RouteA_Text_Grunt2Intro, RouteA_Text_SilentTreatment
	goto RouteA_EventScript_Grunt3
	end

RouteA_EventScript_Grunt3::
	msgbox RouteA_Text_SilentTreatment, MSGBOX_AUTOCLOSE
	end

ZoneAlpha_EventScript_RestrictedSign::
	msgbox RouteA_Text_RestrictedSign, MSGBOX_SIGN
	end

RouteA_Text_Grunt1Intro:
	.string "Hey! What happened to our guard!$"

RouteA_Text_Grunt1Defeated:
	.string "Crap…$"

RouteA_Text_Grunt1PostBattle:
	.string "…\n"
	.string "…\n"
	.string "Gotta go tell the boss.$"

RouteA_Text_Grunt2Intro:
	.string "Our work is coming along nicely.$"

RouteA_Text_SilentTreatment:
	.string "…$"

RouteA_Text_Scientist1:
	.string "The DELTA GENE we use to induce the\n"
	.string "transformation was extracted from\l"
	.string "a recently discovered mythical\l"
	.string "POKéMON!$"

RouteA_Text_RestrictedSign:
	.string "RESTRICTED AREA$"
