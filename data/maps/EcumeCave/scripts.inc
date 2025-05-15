EcumeCave_MapScripts::
.byte 0

EcumeCave_EventScript_Artikuno::
	lockall
	playmoncry SPECIES_ARTICUNO, CRY_MODE_ENCOUNTER
	delay 40 
	waitmoncry
	setwildbattle SPECIES_ARTICUNO, 40
    special BattleSetup_StartLegendaryBattle
	waitstate
	releaseall
    end
 
ARTIKUNO_Won_or_Caught::
	fadescreen FADE_TO_BLACK
	setflag FLAG_UNUSED_0x022
	fadescreen FADE_FROM_BLACK
	release
    end
 
ARTIKUNO_RanAway::
	playmoncry SPECIES_ARTICUNO, CRY_MODE_ENCOUNTER
	delay 20
	fadescreen FADE_TO_BLACK
	setflag FLAG_UNUSED_0x022
	fadescreen FADE_FROM_BLACK
	release
    end