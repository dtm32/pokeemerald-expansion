LabB_MapScripts::
	.byte 0

LabB_EventScript_DebugPokeball::
	@ Skip norman battle in lab
	setvar VAR_LAB_B_STATE, 1
	end

LabB_EventScript_LabSign::
	msgbox LabB_Text_LabSign, MSGBOX_SIGN
	end

LabB_Text_LabSign:
	.string "DELTA PROJECT:\n"
	.string "LAB B$"
