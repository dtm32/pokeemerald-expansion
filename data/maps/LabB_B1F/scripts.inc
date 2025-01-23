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
	multichoicegrid 0, 0, MULTI_LAB_B_DELTAS, 2, FALSE
	switch VAR_RESULT
	case 0, LabB_B1F_EventScript_RhyhornData
	case 1, LabB_B1F_EventScript_SlowpokeData
	case 2, LabB_B1F_EventScript_LunatoneData
	case 3, LabB_B1F_EventScript_SolrockData
	case 4, LabB_B1F_EventScript_SkarmoryData
	case 5, LabB_B1F_EventScript_CameruptData
	case 6, LabB_B1F_EventScript_CacturneData
	case 7, LabB_B1F_EventScript_ClefableData
	case 8, LabB_B1F_EventScript_VibravaData
	case 9, LabB_B1F_EventScript_MetangData
	goto LabB_B1F_EventScript_DeltaMachine
	end

LabB_B1F_EventScript_RhyhornData::
	showmonpic SPECIES_RHYHORN_DELTA, 10, 3
	msgbox LabB_B1F_Text_RhyhornData, MSGBOX_DEFAULT
	hidemonpic
	goto LabB_B1F_EventScript_DeltaMachineInfo
	end

LabB_B1F_EventScript_SlowpokeData::
	showmonpic SPECIES_SLOWPOKE_DELTA, 10, 3
	msgbox LabB_B1F_Text_SlowpokeData, MSGBOX_DEFAULT
	hidemonpic
	goto LabB_B1F_EventScript_DeltaMachineInfo
	end

LabB_B1F_EventScript_LunatoneData::
	showmonpic SPECIES_LUNATONE_DELTA, 10, 3
	msgbox LabB_B1F_Text_LunatoneData, MSGBOX_DEFAULT
	hidemonpic
	goto LabB_B1F_EventScript_DeltaMachineInfo
	end

LabB_B1F_EventScript_SolrockData::
	showmonpic SPECIES_SOLROCK_DELTA, 10, 3
	msgbox LabB_B1F_Text_SolrockData, MSGBOX_DEFAULT
	hidemonpic
	goto LabB_B1F_EventScript_DeltaMachineInfo
	end
	
LabB_B1F_EventScript_SkarmoryData::
	showmonpic SPECIES_SKARMORY_DELTA, 10, 3
	msgbox LabB_B1F_Text_SkarmoryData, MSGBOX_DEFAULT
	hidemonpic
	goto LabB_B1F_EventScript_DeltaMachineInfo
	end

LabB_B1F_EventScript_CameruptData::
	showmonpic SPECIES_CAMERUPT_DELTA, 10, 3
	msgbox LabB_B1F_Text_CameruptData, MSGBOX_DEFAULT
	hidemonpic
	goto LabB_B1F_EventScript_DeltaMachineInfo
	end

LabB_B1F_EventScript_CacturneData::
	showmonpic SPECIES_CACTURNE_DELTA, 10, 3
	msgbox LabB_B1F_Text_CacturneData, MSGBOX_DEFAULT
	hidemonpic
	goto LabB_B1F_EventScript_DeltaMachineInfo
	end

LabB_B1F_EventScript_ClefableData::
	showmonpic SPECIES_CLEFABLE_DELTA, 10, 3
	msgbox LabB_B1F_Text_ClefableData, MSGBOX_DEFAULT
	hidemonpic
	goto LabB_B1F_EventScript_DeltaMachineInfo
	end

LabB_B1F_EventScript_VibravaData::
	showmonpic SPECIES_VIBRAVA_DELTA, 10, 3
	msgbox LabB_B1F_Text_VibravaData, MSGBOX_DEFAULT
	hidemonpic
	goto LabB_B1F_EventScript_DeltaMachineInfo
	end

LabB_B1F_EventScript_MetangData::
	showmonpic SPECIES_METANG_DELTA, 10, 3
	msgbox LabB_B1F_Text_MetangData, MSGBOX_DEFAULT
	hidemonpic
	goto LabB_B1F_EventScript_DeltaMachineInfo
	end

LabB_B1F_Text_AvailableConversions:
	.string "> CONVERSIONS INFO$"

LabB_B1F_Text_RhyhornData:
	.string "> RHYHORN δ\n"
	.string "> TYPE: GROUND / ELECTRIC$"

LabB_B1F_Text_SlowpokeData:
	.string "> SLOWPOKE δ\n"
	.string "> TYPE: WATER / DARK$"

LabB_B1F_Text_LunatoneData:
	.string "> LUNATONE δ\n"
	.string "> TYPE: ROCK / GHOST$"

LabB_B1F_Text_SolrockData:
	.string "> SOLROCK δ\n"
	.string "> TYPE: ROCK / FIRE$"

LabB_B1F_Text_SkarmoryData:
	.string "> SKARMORY δ\n"
	.string "> TYPE: STEEL / FIRE$"

LabB_B1F_Text_CameruptData:
	.string "> CAMERUPT δ\n"
	.string "> TYPE: FIRE / WATER$"

LabB_B1F_Text_CacturneData:
	.string "> CACTURNE δ\n"
	.string "> TYPE: GRASS / FIGHTING$"

LabB_B1F_Text_ClefableData:
	.string "> CLEFABLE δ\n"
	.string "> TYPE: FAIRY / ELECTRIC$"

LabB_B1F_Text_VibravaData:
	.string "> VIBRAVA δ\n"
	.string "> TYPE: FIGHTING / POISON$"

LabB_B1F_Text_MetangData:
	.string "> METANG δ\n"
	.string "> TYPE: STEEL / FAIRY$"

LabB_B1F_EventScript_ConfirmDeltaConversion::
	msgbox LabB_B1F_Text_ConfirmDeltaConversion, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, LabB_B1F_EventScript_ChooseMonToConvert
	case NO, LabB_B1F_EventScript_ExitMachine
	releaseall
	end

LabB_B1F_EventScript_ChooseMonToConvert::
	msgbox LabB_B1F_Text_SelectMon, MSGBOX_DEFAULT
	setvar VAR_TEMP_3, 1
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

LabB_B1F_EventScript_Man::
	msgbox LabB_B1F_Text_Man, MSGBOX_NPC
	end

LabB_B1F_EventScript_Scientist1::
	msgbox LabB_B1F_Text_Scientist1, MSGBOX_NPC
	end

LabB_B1F_EventScript_Scientist2::
	msgbox LabB_B1F_Text_Scientist2, MSGBOX_NPC
	end

LabB_B1F_EventScript_Scientist3::
	msgbox LabB_B1F_Text_Scientist3, MSGBOX_NPC
	end

LabB_B1F_EventScript_Pokeball::
	msgbox LabB_B1F_Text_Pokeball, MSGBOX_AUTOCLOSE
	end

LabB_B1F_Text_Man:
	.string "Hey, I'm the Project Manager here!\n"
	.string "Everyone is doing their jobs so\l"
	.string "well that I hardly have to work!$"

LabB_B1F_Text_Scientist1:
	.string "Did you know that DELTA SPECIES\n"
	.string "technology was originally\l"
	.string "discovered entirely by accident?$"

LabB_B1F_Text_Scientist2:
	.string "I'm kinda new here…\n"
	.string "Electromagnetism is so complex…$"

LabB_B1F_Text_Scientist3:
	.string "CLEFABLE is my favorite!\n"
	.string "I'm so happy the boss let me\l"
	.string "pick it for our testing!$"

LabB_B1F_Text_Pokeball:
	.string "Probably shouldn't take this…$"
