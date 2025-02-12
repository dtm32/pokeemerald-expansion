MountKiri_B1F_MapScripts::
	.byte 0

MountKiri_B1F_EventScript_Mikael::
	trainerbattle_single TRAINER_MIKAEL, MountKiri_B1F_Text_MikaelIntro, MountKiri_B1F_Text_MikaelDefeat
	msgbox MountKiri_B1F_Text_MikaelPostBattle, MSGBOX_AUTOCLOSE
	end

MountKiri_B1F_EventScript_Arty::
	trainerbattle_single TRAINER_ARTY, MountKiri_B1F_Text_ArtyIntro, MountKiri_B1F_Text_ArtyDefeat
	msgbox MountKiri_B1F_Text_ArtyPostBattle, MSGBOX_AUTOCLOSE
	end

MountKiri_B1F_EventScript_Coswell::
	trainerbattle_single TRAINER_COSWELL, MountKiri_B1F_Text_CoswellIntro, MountKiri_B1F_Text_CoswellDefeat
	msgbox MountKiri_B1F_Text_CoswellPostBattle, MSGBOX_AUTOCLOSE
	end

MountKiri_B1F_Text_MikaelIntro:
	.string "I have enough food to explore in\n"
	.string "here for days!$"

MountKiri_B1F_Text_MikaelDefeat:
	.string "Maybe I should restock.$"

MountKiri_B1F_Text_MikaelPostBattle:
	.string "I'm feeling a little hungry.$"

MountKiri_B1F_Text_ArtyIntro:
	.string "Why does it get cold underground?$"

MountKiri_B1F_Text_ArtyDefeat:
	.string "Do you not feel cold too?$"

MountKiri_B1F_Text_ArtyPostBattle:
	.string "I stopped running and now I'm cold.$"

MountKiri_B1F_Text_CoswellIntro:
	.string "Deep underground is where all the\n"
	.string "good discoveries are!$"

MountKiri_B1F_Text_CoswellDefeat:
	.string "Guess I discovered a tough opponent!$"

MountKiri_B1F_Text_CoswellPostBattle:
	.string "I tried going farther down but my\n"
	.string "tools are no good digging in ice.$"
