BleakisleWoods_MapScripts::
	.byte 0

BleakisleWoods_EventScript_Esmay::
	trainerbattle_single TRAINER_ESMAY, BleakisleWoods_Text_EsmayIntro, BleakisleWoods_Text_EsmayDefeat
	msgbox BleakisleWoods_Text_EsmayPostBattle, MSGBOX_AUTOCLOSE
	end

BleakisleWoods_EventScript_Colette::
	trainerbattle_single TRAINER_COLETTE, BleakisleWoods_Text_ColetteIntro, BleakisleWoods_Text_ColetteDefeat
	msgbox BleakisleWoods_Text_ColettePostBattle, MSGBOX_AUTOCLOSE
	end

BleakisleWoods_EventScript_Davin::
	trainerbattle_single TRAINER_DAVIN, BleakisleWoods_Text_DavinIntro, BleakisleWoods_Text_DavinDefeat
	msgbox BleakisleWoods_Text_DavinPostBattle, MSGBOX_AUTOCLOSE
	end

BleakisleWoods_Text_EsmayIntro:
	.string "There are… The spirits…\n"
	.string "Oh! Who are you?$"

BleakisleWoods_Text_EsmayDefeat:
	.string "It was true…$"

BleakisleWoods_Text_EsmayPostBattle:
	.string "They're still watching…$"

BleakisleWoods_Text_ColetteIntro:
	.string "I'm here to find my calling…\n"
	.string "Don't interrupt me.$"

BleakisleWoods_Text_ColetteDefeat:
	.string "Grr…$"

BleakisleWoods_Text_ColettePostBattle:
	.string "Get lost, stranger.$"

BleakisleWoods_Text_DavinIntro:
	.string "Something seems off about the BUGS\n"
	.string "in this forest.$"

BleakisleWoods_Text_DavinDefeat:
	.string "Agh! A ghost!$"

BleakisleWoods_Text_DavinPostBattle:
	.string "I'm starting to wonder…\n"
	.string "Was that a BUG that brushed my leg?\p"
	.string "Or was it something else?$"
