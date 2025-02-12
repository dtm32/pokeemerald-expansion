MountKiri_B2F_MapScripts::
	.byte 0

MountKiri_B2F_EventScript_Marco::
	trainerbattle_single TRAINER_MARCO, MountKiri_B2F_Text_MarcoIntro, MountKiri_B2F_Text_MarcoDefeat
	msgbox MountKiri_B2F_Text_MarcoPostBattle, MSGBOX_AUTOCLOSE
	end

MountKiri_B2F_Text_MarcoIntro:
	.string "I'm conditioning myself to master\n"
	.string "the cold!$"

MountKiri_B2F_Text_MarcoDefeat:
	.string "Brr… I really hate the cold.$"

MountKiri_B2F_Text_MarcoPostBattle:
	.string "Can't slow down or I'll freeze!$"
