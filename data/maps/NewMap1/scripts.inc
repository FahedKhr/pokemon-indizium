NewMap1_MapScripts::
.byte 0

Sewers_MagmaGuy::
lockall
applymovement 1, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_MAGMA, FALSE
msgbox MagmaSewers_NoticePlayer, MSGBOX_DEFAULT
trainerbattle_no_intro TRAINER_SEWERS_GRUNT, MagmaSewers_LoseBattle
msgbox MagmaSewers_PostBattle, MSGBOX_DEFAULT
closemessage
applymovement 1, Movement_Lost_MagmaSewers
waitmovement 0
setflag FLAG_MAGMA_SEWERS_DEFEATED
setvar VAR_MAGMA_SEWERS_STATE 1
removeobject 1
fadescreen FADE_FROM_BLACK
release
end

MagmaSewers_NoticePlayer:
	.string "Hey what are you doing here?\n"
	.string "That SHROOMISH is what you want?\p"
	.string "We've got a hero over here.\p"
	.string "You shall not get in the way of\n"
	.string "Team MAGMA!$"

MagmaSewers_LoseBattle:
	.string "To think that GRASS Types would\n"
	.string "greatly help us.$"

MagmaSewers_PostBattle:
	.string "We need GRASS moemon to take down\n"
	.string "Team AQUA\p"
	.string "Thanks to you, we'll have to look\n"
	.string "somewhere else...\p"
	.string "I've got to go so, get out of here.$"

Movement_Lost_MagmaSewers:
	walk_right
	step_end