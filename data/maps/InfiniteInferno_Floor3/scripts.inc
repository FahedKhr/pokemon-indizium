InfiniteInferno_Floor3_MapScripts::
    .byte 0

Infinite_Event_FirstSinner3::
	trainerbattle_single TRAINER_SINNER_3, Infinite_Text_FirstSinner3, Infinite_Text_Sinner3_Lost
	msgbox Infinite_Text_Sinner3_PostBattle, MSGBOX_AUTOCLOSE
	end

Infinite_Text_FirstSinner3:
	.string "I'm the third sinner.\n"
	.string "Banned Gym Leader.$"

Infinite_Event_FirstSinner5::
	trainerbattle_single TRAINER_SINNER_5, Infinite_Text_FirstSinner5, Infinite_Text_Sinner3_Lost
	msgbox Infinite_Text_Sinner3_PostBattle, MSGBOX_AUTOCLOSE
	end

Infinite_Text_FirstSinner5:
	.string "I'm the fifth sinner.\n"
	.string "All for my dirty tricks.$"

Infinite_Text_Sinner3_Lost:
	.string "What a fun battle...$"

Infinite_Text_Sinner3_PostBattle:
	.string "We are here because of our mistakes.\n"
	.string "Do not make our mistakes.$"

