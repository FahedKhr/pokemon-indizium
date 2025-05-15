InfiniteInferno_Floor1_MapScripts::
    .byte 0

Infinite_Event_FirstSinner1::
	trainerbattle_single TRAINER_SINNER_1, Infinite_Text_FirstSinner1, Infinite_Text_Sinner1_Lost
	msgbox Infinite_Text_Sinner1_PostBattle, MSGBOX_AUTOCLOSE
	end

Infinite_Text_FirstSinner4:
	.string "I'm the fourth sinner.\n"
	.string "For plagliarism.$"

Infinite_Event_FirstSinner4::
	trainerbattle_single TRAINER_SINNER_4, Infinite_Text_FirstSinner4, Infinite_Text_Sinner1_Lost
	msgbox Infinite_Text_Sinner1_PostBattle, MSGBOX_AUTOCLOSE
	end

Infinite_Text_FirstSinner1:
	.string "I'm the first sinner.\n"
	.string "Leave while you still can.$"

Infinite_Text_Sinner1_Lost:
	.string "It is over for me...$"

Infinite_Text_Sinner1_PostBattle:
	.string "We are here because of our mistakes.\n"
	.string "Do not make our mistakes.$"

