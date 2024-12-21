GraniteCave_1F_MapScripts::
	.byte 0

GraniteCave_1F_EventScript_Hiker::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM_ROCK_CLIMB, GraniteCave_1F_EventScript_ReceivedRockClimb
	msgbox GraniteCave_1F_Text_ItsNotDarkAnymore, MSGBOX_DEFAULT
	giveitem ITEM_HM_ROCK_CLIMB
	setflag FLAG_RECEIVED_HM_ROCK_CLIMB
	msgbox GraniteCave_1F_Text_ExplainRockClimb, MSGBOX_DEFAULT
	release
	end

GraniteCave_1F_EventScript_ReceivedRockClimb::
	msgbox GraniteCave_1F_Text_ExplainRockClimb, MSGBOX_DEFAULT
	release
	end

GraniteCave_1F_Text_ItsNotDarkAnymore:
	.string "Hey, you.\n"
	.string "It used to be pretty dark in this\l"
	.string "cave so I installed some overhead\l"
	.string "lights! You're welcome!\p"
	.string "But you'll want this to completely\n"
	.string "explore the cave, here you go.$"

GraniteCave_1F_Text_ExplainRockClimb:
	.string "Teach that hidden move ROCK CLIMB to\n"
	.string "a POKéMON and use it to reach the\l"
	.string "back room, I hear there's some really\l"
	.string "powerful POKéMON there.\p"
	.string "But, to use it, you need the GYM BADGE\n"
	.string "from DEWFORD's POKéMON GYM.$"

