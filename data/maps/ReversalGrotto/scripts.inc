ReversalGrotto_MapScripts::
.byte 0

ReversalGrotto_Grunt1::
trainerbattle_single TRAINER_REVERSAL_GRUNT1, ReversalGrotto_Placeholder, ReversalGrotto_Placeholder
msgbox ReversalGrotto_Placeholder, MSGBOX_AUTOCLOSE
end

ReversalGrotto_Grunt2::
trainerbattle_single TRAINER_REVERSAL_GRUNT2, ReversalGrotto_Placeholder, ReversalGrotto_Placeholder
msgbox ReversalGrotto_Placeholder, MSGBOX_AUTOCLOSE
end

ReversalGrotto_Grunt3::
trainerbattle_single TRAINER_REVERSAL_GRUNT3, ReversalGrotto_Placeholder, ReversalGrotto_Placeholder
msgbox ReversalGrotto_Placeholder, MSGBOX_AUTOCLOSE
end

ReversalGrotto_Grunt4::
trainerbattle_single TRAINER_REVERSAL_GRUNT4, ReversalGrotto_Placeholder, ReversalGrotto_Placeholder
msgbox ReversalGrotto_Placeholder, MSGBOX_AUTOCLOSE
end

ReversalGrotto_Matt::
trainerbattle_single TRAINER_MATT_REVERSAL, ReversalGrotto_MattFirstTalk, ReversalGrotto_MattLose
msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
end

ReversalGrotto_Archie::
lockall
applymovement 7, Common_Movement_ExclamationMark
waitmovement 0
playbgm MUS_ENCOUNTER_AQUA, FALSE
msgbox ReversalGrotto_ArchieFirstTalk, MSGBOX_DEFAULT
trainerbattle_no_intro TRAINER_ARCHIE_REVERSAL, ReversalGrotto_ArchieLose
msgbox ReversalGrotto_ArchiePostBattle, MSGBOX_DEFAULT
closemessage
removeobject 7
removeobject 8
removeobject 9
removeobject 10
removeobject 11
removeobject 12
setflag FLAG_REVERSAL_HIDE_GRUNTS
fadescreen FADE_FROM_BLACK
release
end

ReversalGrotto_Placeholder::
	.string "I am a placeholder.$"

ReversalGrotto_MattFirstTalk:
	.string "You've made it here yet again.\n"
	.string "You came at the right time.\p"
	.string "We've heard Team MAGMA's plan.\p"
	.string "We came for nothing anyway, no\n"
	.string "traces of Kyogre around here.\p"
	.string "Oh wait...\n"
	.string "I spoke too much...$"

ReversalGrotto_MattLose:
	.string "Oh come on.$"

ReversalGrotto_MattPostBattle:
	.string "Don't even talk to me kid.$"

ReversalGrotto_ArchieFirstTalk:
	.string "You again.\n"
	.string "What do you gain out of this?\p"
	.string "In a way, it was humiliating to\n"
	.string "lose to you back in SLATEPORT.\p"
	.string "So I can now get revenge.\l"
	.string "En garde!$"

ReversalGrotto_ArchieLose:
	.string "Yet again huh?$"

ReversalGrotto_ArchiePostBattle:
	.string "One day you shall realise just\n"
	.string "how noble our intentions are.\p"
	.string "It's a good for a bad.\n"
	.string "Except the good is overwhelming.\p"
	.string "It seems as though you won't.\n"
	.string "understand.\p"
    .string "But it's alright\n"
	.string "one day you'll get it.$"

