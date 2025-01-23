PetalburgWoods2_MapScripts::
	.byte 0

PetalburgWoods2_EventScript_Elsa::
	trainerbattle_single TRAINER_ELSA, PetalburgWoods2_Text_BugsAreScary, PetalburgWoods2_Text_CuteEevee
	msgbox PetalburgWoods2_Text_Eek, MSGBOX_AUTOCLOSE
	end

PetalburgWoods2_EventScript_Reid::
	trainerbattle_single TRAINER_REID, PetalburgWoods2_Text_BirdsEatBugs, PetalburgWoods2_Text_GettingFat
	msgbox PetalburgWoods2_Text_BirdsEatBugs, MSGBOX_AUTOCLOSE
	end

PetalburgWoods2_EventScript_Aaron::
	msgbox PetalburgWoods2_Text_Aaron, MSGBOX_NPC
	end

PetalburgWoods2_Text_Aaron:
	.string "AARON: Hey {PLAYER}!\p"
	.string "Thanks for completing my\n"
	.string "challenge before.\p"
	.string "I'm working on setting up\n"
	.string "something really exciting for\l"
	.string "experienced TRAINERS like\l"
	.string "you here.\p"
	.string "I'll give you a call in a\n"
	.string "bit when it's ready!$"

PetalburgWoods2_Text_BugsAreScary:
	.string "I actually think bugs are kind\n"
	.string "of scary…$"

PetalburgWoods2_Text_CuteEevee:
	.string "My POKéMON is cute though right?$"

PetalburgWoods2_Text_Eek:
	.string "Eek! I think one brushed me!$"

PetalburgWoods2_Text_BirdsEatBugs:
	.string "Birds eat bugs.$"

PetalburgWoods2_Text_GettingFat:
	.string "My birds must be getting fat.$"

PetalburgWoods2_EventScript_FatMan::
	msgbox PetalburgWoods2_Text_WatchTheWater, MSGBOX_NPC
	end

PetalburgWoods2_Text_WatchTheWater:
	.string "I just like to come watch the\n"
	.string "reflections in the water.$"

PetalburgWoods2_EventScript_OldChateauSign::
	msgbox PetalburgWoods2_Text_OldChateau, MSGBOX_SIGN
	end

PetalburgWoods2_Text_OldChateau:
	.string "OLD CHATEAU$"
