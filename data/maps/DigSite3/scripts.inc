.set LOCALID_JOAQUIN, 3

DigSite3_MapScripts::
	.byte 0

DigSite3_EventScript_Rob::
	trainerbattle_single TRAINER_ROB, DigSite3_Text_RobIntro, DigSite3_Text_RobDefeat
	msgbox DigSite3_Text_RobPostBattle, MSGBOX_AUTOCLOSE
	end

DigSite3_EventScript_Man::
	msgbox DigSite3_Text_Man, MSGBOX_NPC
	end

DigSite3_EventScript_Scientist::
	msgbox DigSite3_Text_Scientist, MSGBOX_NPC
	end

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
	msgbox DigSite3_Text_JoaquinTutorIntro, MSGBOX_DEFAULT
	goto DigSite3_EventScript_JoaquinDisplayMoveList
	release
	end

DigSite3_EventScript_JoaquinTutorPickNewMove::
	faceplayer
	msgbox DigSite3_Text_JoaquinTutorPickNewMove, MSGBOX_DEFAULT
	goto DigSite3_EventScript_JoaquinDisplayMoveList
	end

DigSite3_EventScript_JoaquinDisplayMoveList::
	multichoice 0, 0, MULTI_ANCIENT_MOVE_TUTOR, FALSE
	switch VAR_RESULT
	case 0, DigSite3_EventScript_AncientVine
	case 1, DigSite3_EventScript_AncientEmber
	case 2, DigSite3_EventScript_AncientFlood
	case 3, DigSite3_EventScript_AncientSpark
	case MULTI_B_PRESSED, DigSite3_EventScript_MaybeNextTime
	closemessage
	@ setvar VAR_0x8005, MOVE_ANCIENT_VINE
	@ call MoveTutor_EventScript_OpenPartyMenu
	@ goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_ExplosionDeclined
	@ setflag FLAG_MOVE_TUTOR_TAUGHT_EXPLOSION
	@ goto MoveTutor_EventScript_ExplosionTaught
	@ applymovement LOCALID_JOAQUIN, Common_Movement_FaceDown
	@ waitmovement 0
	release
	end

DigSite3_EventScript_AncientVine::
	setvar VAR_0x8005, MOVE_ANCIENT_VINE
	goto DigSite3_EventScript_ConfirmMoveSelection
	end

DigSite3_EventScript_AncientEmber::
	setvar VAR_0x8005, MOVE_ANCIENT_EMBER
	goto DigSite3_EventScript_ConfirmMoveSelection
	end

DigSite3_EventScript_AncientFlood::
	setvar VAR_0x8005, MOVE_ANCIENT_FLOOD
	goto DigSite3_EventScript_ConfirmMoveSelection
	end

DigSite3_EventScript_AncientSpark::
	setvar VAR_0x8005, MOVE_ANCIENT_SPARK
	goto DigSite3_EventScript_ConfirmMoveSelection
	end

DigSite3_EventScript_ConfirmMoveSelection::
	special BufferBattleFrontierTutorMoveName
	buffernumberstring STR_VAR_2, VAR_0x8008
	msgbox DigSite3_Text_AreYouSureMove, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, DigSite3_EventScript_PickMon
	goto_if_eq VAR_RESULT, NO, DigSite3_EventScript_JoaquinTutorPickNewMove
	@ specialvar VAR_TEMP_1, GetFrontierBattlePoints
	@ goto_if_ge VAR_TEMP_1, VAR_0x8008, BattleFrontier_Lounge7_EventScript_TeachTutorMove
	@ msgbox BattleFrontier_Lounge7_Text_HaventGotEnoughPoints, MSGBOX_DEFAULT
	@ goto BattleFrontier_Lounge7_EventScript_ChooseNewMove
	release
	end

DigSite3_EventScript_PickMon::
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, DigSite3_EventScript_MaybeNextTime
	msgbox DigSite3_Text_BringMeMoreFossils, MSGBOX_AUTOCLOSE
	applymovement LOCALID_JOAQUIN, Common_Movement_FaceDown
	waitmovement 0
	release
	end

DigSite3_EventScript_MaybeNextTime::
	msgbox DigSite3_Text_MaybeNextTime, MSGBOX_AUTOCLOSE
	applymovement LOCALID_JOAQUIN, Common_Movement_FaceDown
	waitmovement 0
	release
	end

DigSite3_Text_JoaquinIntro:
	.string "Hey, I'm trying to focus!$"

DigSite3_Text_JoaquinDefeat:
	.string "Guess I need more fossils…$"

DigSite3_Text_JoaquinICanTeachFossils:
	.string "I just love fossil POKéMON!\p"
	.string "If you show me a cool fossil\n"
	.string "POKéMON I can teach them some\l"
	.string "powerful moves!$"

DigSite3_Text_JoaquinTutorIntro:
	.string "Did you bring me some cool fossils?\n"
	.string "Which move should I teach?$"

DigSite3_Text_JoaquinTutorPickNewMove:
	.string "Which move should I teach?$"

DigSite3_Text_AreYouSureMove:
	.string "You want me to teach {STR_VAR_1},\n"
	.string "right?$"

DigSite3_Text_MaybeNextTime:
	.string "Hunh? You changed your mind?\n"
	.string "Bring me some more fossils soon!$"

DigSite3_Text_BringMeMoreFossils:
	.string "Bring me some more fossils soon!$"

DigSite3_Text_RobIntro:
	.string "I'm just up here to watch the\n"
	.string "scientists work!$"

DigSite3_Text_RobDefeat:
	.string "I think I got distracted…$"

DigSite3_Text_RobPostBattle:
	.string "Isn't it nice that this ravine\n"
	.string "is sheltered from the sandstorm?$"

DigSite3_Text_Man:
	.string "Ever since we started excavating\n"
	.string "here, revived fossil POKéMON have\l"
	.string "started appearing in the wild!$"

DigSite3_Text_Scientist:
	.string "It's tiring working out here in\n"
	.string "the sun all day.\p"
	.string "That's why I always bring my\n"
	.string "WOOPER to cool us off with a\l"
	.string "nice WATER GUN when we need it!$"
