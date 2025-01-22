.set LOCALID_CAVE_COP, 1
.set LOCALID_COP, 4
.set LOCALID_AGATHA, 5
.set LOCALID_PINAS_DAD, 6
.set LOCALID_PINA, 7

BleakisleTown_MapScripts::
	@ map_script MAP_SCRIPT_ON_TRANSITION, BleakisleTown_PokemonCenter_OnTransition
	map_script MAP_SCRIPT_ON_TRANSITION, BleakisleTown_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BleakisleTown_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BleakisleTown_OnFrame
	.byte 0

BleakisleTown_OnTransition:
	call_if_eq VAR_BLEAKISLE_TOWN_STATE, 4, BleakisleTown_EventScript_ShowDad
	end

BleakisleTown_EventScript_ShowDad::
	setobjectxyperm LOCALID_COP, 20, 9
	@ setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_LEFT
	clearflag FLAG_HIDE_BLEAKISLE_TOWN_DAD
	@ setflag FLAG_HIDE_BLEAKISLE_POLICEMEN
	return

BleakisleTown_OnWarp:
	map_script_2 VAR_BLEAKISLE_TOWN_STATE, 4, BleakisleTown_EventScript_PlayerFaceWest
	.2byte 0

BleakisleTown_EventScript_PlayerFaceWest::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	turnobject LOCALID_AGATHA, DIR_EAST
	end

BleakisleTown_OnFrame:
	map_script_2 VAR_BLEAKISLE_TOWN_STATE, 4, BleakisleTown_EventScript_SavedPina
	.2byte 0

BleakisleTown_EventScript_SavedPina::
	lockall
	applymovement LOCALID_PINA, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox BleakisleTown_Text_Pina, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PINA, BleakisleTown_Movement_PinaRun
	waitmovement 0
	msgbox BleakisleTown_Text_Dad, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_AGATHA, BleakisleTown_Movement_AgathaApproach
	waitmovement 0
	msgbox BleakisleTown_Text_AgathaThankYou, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_AGATHA, BleakisleTown_Movement_AgathaLookAtCop
	waitmovement 0
	msgbox BleakisleTown_Text_AgathaComeFindMe, MSGBOX_DEFAULT
	closemessage

	fadescreen FADE_TO_BLACK
	setflag FLAG_HIDE_BLEAKISLE_POLICEMEN
	setflag FLAG_HIDE_BLEAKISLE_TOWN_DAD
	clearflag FLAG_HIDE_BLEAKISLE_WOODS_TRAINERS
	removeobject LOCALID_PINA
	removeobject LOCALID_PINAS_DAD
	removeobject LOCALID_AGATHA
	removeobject LOCALID_CAVE_COP
	setvar VAR_BLEAKISLE_TOWN_STATE, 5
	fadescreen FADE_FROM_BLACK

	applymovement LOCALID_COP, BleakisleTown_Movement_PolicemanApproach
	waitmovement 0
	goto BleakisleTown_EventScript_GiveAmuletCoin 
	releaseall
	end

BleakisleTown_EventScript_CenterPoliceman::
	lockall
	goto_if_unset FLAG_HIDE_BLEAKISLE_POLICEMEN, BleakisleTown_EventScript_GenericPoliceman
	goto_if_unset FLAG_RECEIVED_AMULET_COIN, BleakisleTown_EventScript_GiveAmuletCoin
	msgbox BleakisleTown_Text_CenterPolicemanAfterReward, MSGBOX_NPC
	closemessage
	releaseall
	end

BleakisleTown_EventScript_GiveAmuletCoin::
	lockall
	msgbox BleakisleTown_Text_PolicemanThankYou, MSGBOX_DEFAULT
	giveitem ITEM_AMULET_COIN
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	closemessage
	setflag FLAG_RECEIVED_AMULET_COIN
	releaseall
	end

BleakisleTown_Movement_PinaRun:
	walk_fast_left
	walk_fast_left
	step_end

BleakisleTown_Movement_AgathaApproach:
	walk_right
	walk_right
	step_end

BleakisleTown_Movement_PolicemanApproach:
	walk_right
	walk_right
	walk_down
	walk_right
	step_end

