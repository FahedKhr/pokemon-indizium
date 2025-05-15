InfiniteInferno_Floor4_MapScripts::
    .byte 0

InfiniteInferno_Francis::
	lock
	waitse
	playse SE_PIN
	applymovement 3, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 3, Common_Movement_Delay48
	waitmovement 0
	applymovement 3, Common_Movement_FacePlayer
	waitmovement 0
	msgbox InfiniteInferno_FinalDialogue1, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_SINNER_8, Infinite_Text_Sinner6_Lost
	msgbox InfiniteInferno_FinalDialogue2, MSGBOX_DEFAULT
	goto_if_set FLAG_DEFEATED_ALL_SINNERS, Infinite_Event_GiveHoopa
    giveitem ITEM_OLD_SEA_MAP, 1
	msgbox InfiniteInferno_FinalDialogue3, MSGBOX_DEFAULT
    setflag FLAG_DEFEATED_ALL_SINNERS
    cleartrainerflag TRAINER_SINNER_1
    cleartrainerflag TRAINER_SINNER_2
    cleartrainerflag TRAINER_SINNER_3
    cleartrainerflag TRAINER_SINNER_4
    cleartrainerflag TRAINER_SINNER_5
    cleartrainerflag TRAINER_SINNER_6
    cleartrainerflag TRAINER_SINNER_7
    cleartrainerflag TRAINER_SINNER_8
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 12
    waitstate
	release
	end

Infinite_Event_GiveHoopa::
    givemon SPECIES_HOOPA_CONFINED, 70, ITEM_MASTER_BALL
	msgbox InfiniteInferno_FinalDialogue3, MSGBOX_DEFAULT
    cleartrainerflag TRAINER_SINNER_1
    cleartrainerflag TRAINER_SINNER_2
    cleartrainerflag TRAINER_SINNER_3
    cleartrainerflag TRAINER_SINNER_4
    cleartrainerflag TRAINER_SINNER_5
    cleartrainerflag TRAINER_SINNER_6
    cleartrainerflag TRAINER_SINNER_7
    cleartrainerflag TRAINER_SINNER_8
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 12
    waitstate
	release
	end

Infinite_Event_FirstSinner6::
	trainerbattle_single TRAINER_SINNER_6, Infinite_Text_FirstSinner6, Infinite_Text_Sinner6_Lost
	msgbox Infinite_Text_Sinner6_PostBattle, MSGBOX_AUTOCLOSE
	end

Infinite_Event_FirstSinner7::
	trainerbattle_single TRAINER_SINNER_7, Infinite_Text_FirstSinner7, Infinite_Text_Sinner6_Lost
	msgbox Infinite_Text_Sinner6_PostBattle, MSGBOX_AUTOCLOSE
	end

Infinite_Text_FirstSinner7:
	.string "I'm the final sinner.\n"
	.string "But not your last opponent.$"

Infinite_Text_FirstSinner6:
	.string "I'm the sixth sinner.\n"
	.string "You're too deep to leave now.$"

Infinite_Text_Sinner6_Lost:
	.string "...$"

Infinite_Text_Sinner6_PostBattle:
	.string "We are here because of our mistakes.\n"
	.string "Do not make our mistakes.$"

InfiniteInferno_FinalDialogue1:
	.string "Ehh ehh ehh.\p"
	.string "So you have defeated\n"
	.string "all the sinners?\p"
	.string "We have been banned\n"
	.string "here by Arceus.\p"
	.string "I don't know what you're doing\n"
	.string "here. But what I do know is\l"
	.string "that I'm gonna have fun.$"

InfiniteInferno_FinalDialogue2:
	.string "Very well then.\n"
	.string "You've deserved your win$"

InfiniteInferno_FinalDialogue3:
	.string "but our suffering is eternal.\p"
	.string "Arceus will keep us here forever\n"
	.string "until the dawn of time.\p"
	.string "You should wake up in the\n"
	.string "place that matters to you in\l"
	.string "a few seconds. It won't hurt.$"

