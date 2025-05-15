OmegaRuins_MapScripts::
	.byte 0

OmegaRuins_Akira::
	trainerbattle_double TRAINER_GRANDMASTER_AKIRA, Grandmaster_Akira_Dialogue, Grandmaster_Akira_Defeated, Grandmaster_Akira_NotEnoughMons
	cleartrainerflag TRAINER_GRANDMASTER_AKIRA
	end

Grandmaster_Akira_Dialogue:
	.string "I am Akira, one of the\n"
	.string "grandmasters of the Hoenn Region.\p"
	.string "I accept your challenge!$"

Grandmaster_Akira_NotEnoughMons:
	.string "I am Akira, one of the\n"
	.string "grandmasters of the Hoenn Region.\p"
	.string "Come back with more than 1 moemon.$"

Grandmaster_Akira_Defeated:
	.string "This was a fun fight.\n"
	.string "You should be proud of yourself.$"
