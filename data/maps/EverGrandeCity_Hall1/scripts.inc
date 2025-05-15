EverGrandeCity_Hall1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_Hall1_OnWarp
	.byte 0

EverGrandeCity_Hall1_OnWarp:
	call_if_eq  VAR_DEFEATED_ELITE4_MEMBERS, 4, EverGrandeCity_Hall_EventScript_AllDefeated
	end

EverGrandeCity_Hall_EventScript_AllDefeated::
	setflag FLAG_DEFEATEDALLMEMBERS
	removeobject 1
	end

