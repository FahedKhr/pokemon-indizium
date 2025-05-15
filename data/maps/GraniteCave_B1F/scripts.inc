GraniteCave_B1F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
	map_script MAP_SCRIPT_ON_RESUME, GraniteCave_B1F_SetHoleWarp
	.byte 0

GraniteCave_B1F_SetHoleWarp:
	setstepcallback STEP_CB_CRACKED_FLOOR
	setholewarp MAP_GRANITE_CAVE_B2F
	end

GraniteCave_B1F_Samir::
	trainerbattle_single TRAINER_SAMIR, GC_Text_Samir1, GC_Text_Samir2
	msgbox GC_Text_Samir3, MSGBOX_AUTOCLOSE
	end

GC_Text_Samir1:
	.string "There's nothing of value here.\n"
	.string "You should leave this dirty cave.$"

GC_Text_Samir2:
	.string "I suppose you can keep exploring...$"

GC_Text_Samir3:
	.string "I told you to escape. I've been here\n"
	.string "for too long. Don't get lost too.$"

