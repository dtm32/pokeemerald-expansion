.set LOCALID_JOAQUIN, 3

DigSite3_MapScripts::
	.byte 0

DigSite3_EventScript_Joaquin::
	lock
	goto_if_defeated TRAINER_JOAQUIN, DigSite3_EventScript_JoaquinTutor
	trainerbattle_single TRAINER_JOAQUIN, DigSite3_Text_JoaquinIntro, DigSite3_Text_JoaquinDefeat, DigSite3_EventScript_JoaquinDefeated
	release
	end

DigSite3_EventScript_JoaquinDefeated::
	msgbox DigSite3_Text_JoaquinICanTeachFossils, MSGBOX_DEFAULT
	applymovement LOCALID_JOAQUIN, Common_Movement_FaceDown
	waitmovement 0
	release
	end

DigSite3_EventScript_JoaquinTutor::
	faceplayer
	msgbox DigSite3_Text_JoaquinTutorIntro, MSGBOX_AUTOCLOSE
	multichoice 0, 0, MULTI_ANCIENT_MOVE_TUTOR, FALSE
	closemessage
	switch VAR_RESULT
	case 0, DigSite3_EventScript_AncientVine
	case 1, DigSite3_EventScript_AncientVine
	case 2, DigSite3_EventScript_AncientVine
	case 3, DigSite3_EventScript_AncientVine

	@ setvar VAR_0x8005, MOVE_ANCIENT_VINE
	@ call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_ExplosionDeclined
	@ setflag FLAG_MOVE_TUTOR_TAUGHT_EXPLOSION
	goto MoveTutor_EventScript_ExplosionTaught
	applymovement LOCALID_JOAQUIN, Common_Movement_FaceDown
	waitmovement 0
	release
	end

DigSite3_EventScript_AncientVine::
	setvar VAR_0x8005, MOVE_ANCIENT_VINE
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

DigSite3_EventScript_ConfirmMoveSelection::
	special BufferBattleFrontierTutorMoveName
	buffernumberstring STR_VAR_2, VAR_0x8008
	msgbox DigSite3_Text_AreYouSureMove, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, BattleFrontier_Lounge7_EventScript_ChooseNewMove
	@ specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, BattleFrontier_Lounge7_EventScript_TeachTutorMove
	msgbox BattleFrontier_Lounge7_Text_HaventGotEnoughPoints, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge7_EventScript_ChooseNewMove
	release
	end

DigSite3_EventScript_PickMon::
	call MoveTutor_EventScript_OpenPartyMenu
	release
	end

DigSite3_Text_JoaquinIntro:
	.string "Hey, I'm trying to focus!$"

DigSite3_Text_JoaquinDefeat:
	.string "Guess I need more fossils…$"

DigSite3_Text_JoaquinICanTeachFossils:
	.string "I just love fossil POKéMON!\p"
	.string "If you show me some cool fossil\n"
	.string "POKéMON I can teach them some\l"
	.string "powerful moves!$"

DigSite3_Text_JoaquinTutorIntro:
	.string "Did you bring me some cool fossils?\n"
	.string "Which move should I teach?$"

DigSite3_Text_AreYouSureMove:
	.string "You want me to teach {STR_VAR_1}, right?$"

