InfiniteInferno_Floor2_MapScripts::
    .byte 0

Infinite_Event_FirstSinner2::
	trainerbattle_single TRAINER_SINNER_2, Infinite_Text_FirstSinner2, Infinite_Text_Sinner2_Lost
	msgbox Infinite_Text_Sinner2_PostBattle, MSGBOX_AUTOCLOSE
	end

Infinite_Text_FirstSinner2:
	.string "I'm the second sinner.\n"
	.string "I deserve no sympathy.$"

Infinite_Text_Sinner2_Lost:
	.string "What a fun battle...$"

Infinite_Text_Sinner2_PostBattle:
	.string "We are here because of our mistakes.\n"
	.string "Do not make our mistakes.$"

