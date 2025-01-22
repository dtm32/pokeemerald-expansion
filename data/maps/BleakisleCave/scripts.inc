BleakisleCave_MapScripts::
	.byte 0

BleakisleCave_EventScript_HelpTrigger::
	lock
	msgbox BleakisleCave_Text_Help, MSGBOX_AUTOCLOSE
	setvar VAR_BLEAKISLE_TOWN_STATE, 3
	release
	end

BleakisleCave_Text_Help:
	.string "???: …help!\n"
	.string "… … …\p"
	.string "…help!\n"
	.string "… … …$"
