.set LOCALID_BALD_MAN, 2
.set LOCALID_GRUNT_BOTTOM, 4
.set LOCALID_GRUNT_TOP, 5
.set LOCALID_ADMIN, 7
.set LOCALID_GRUNT, 8
.set LOCALID_WALLY, 9

DigSite2_MapScripts::
	.byte 0

DigSite2_EventScript_AdminTrigger1::
	lockall
	setvar VAR_0x8000, 1
	goto DigSite2_EventScript_AdminIntro
	end

DigSite2_EventScript_AdminTrigger2::
	lockall
	setvar VAR_0x8000, 2
	goto DigSite2_EventScript_AdminIntro
	end

DigSite2_EventScript_AdminTrigger3::
	lockall
	setvar VAR_0x8000, 3
	goto DigSite2_EventScript_AdminIntro
	end

DigSite2_EventScript_AdminTrigger4::
	lockall
	setvar VAR_0x8000, 4
	goto DigSite2_EventScript_AdminIntro
	end

DigSite2_EventScript_AdminTrigger5::
	lockall
	setvar VAR_0x8000, 5
	goto DigSite2_EventScript_AdminIntro
	end

DigSite2_EventScript_AdminIntro::
	lockall
	playse SE_PIN
	applymovement LOCALID_ADMIN, Common_Movement_FaceRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox DigSite2_Text_HeyYou, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
	waitmovement 0
	call_if_eq VAR_0x8000, 1, DigSite2_EventScript_WalkToAdmin1
	call_if_eq VAR_0x8000, 2, DigSite2_EventScript_WalkToAdmin2
	call_if_eq VAR_0x8000, 3, DigSite2_EventScript_WalkToAdmin3
	call_if_eq VAR_0x8000, 4, DigSite2_EventScript_WalkToAdmin4
	call_if_eq VAR_0x8000, 5, DigSite2_EventScript_WalkToAdmin5
	msgbox DigSite2_Text_AdminSpeech, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT_TOP, DigSite2_Movement_TopGruntApproach
	applymovement LOCALID_GRUNT_BOTTOM, DigSite2_Movement_BottomGruntApproach
	waitmovement 0
	goto DigSite2_EventScript_BattleThreeArcoMembers
	releaseall
	end

DigSite2_EventScript_WalkToAdmin1::
	applymovement OBJ_EVENT_ID_PLAYER, DigSite2_Movement_WalkToAdmin1
	waitmovement 0
	return

DigSite2_EventScript_WalkToAdmin2::
	applymovement OBJ_EVENT_ID_PLAYER, DigSite2_Movement_WalkToAdmin2
	waitmovement 0
	return

DigSite2_EventScript_WalkToAdmin3::
	applymovement OBJ_EVENT_ID_PLAYER, DigSite2_Movement_WalkToAdmin3
	waitmovement 0
	return

DigSite2_EventScript_WalkToAdmin4::
	applymovement OBJ_EVENT_ID_PLAYER, DigSite2_Movement_WalkToAdmin4
	waitmovement 0
	return

DigSite2_EventScript_WalkToAdmin5::
	applymovement OBJ_EVENT_ID_PLAYER, DigSite2_Movement_WalkToAdmin5
	waitmovement 0
	return

DigSite2_EventScript_BattleThreeArcoMembers::
	trainerbattle_two_trainers TRAINER_GRUNT_DIG_SITE_2_1, DigSite2_Text_Silent, TRAINER_GRUNT_DIG_SITE_2_2, DigSite2_Text_NotAgain
	applymovement LOCALID_ADMIN, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox DigSite2_Text_AdminIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_ADMIN_DIG_SITE_2, DigSite2_Text_Silent
	msgbox DigSite2_Text_AdminOutro, MSGBOX_DEFAULT
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	setvar VAR_DIG_SITE_2_STATE, 2
	setflag FLAG_HIDE_DIG_SITE_2_ARCO_MEMBERS
	setflag FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE
	removeobject LOCALID_ADMIN
	removeobject LOCALID_GRUNT
	removeobject LOCALID_GRUNT_TOP
	removeobject LOCALID_GRUNT_BOTTOM
	fadescreenswapbuffers FADE_FROM_BLACK
	goto DigSite2_EventScript_ThanksForComing
	releaseall
	end

