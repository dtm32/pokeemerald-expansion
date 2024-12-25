LabB_B1F_MapScripts::
	.byte 0

LabB_B1F_EventScript_DeltaMachine::
	lockall
	msgbox LabB_B1F_Text_Loading, MSGBOX_DEFAULT
	multichoice 0, 0, MULTI_DELTA_MACHINE_MENU, FALSE
	switch VAR_RESULT
	case 0, LabB_B1F_EventScript_DeltaMachineInfo
	case 1, LabB_B1F_EventScript_ConfirmDeltaConversion
	case 2, LabB_B1F_EventScript_ExitMachine
	releaseall
	end

LabB_B1F_EventScript_DeltaMachineInfo::
	msgbox LabB_B1F_Text_AvailableConversions, MSGBOX_DEFAULT
	@ .macro multichoicegrid x:req, y:req, multichoiceId:req, per_row:req, ignoreBPress:req
	multichoicegrid 0, 0, MULTI_LAB_A_DELTAS, 2, FALSE
	switch VAR_RESULT
	case 0, LabB_B1F_EventScript_GolbatData
	case 1, LabB_B1F_EventScript_VenonatData
	case 2, LabB_B1F_EventScript_SilcoonData
	case 3, LabB_B1F_EventScript_WhismurData
	case 4, LabB_B1F_EventScript_SandslashData
	case 5, LabB_B1F_EventScript_DustoxData
	case 6, LabB_B1F_EventScript_LaironData
	case 7, LabB_B1F_EventScript_FearowData
	case 8, LabB_B1F_EventScript_BeedrillData
	case 9, LabB_B1F_EventScript_ShedinjaData
	goto LabB_B1F_EventScript_DeltaMachine
	end

LabB_B1F_EventScript_GolbatData::
	showmonpic SPECIES_GOLBAT_DELTA, 10, 3
	msgbox LabB_B1F_Text_GolbatData, MSGBOX_DEFAULT
	@ closemessage
	hidemonpic
	goto LabB_B1F_EventScript_DeltaMachineInfo
	end

LabB_B1F_EventScript_VenonatData::
	showmonpic SPECIES_VENONAT_DELTA, 10, 3
	msgbox LabB_B1F_Text_VenonatData, MSGBOX_DEFAULT
	@ closemessage
	hidemonpic
	goto LabB_B1F_EventScript_DeltaMachineInfo
	end

LabB_B1F_EventScript_SilcoonData::
	showmonpic SPECIES_SILCOON_DELTA, 10, 3
	msgbox LabB_B1F_Text_SilcoonData, MSGBOX_DEFAULT
	@ closemessage
	hidemonpic
	goto LabB_B1F_EventScript_DeltaMachineInfo
	end

LabB_B1F_EventScript_WhismurData::
	showmonpic SPECIES_WHISMUR, 10, 3
	msgbox LabB_B1F_Text_WhismurData, MSGBOX_DEFAULT
	@ closemessage
	hidemonpic
	goto LabB_B1F_EventScript_DeltaMachineInfo
	end
	
LabB_B1F_EventScript_SandslashData::
	showmonpic SPECIES_SANDSLASH_DELTA, 10, 3
	msgbox LabB_B1F_Text_SandslashData, MSGBOX_DEFAULT
	@ closemessage
	hidemonpic
	goto LabB_B1F_EventScript_DeltaMachineInfo
	end

LabB_B1F_EventScript_DustoxData::
	showmonpic SPECIES_DUSTOX_DELTA, 10, 3
	msgbox LabB_B1F_Text_DustoxData, MSGBOX_DEFAULT
	@ closemessage
	hidemonpic
	goto LabB_B1F_EventScript_DeltaMachineInfo
	end

LabB_B1F_EventScript_LaironData::
	showmonpic SPECIES_LAIRON_DELTA, 10, 3
	msgbox LabB_B1F_Text_LaironData, MSGBOX_DEFAULT
	@ closemessage
	hidemonpic
	goto LabB_B1F_EventScript_DeltaMachineInfo
	end

