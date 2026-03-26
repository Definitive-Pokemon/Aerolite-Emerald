.set LOCALID_SHIP, 1
.set LOCALID_SAILOR, 2

Island_Harbors_EventScript_GoToLilycove::
	call Island_Harbors_EventScript_BoardFerry1
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
	waitstate
	release
	end
	
Island_Harbors_EventScript_GoToKnotIsland::
	call Island_Harbors_EventScript_BoardFerry1
	warp MAP_KNOT_ISLAND_HARBOR, 8, 4
	waitstate
	release
	end
	
Island_Harbors_EventScript_GoToBoonIsland::
	call Island_Harbors_EventScript_BoardFerry1
	warp MAP_BOON_ISLAND_HARBOR, 8, 4
	waitstate
	release
	end
	
Island_Harbors_EventScript_GoToKinIsland::
	call Island_Harbors_EventScript_BoardFerry1
	warp MAP_KIN_ISLAND_HARBOR, 8, 4
	waitstate
	release
	end
	
Island_Harbors_EventScript_GoToFloeIsland::
	call Island_Harbors_EventScript_BoardFerry1
	warp MAP_FLOE_ISLAND_HARBOR, 8, 4
	waitstate
	release
	end
	
Island_Harbors_EventScript_GoToChronoIsland::
	call Island_Harbors_EventScript_BoardFerry1
	warp MAP_CHRONO_ISLAND_HARBOR, 8, 4
	waitstate
	release
	end
	
Island_Harbors_EventScript_GoToFortuneIsland::
	call Island_Harbors_EventScript_BoardFerry1
	warp MAP_FORTUNE_ISLAND_HARBOR, 8, 4
	waitstate
	release
	end
	
Island_Harbors_EventScript_GoToQuestIsland::
	call Island_Harbors_EventScript_BoardFerry1
	warp MAP_QUEST_ISLAND_HARBOR, 8, 4
	waitstate
	release
	end
	

Island_Harbors_EventScript_BoardFerry1::
	msgbox Island_Harbors_Text_PleaseBoard, MSGBOX_DEFAULT
	closemessage
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
	removeobject LOCALID_SAILOR
	applymovement OBJ_EVENT_ID_FOLLOWER, Island_Harbors_Movement_1Down
	waitmovement 0
	hideobjectat OBJ_EVENT_ID_FOLLOWER, 0
	setvar VAR_0x8004, LOCALID_SHIP
	call Common_EventScript_FerryDepart
	return

Island_Harbors_Movement_1Down::
	walk_down
	step_end
	
Island_Harbors_Text_PleaseBoard:
	.string "Alright, off we go!$"

Island_Harbors_Text_Oi_Chap::
	.string "Oi, chap! Were're we going today?$"
