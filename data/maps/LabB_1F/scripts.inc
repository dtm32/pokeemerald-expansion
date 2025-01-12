.set LOCALID_NORMAN, 3
.set LOCALID_LEAD_SCIENTIST, 2
.set LOCALID_SCIENTIST2, 1

LabB_1F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LabB_1F_OnFrame
	map_script MAP_SCRIPT_ON_TRANSITION, LabB_1F_OnTransition
	.byte 0

LabB_1F_OnTransition:
	call_if_eq VAR_LAB_B_STATE, 0, LabB_1F_EventScript_LeadScientistFaceDown
	end

LabB_1F_EventScript_LeadScientistFaceDown::
	setobjectmovementtype LOCALID_LEAD_SCIENTIST, MOVEMENT_TYPE_FACE_DOWN
	end

LabB_1F_OnFrame:
	map_script_2 VAR_LAB_B_STATE, 0, LabB_1F_EventScript_WalkToNorman
	.2byte 0

LabB_1F_EventScript_WalkToNorman::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, LabB_1F_Movement_WalkToNorman
	waitmovement 0
	msgbox LabB_1F_Text_NormanIntro, MSGBOX_DEFAULT
	closemessage
	goto_if_set FLAG_PICKED_LILEEP, LabB_1F_EventScript_NormanBattleLileepStarter
	goto LabB_1F_EventScript_NormanBattleAnorithStarter
	end

LabB_1F_EventScript_NormanBattleAnorithStarter::
	trainerbattle_no_intro TRAINER_NORMAN_LAB_B_ANORITH, LabB_1F_Text_NormanDefeat
	msgbox LabB_1F_Text_NormanPostBattleAnorithStarter, MSGBOX_DEFAULT
	closemessage
	goto LabB_1F_EventScript_NormanExit
	end

LabB_1F_EventScript_NormanBattleLileepStarter::
	trainerbattle_no_intro TRAINER_NORMAN_LAB_B_LILEEP, LabB_1F_Text_NormanDefeat
	msgbox LabB_1F_Text_NormanPostBattleLileepStarter, MSGBOX_DEFAULT
	closemessage
	goto LabB_1F_EventScript_NormanExit
	end

LabB_1F_EventScript_NormanExit::
	applymovement LOCALID_NORMAN, LabB_1F_Movement_NormanExit
	waitmovement 0
	removeobject LOCALID_NORMAN
	setvar VAR_LAB_B_STATE, 1
	setflag FLAG_HIDE_ROUTE_110E_COP_BLOCKADE
	setflag FLAG_HIDE_NORMAN_LAB_B
	end

LabB_1F_Movement_WalkToNorman:
	walk_up
	walk_right
	walk_right
	walk_up
	step_end

LabB_1F_Movement_NormanExit:
	walk_left
	walk_down
	walk_down
	walk_down
	delay_8
	step_end

LabB_1F_EventScript_LeadScientist::
	lockall
	faceplayer
	goto_if_unset FLAG_RECEIVED_DELTA_DRIVE_SPE, LabB_1F_EventScript_GiveDeltaDriveSpe
	msgbox LabB_1F_Text_BringUsOtherSpecies, MSGBOX_DEFAULT
	closemessage
	releaseall
	end

LabB_1F_EventScript_GiveDeltaDriveSpe::
	msgbox LabB_1F_Text_GiveDeltaDriveSpe, MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_DELTA_DRIVE_SPE
	msgbox LabB_1F_Text_ExplainDeltaDrive, MSGBOX_DEFAULT
	msgbox LabB_1F_Text_BringUsOtherSpecies, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_RECEIVED_DELTA_DRIVE_SPE
	releaseall
	end

LabB_1F_EventScript_Scientist1::
	lock
	msgbox LabB_1F_Text_AlmostDoneResetting, MSGBOX_DEFAULT
	closemessage
	release
	end

LabB_1F_EventScript_Scientist2::
	lock
	faceplayer
	msgbox LabB_1F_Text_SorryLotsOfWork, MSGBOX_NPC
	applymovement LOCALID_SCIENTIST2, Common_Movement_FaceUp
	release
	end

@ Todo: finish basement scripts, for now block
LabB_1F_EventScript_Scientist3::
	msgbox LabB_1F_Text_SystemsOffline, MSGBOX_NPC
	end

LabB_1F_Text_NormanIntro:
	.string "DAD: {PLAYER}! Good to see you!\p"
	.string "I've been working on my own FOSSIL\n"
	.string "research with the help from my old\l"
	.string "friend here!\p"
	.string "And we've made a breakthrough!\n"
	.string "By leveraging the abilities of their\l"
	.string "DELTA technology on my restored\l"
	.string "FOSSILS, we were able to unlock\l"
	.string "the true original typing of my\l"
	.string "POKéMON!\p"
	.string "And after that, something even more\n"
	.string "amazing happened!\p"
	.string "Here, let me show you!$"

LabB_1F_Text_NormanDefeat:
	.string "Wow, you've gotten good!$"

LabB_1F_Text_NormanPostBattleAnorithStarter:
	.string "DAD: Incredible battle {PLAYER}!\n"
	.string "You really didn't pull any punches!\p"
	.string "But anyway, as you can see, after\n"
	.string "fully restoring my CRADILY, it\l"
	.string "managed to evolve again!\p"
	.string "I bet your ARMALDO is capable of\n"
	.string "doing the same!\p"
	.string "Come swimg by my LAB when you\n"
	.string "get a chance if you want me to\l"
	.string "perform the restoration!$"

LabB_1F_Text_NormanPostBattleLileepStarter:
	.string "DAD: Incredible battle {PLAYER}!\n"
	.string "You really didn't pull any punches!\p"
	.string "But anyway, as you can see, after\n"
	.string "fully restoring my ARMALDO, it\l"
	.string "managed to evolve again!\p"
	.string "I bet your CRADILY is capable of\n"
	.string "doing the same!\p"
	.string "Come swing by my LAB when you\n"
	.string "get a chance if you want me to\l"
	.string "perform the restoration!$"

LabB_1F_Text_GiveDeltaDriveSpe:
	.string "Hey there {PLAYER}!\n"
	.string "Your father told me lots of\l"
	.string "great things about you!\p"
	.string "Here, take this item we've\n"
	.string "been experimenting with!$"

LabB_1F_Text_ExplainDeltaDrive:
	.string "That drive will work for all\n"
	.string "DELTA POKéMON created at any\l"
	.string "of our partnered LABS.\p"
	.string "We're working on other drives\n"
	.string "with different effects too!$"

LabB_1F_Text_BringUsOtherSpecies:
	.string "If you can bring us one of each\n"
	.string "POKéMON to convert, that would\l"
	.string "help us finish up our testing on\l"
	.string "the other drives!$"

LabB_1F_Text_AlmostDoneResetting:
	.string "Almost done resetting the system…$"

LabB_1F_Text_SorryLotsOfWork:
	.string "I'm sorry, but I have lots of\n"
	.string "work to do…$"

LabB_1F_Text_SystemsOffline:
	.string "Some of our systems are currently\n"
	.string "offline. Best if you stay up here.$"