DigSite2_EventScript_ThanksForComing::
	applymovement LOCALID_BALD_MAN, DigSite2_Movement_BaldManApproach
	waitmovement 0
	msgbox DigSite2_Text_BaldManThanks, MSGBOX_DEFAULT
	closemessage
	goto DigSite2_EventScript_WallyArrives
	releaseall
	end

DigSite2_EventScript_WallyArrives::
	clearflag FLAG_HIDE_DIG_SITE_2_WALLY
	addobject LOCALID_WALLY
	setobjectxy LOCALID_WALLY, 28, 15
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	applymovement LOCALID_WALLY, DigSite2_Movement_WallyApproach
	waitmovement LOCALID_WALLY
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	applymovement LOCALID_WALLY, Common_Movement_FaceUp
	waitmovement 0
	msgbox DigSite2_Text_Wally, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_WALLY, DigSite2_Movement_WallyLeaves
	waitmovement 0
	setflag FLAG_HIDE_DIG_SITE_2_WALLY
	removeobject LOCALID_WALLY
	releaseall
	end

DigSite2_Movement_WalkToAdmin1:
	walk_left
	walk_down
	walk_left
	step_end

DigSite2_Movement_WalkToAdmin2:
	walk_left
	walk_left
	step_end

DigSite2_Movement_WalkToAdmin3:
	walk_left
	walk_up
	walk_left
	step_end

DigSite2_Movement_WalkToAdmin4:
	walk_up
	walk_up
	walk_left
	step_end

DigSite2_Movement_WalkToAdmin5:
	walk_up
	walk_up
	walk_up
	walk_left
	step_end

DigSite2_Movement_TopGruntApproach:
	walk_fast_right
	walk_fast_right
	walk_in_place_faster_down
	step_end

DigSite2_Movement_BottomGruntApproach:
	walk_fast_right
	walk_fast_right
	walk_in_place_faster_up
	step_end

DigSite2_Movement_BaldManApproach:
	walk_right
	walk_right
	step_end

DigSite2_Movement_WallyApproach:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

DigSite2_Movement_WallyLeaves:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

DigSite2_Text_HeyYou:
	.string "???: You! Come here.$"

DigSite2_Text_AdminSpeech:
	.string "???: It's you again…\p"
	.string "Guess I should introduce myself.\n"
	.string "My name is BASTION, leader of\l"
	.string "TEAM ARCO.\p"
	.string "Once again you're too late.\n"
	.string "We've already packed up all of the\l"
	.string "equipment we needed here.\p"
	.string "GRUNTS, deal with him.$"

DigSite2_Text_Silent:
	.string "…$"

DigSite2_Text_NotAgain:
	.string "Not again…$"

DigSite2_Text_AdminIntro:
	.string "BASTION: Grr…$"

DigSite2_Text_AdminOutro:
	.string "BASTION: You people know so little\n"
	.string "about this world…\p"
	.string "I'm sure you'll see us again,\n"
	.string "but you won't be able to stop us.\p"
	.string "It's time for us to go.$"

DigSite2_Text_BaldManThanks:
	.string "Thanks for chasing those TEAM ARCO\n"
	.string "guys away for us!\p"
	.string "It looks like they took a lot of\n"
	.string "our equipment though…\p"
	.string "Looks like we're gonna have to shut\n"
	.string "down our operations here for a while.$"

DigSite2_Text_Wally:
	.string "WALLY: {PLAYER}!\n"
	.string "You already chased them all away!\p"
	.string "Great job, sorry I got held up\n"
	.string "there, but I knew you could handle\l"
	.string "all those other guys!\p"
	.string "…\n"
	.string "…\p"
	.string "Looks like they really interrupted\n"
	.string "the operations here.\p"
	.string "I'll have to give BRAWLY a call to\n"
	.string "see if he can bring some equipment.\p"
	.string "You should head back to MAUVILLE and\n"
	.string "challenge the GYM there.\p"
	.string "I've got to get going, see ya!$"