LabB_B1F_EventScript_FearowData::
	showmonpic SPECIES_FEAROW_DELTA, 10, 3
	msgbox LabB_B1F_Text_FearowData, MSGBOX_DEFAULT
	@ closemessage
	hidemonpic
	goto LabB_B1F_EventScript_DeltaMachineInfo
	end

LabB_B1F_EventScript_BeedrillData::
	showmonpic SPECIES_BEEDRILL_DELTA, 10, 3
	msgbox LabB_B1F_Text_BeedrillData, MSGBOX_DEFAULT
	@ closemessage
	hidemonpic
	goto LabB_B1F_EventScript_DeltaMachineInfo
	end

LabB_B1F_EventScript_ShedinjaData::
	showmonpic SPECIES_SHEDINJA_DELTA, 10, 3
	msgbox LabB_B1F_Text_ShedinjaData, MSGBOX_DEFAULT
	hidemonpic
	goto LabB_B1F_EventScript_DeltaMachineInfo
	end

LabB_B1F_Text_AvailableConversions:
	.string "> CONVERSIONS INFO$"

LabB_B1F_Text_GolbatData:
	.string "> GOLBAT δ\n"
	.string "> TYPE: DRAGON$"

LabB_B1F_Text_VenonatData:
	.string "> VENONAT δ\n"
	.string "> TYPE: FAIRY / POISON$"

LabB_B1F_Text_SilcoonData:
	.string "> SILCOON δ\n"
	.string "> TYPE: GROUND$"

LabB_B1F_Text_WhismurData:
	.string "> WHISMUR δ\n"
	.string "> TYPE: POISON$"

LabB_B1F_Text_SandslashData:
	.string "> SANDSLASH δ\n"
	.string "> TYPE: FIGHTING$"

LabB_B1F_Text_DustoxData:
	.string "> DUSTOX δ\n"
	.string "> TYPE: FIRE / POISON$"

LabB_B1F_Text_LaironData:
	.string "> LAIRON δ\n"
	.string "> TYPE: ICE / ROCK$"

LabB_B1F_Text_FearowData:
	.string "> FEAROW δ\n"
	.string "> TYPE: DARK / POISON$"

LabB_B1F_Text_BeedrillData:
	.string "> BEEDRILL δ\n"
	.string "> TYPE: FIGHTING / POISON$"

LabB_B1F_Text_ShedinjaData:
	.string "> SHEDINJA δ\n"
	.string "> TYPE: FAIRY / GHOST$"

LabB_B1F_EventScript_ConfirmDeltaConversion::
	msgbox LabB_B1F_Text_ConfirmDeltaConversion, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, LabB_B1F_EventScript_ChooseMonToConvert
	case NO, LabB_B1F_EventScript_ExitMachine
	releaseall
	end

LabB_B1F_EventScript_ChooseMonToConvert::
	msgbox LabB_B1F_Text_SelectMon, MSGBOX_DEFAULT
	special ChoosePartyMonForDeltaMachine
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LabB_B1F_EventScript_ExitMachine
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, LabB_B1F_EventScript_ExitMachine
	fadescreen FADE_TO_BLACK
	special UpgradeToDeltaSpecies
	fadescreen FADE_FROM_BLACK
	releaseall
	end

LabB_B1F_EventScript_ExitMachine::
	msgbox LabB_B1F_Text_PoweringOff, MSGBOX_AUTOCLOSE
	return

LabB_B1F_Text_Loading:
	.string "> LOADING…\p"
	.string "> SELECT OPTION$"

LabB_B1F_Text_ConfirmDeltaConversion:
	.string "> REMINDER: CONVERSION IS PERMANENT\n"
	.string "> ALL CURRENT MOVES WILL BE REPLACED\p"
	.string "> WOULD YOU LIKE TO PROCEED$"

LabB_B1F_Text_SelectMon:
	.string "> SELECT POKéMON TO CONVERT$"

LabB_B1F_Text_PoweringOff:
	.string "> POWERING OFF…$"
