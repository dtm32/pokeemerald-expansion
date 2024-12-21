.set LOCALID_CAMPER, 6

VerdanturfRavine_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfRavine_OnTransition
	.byte 0

VerdanturfRavine_OnTransition:
	call_if_set FLAG_HIDE_DIG_SITE_2_ARCO_MEMBERS, VerdanturfRavine_EventScript_SetCamperPosition
	end

VerdanturfRavine_EventScript_SetCamperPosition::
	setobjectxyperm LOCALID_CAMPER, 14, 21
	return

VerdanturfRavine_EventScript_Camper::
	goto_if_unset FLAG_HIDE_DIG_SITE_2_ARCO_MEMBERS, VerdanturfRavine_EventScript_CamperCaveIsDangerous
	end

VerdanturfRavine_EventScript_CamperCaveIsDangerous::
	msgbox VerdanturfRavine_Text_CaveIsDangerous, MSGBOX_NPC
	end

VerdanturfRavine_Text_CaveIsDangerous:
	.string "This cave is so dangerous…\n"
	.string "I'm still working up the courage to go in.$"
