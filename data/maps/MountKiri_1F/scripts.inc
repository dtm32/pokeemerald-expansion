MountKiri_1F_MapScripts::
	.byte 0

MountKiri_1F_EventScript_Oliver::
	trainerbattle_single TRAINER_OLIVER, MountKiri_1F_Text_OliverIntro, MountKiri_1F_Text_OliverDefeat
	msgbox MountKiri_1F_Text_OliverIntro, MSGBOX_AUTOCLOSE
	end

MountKiri_1F_EventScript_Emmett::
	trainerbattle_single TRAINER_EMMETT, MountKiri_1F_Text_EmmettIntro, MountKiri_1F_Text_EmmettDefeat
	msgbox MountKiri_1F_Text_EmmettPostBattle, MSGBOX_AUTOCLOSE
	end

MountKiri_1F_EventScript_Adriana::
	trainerbattle_single TRAINER_ADRIANA, MountKiri_1F_Text_AdrianaIntro, MountKiri_1F_Text_AdrianaDefeat, MountKiri_1F_EventScript_AdrianaDefeated
	msgbox MountKiri_1F_Text_AdrianaGoodLuck, MSGBOX_AUTOCLOSE
	end

MountKiri_1F_EventScript_AdrianaDefeated::
	msgbox MountKiri_1F_Text_AdrianaPostBattle, MSGBOX_AUTOCLOSE
	giveitem ITEM_EXPERT_BELT
	release
	end

MountKiri_1F_EventScript_AdrianaGoodLuck::
	msgbox MountKiri_1F_Text_AdrianaGoodLuck, MSGBOX_AUTOCLOSE
	release
	end

MountKiri_1F_Text_OliverIntro:
	.string "This cave is so easy to get lost in…$"

MountKiri_1F_Text_OliverDefeat:
	.string "I got lost in that battle too!$"

MountKiri_1F_Text_EmmettIntro:
	.string "Exploring is so much fun!$"

MountKiri_1F_Text_EmmettDefeat:
	.string "Huff, I'm exhausted.$"

MountKiri_1F_Text_EmmettPostBattle:
	.string "None of my POKéMON can learn the right\n"
	.string "move to get me up that waterfall.\p"
	.string "Guess I'm stuck exploring this floor\n"
	.string "for forever!$"

MountKiri_1F_Text_AdrianaIntro:
	.string "You don't stand a chance against my\n"
	.string "years of experience!$"

MountKiri_1F_Text_AdrianaDefeat:
	.string "Wow, that was exciting!$"

MountKiri_1F_Text_AdrianaPostBattle:
	.string "You're a promising young TRAINER.\n"
	.string "It's been a long time since I've had\l"
	.string "a battle like that!\p"
	.string "Here, I want you to have this.\n"
	.string "Keep training and getting stronger\l"
	.string "and maybe you'll be the CHAMPION one day!$"

MountKiri_1F_Text_AdrianaGoodLuck:
	.string "Good luck young TRAINER.$"

