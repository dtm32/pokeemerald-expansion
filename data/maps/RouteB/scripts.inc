RouteB_MapScripts::
	.byte 0

RouteB_EventScript_Jon::
	trainerbattle_single TRAINER_JON, RouteB_Text_JonIntro, RouteB_Text_JonDefeat
	msgbox RouteB_Text_JonPostBattle, MSGBOX_AUTOCLOSE
	end

RouteB_EventScript_Devin::
	trainerbattle_single TRAINER_DEVIN, RouteB_Text_DevinIntro, RouteB_Text_DevinDefeat
	msgbox RouteB_Text_DevinPostBattle, MSGBOX_AUTOCLOSE
	end

RouteB_EventScript_Daxter::
	trainerbattle_single TRAINER_DAXTER, RouteB_Text_DaxterIntro, RouteB_Text_DaxterDefeat
	msgbox RouteB_Text_DaxterPostBattle, MSGBOX_AUTOCLOSE
	end

RouteB_EventScript_Poppy::
	trainerbattle_single TRAINER_POPPY, RouteB_Text_PoppyIntro, RouteB_Text_PoppyDefeat
	msgbox RouteB_Text_PoppyPostBattle, MSGBOX_AUTOCLOSE
	end

RouteB_EventScript_AgathasHouseSign::
	msgbox RouteB_Text_AgathasHouseSign, MSGBOX_SIGN
	end

RouteB_Text_JonIntro:
	.string "I wanna fly!$"

RouteB_Text_JonDefeat:
	.string "Guess I'll never be a bird…$"

RouteB_Text_JonPostBattle:
	.string "Flying like a bird…$"

RouteB_Text_DevinIntro:
	.string "I couldn't even see you!$"

RouteB_Text_DevinDefeat:
	.string "I got caught up.$"

RouteB_Text_DevinPostBattle:
	.string "This grass is taller than me.$"

RouteB_Text_DaxterIntro:
	.string "I'm training for my next GYM BADGE.$"

RouteB_Text_DaxterDefeat:
	.string "You didn't tell me you had so\n"
	.string "many BADGES!$"

RouteB_Text_DaxterPostBattle:
	.string "Still got work to do…$"

RouteB_Text_PoppyIntro:
	.string "I planted those BERRIES over there!$"

RouteB_Text_PoppyDefeat:
	.string "Oof, I'm feeling snacky.$"

RouteB_Text_PoppyPostBattle:
	.string "I was named after the bagel!$"

RouteB_Text_AgathasHouseSign:
	.string "AGATHA'S HOUSE$"
