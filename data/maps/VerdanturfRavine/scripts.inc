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
	lock
	faceplayer
	goto_if_set FLAG_HIDE_DIG_SITE_2_ARCO_MEMBERS, VerdanturfRavine_EventScript_HealYourPokemon
	msgbox VerdanturfRavine_Text_CaveIsDangerous, MSGBOX_NPC
	release
	end

VerdanturfRavine_EventScript_HealYourPokemon::
	msgbox VerdanturfRavine_Text_CaveIsDangerousHeal, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, VerdanturfRavine_EventScript_Healed
	release
	end

VerdanturfRavine_EventScript_Healed::
	playfanfare MUS_HEAL
	waitfanfare
	special HealPlayerParty
	callnative UpdateFollowingPokemon
	msgbox VerdanturfRavine_Text_GoodLuck, MSGBOX_AUTOCLOSE
	release
	end

VerdanturfRavine_EventScript_Ezra::
	trainerbattle_single TRAINER_EZRA, VerdanturfRavine_Text_EzraIntro, VerdanturfRavine_Text_EzraDefeat
	msgbox VerdanturfRavine_Text_EzraPostBattle, MSGBOX_AUTOCLOSE
	end

VerdanturfRavine_EventScript_Miles::
	trainerbattle_single TRAINER_MILES, VerdanturfRavine_Text_MilesIntro, VerdanturfRavine_Text_MilesDefeat
	msgbox VerdanturfRavine_Text_MilesPostBattle, MSGBOX_AUTOCLOSE
	end

VerdanturfRavine_Text_CaveIsDangerous:
	.string "This cave is so dangerous…\n"
	.string "I'm still working up the courage to go in.$"

VerdanturfRavine_Text_CaveIsDangerousHeal:
	.string "This cave is so dangerous…\n"
	.string "Need me to heal your POKéMON?$"

VerdanturfRavine_Text_GoodLuck:
	.string "Good luck in there!$"

VerdanturfRavine_Text_EzraIntro:
	.string "I wonder what's up that waterfall.$"

VerdanturfRavine_Text_EzraDefeat:
	.string "Wow I stink!$"

VerdanturfRavine_Text_EzraPostBattle:
	.string "Guess I need to train more before trying\n"
	.string "to get up that waterfall…$"

VerdanturfRavine_Text_MilesIntro:
	.string "I'm getting my steps in!$"

VerdanturfRavine_Text_MilesDefeat:
	.string "I've still got miles to go!$"

VerdanturfRavine_Text_MilesPostBattle:
	.string "9996…9997…9998…9999…$"
