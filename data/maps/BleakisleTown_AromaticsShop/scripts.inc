BleakisleTown_AromaticsShop_MapScripts::
	.byte 0

BleakisleTown_AromaticsShop_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart BleakisleTown_AromaticsShop_Pokemart_Incense
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
BleakisleTown_AromaticsShop_Pokemart_Incense:
	.2byte ITEM_SEA_INCENSE
	.2byte ITEM_LAX_INCENSE
	.2byte ITEM_ODD_INCENSE
	.2byte ITEM_ROCK_INCENSE
	.2byte ITEM_FULL_INCENSE
	.2byte ITEM_WAVE_INCENSE
	.2byte ITEM_ROSE_INCENSE
	.2byte ITEM_LUCK_INCENSE
	.2byte ITEM_PURE_INCENSE
	.2byte ITEM_NONE
	release
	end