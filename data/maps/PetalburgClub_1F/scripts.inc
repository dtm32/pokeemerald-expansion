PetalburgClub_1F_MapScripts::
	.byte 0

OldChateau_EventScript_BrokenTV1::
	lockall
	goto_if_unset FLAG_BADGE04_GET, OldChateau_EventScript_BrokenTV
	goto_if_set FLAG_DEFEATED_ROTOM_1, OldChateau_EventScript_BrokenTV
	setflag FLAG_DEFEATED_ROTOM_1
	msgbox OldChateau_Text_RotomEncounter, MSGBOX_DEFAULT
	playmoncry SPECIES_ROTOM, CRY_MODE_ENCOUNTER
	closemessage
	delay 40
	waitmoncry
	setwildbattle SPECIES_ROTOM, 40
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	releaseall
	end

OldChateau_EventScript_BrokenTV2::
	lockall
	goto_if_unset FLAG_BADGE04_GET, OldChateau_EventScript_BrokenTV
	goto_if_set FLAG_DEFEATED_ROTOM_2, OldChateau_EventScript_BrokenTV
	setflag FLAG_DEFEATED_ROTOM_2
	msgbox OldChateau_Text_RotomEncounter, MSGBOX_DEFAULT
	playmoncry SPECIES_ROTOM, CRY_MODE_ENCOUNTER
	closemessage
	delay 40
	waitmoncry
	setwildbattle SPECIES_ROTOM, 40
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	releaseall
	end

OldChateau_EventScript_BrokenTV3::
	lockall
	goto_if_unset FLAG_BADGE04_GET, OldChateau_EventScript_BrokenTV
	goto_if_set FLAG_DEFEATED_ROTOM_3, OldChateau_EventScript_BrokenTV
	setflag FLAG_DEFEATED_ROTOM_3
	msgbox OldChateau_Text_RotomEncounter, MSGBOX_DEFAULT
	playmoncry SPECIES_ROTOM, CRY_MODE_ENCOUNTER
	closemessage
	delay 40
	waitmoncry
	setwildbattle SPECIES_ROTOM, 40
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	releaseall
	end

OldChateau_EventScript_BrokenTV::
	lockall
	msgbox OldChateau_Text_BrokenTV, MSGBOX_AUTOCLOSE
	releaseall
	end

OldChateau_Text_BrokenTV:
	.string "It's just a broken TV.$"

OldChateau_Text_RotomEncounter:
	.string "It's broken…\n"
	.string "Wait, what's that?$"