BleakisleTown_EventScript_Agatha::
	lock
	faceplayer
	goto_if_eq VAR_BLEAKISLE_TOWN_STATE, 0, BleakisleTown_EventScript_AgathaIntro
	goto_if_eq VAR_BLEAKISLE_TOWN_STATE, 1, BleakisleTown_EventScript_AgathaGoToWoods
	release
	end

BleakisleTown_EventScript_AgathaIntro::
	msgbox BleakisleTown_Text_AgathaIntro, MSGBOX_DEFAULT
	closemessage
	setvar VAR_BLEAKISLE_TOWN_STATE, 1
	applymovement LOCALID_AGATHA, BleakisleTown_Movement_AgathaLookAtCop
	waitmovement 0
	goto BleakisleTown_EventScript_AgathaSendToWoods
	end

BleakisleTown_EventScript_AgathaSendToWoods::
	msgbox BleakisleTown_Text_AgathaYouCanHelp, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_AGATHA, Common_Movement_FaceLeft
	waitmovement 0
	release
	end

BleakisleTown_EventScript_AgathaGoToWoods::
	faceplayer
	msgbox BleakisleTown_Text_AgathaGoToWoods, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_AGATHA, Common_Movement_FaceLeft
	waitmovement 0
	release
	end

BleakisleTown_EventScript_AromaticsShop::
	msgbox BleakisleTown_Text_AromaticsShopSign, MSGBOX_SIGN
	end

BleakisleTown_EventScript_HauntedPathSign::
	msgbox BleakisleTown_Text_HauntedPathSign, MSGBOX_SIGN
	end

BleakisleTown_Movement_AgathaLookAtCop:
	face_left
	delay_8
	delay_8
	delay_8
	delay_8
	delay_8
	delay_8
	face_player
	step_end

BleakisleTown_Text_AgathaIntro:
	.string "???: Oh, hello.\p"
	.string "… … …\n"
	.string "I can tell you are quite the trainer.\p"
	.string "Sorry, let my introduce myself.\n"
	.string "My name is AGATHA.\p"
	.string "I specialize in dealing with spirits.\n"
	.string "This town has long had issues with\l"
	.string "unexplained events.\p"
	.string "Unfortunately, a little girl has gone\n"
	.string "missing and they called me in to help\l"
	.string "find her.$"

BleakisleTown_Text_AgathaYouCanHelp:
	.string "AGATHA: You know what {PLAYER},\n"
	.string "I'm sending you on an errand.\p"
	.string "Go to the WOODS east of town and\n"
	.string "tell the POLICEMAN there I'm\l"
	.string "letting you in.\p"
	.string "I have a feeling the answer to our\n"
	.string "questions might be lurking there.$"

BleakisleTown_Text_AgathaGoToWoods:
	.string "AGATHA: Go to the WOODS east of\n"
	.string "town, the POLICEMAN will let\l"
	.string "you in.$"

BleakisleTown_Text_AromaticsShopSign:
	.string "AROMATICS SHOP\n"
	.string "“Burn to protect your spirit.”$"

BleakisleTown_Text_HauntedPathSign:
	.string "HAUNTED PATH$"

BleakisleTown_Text_Pina:
	.string "PINA: Dad! Dad!$"

BleakisleTown_Text_Dad:
	.string "My little girl! PINA!\n"
	.string "You're back!$"

BleakisleTown_Text_AgathaThankYou:
	.string "AGATHA: Thank you for your help.\n"
	.string "I think that angry POKéMON won't\l"
	.string "trouble this town anymore now.$"

BleakisleTown_Text_AgathaComeFindMe:
	.string "AGATHA: Come find me sometime when\n"
	.string "you've become the best TRAINER you\l"
	.string "can be.\p"
	.string "I'll be seeing you.$"

BleakisleTown_Text_PolicemanThankYou:
	.string "Thank you again for all your help.\n"
	.string "Here, take this as a reward.$"

BleakisleTown_EventScript_GenericPoliceman::
	msgbox BleakisleTown_Text_GenericPoliceman, MSGBOX_NPC
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

BleakisleTown_Text_GenericPoliceman:
	.string "Sorry I'm on duty, can't talk.$"

BleakisleTown_Text_CenterPolicemanAfterReward:
	.string "I'm glad to get out of here finally.\n"
	.string "Something about this town really\l"
	.string "creeps me out…$"
