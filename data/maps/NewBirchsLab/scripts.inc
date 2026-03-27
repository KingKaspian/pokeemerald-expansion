NewBirchsLab_MapScripts::
# 3 "data/maps/NewBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewBirchsLab_EventScript_BallDefault
	.byte 0


NewBirchsLab_EventScript_BallDefault::
# 8 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_REGION, 0
	return


NewBirchsLab_EventScript_Birch::
# 14 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSEN_GRASS_TYPE, NewBirchsLab_EventScript_Birch_3
NewBirchsLab_EventScript_Birch_2:
# 83 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Birch_Text_2, MSGBOX_NPC
	end

NewBirchsLab_EventScript_Birch_1:
# 16 "data/maps/NewBirchsLab/scripts.pory"
	lock
# 17 "data/maps/NewBirchsLab/scripts.pory"
	faceplayer
# 19 "data/maps/NewBirchsLab/scripts.pory"
	message NewBirchsLab_EventScript_Birch_Text_0
# 22 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_REGION_SELECT
# 23 "data/maps/NewBirchsLab/scripts.pory"
	special ShowScrollableMultichoice
# 24 "data/maps/NewBirchsLab/scripts.pory"
	waitstate
# 28 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewBirchsLab_EventScript_Birch_9
# 33 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq NewBirchsLab_EventScript_Birch_10
# 38 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq NewBirchsLab_EventScript_Birch_11
# 43 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq NewBirchsLab_EventScript_Birch_12
# 48 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq NewBirchsLab_EventScript_Birch_13
# 53 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq NewBirchsLab_EventScript_Birch_14
# 58 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq NewBirchsLab_EventScript_Birch_15
# 63 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq NewBirchsLab_EventScript_Birch_16
# 68 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq NewBirchsLab_EventScript_Birch_17
NewBirchsLab_EventScript_Birch_8:
# 76 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_Birch_Text_1
# 77 "data/maps/NewBirchsLab/scripts.pory"
	waitmessage
# 78 "data/maps/NewBirchsLab/scripts.pory"
	release
	end

NewBirchsLab_EventScript_Birch_3:
# 14 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSEN_WATER_TYPE, NewBirchsLab_EventScript_Birch_5
	goto NewBirchsLab_EventScript_Birch_2

NewBirchsLab_EventScript_Birch_5:
# 14 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_unset FLAG_CHOSEN_FIRE_TYPE, NewBirchsLab_EventScript_Birch_1
	goto NewBirchsLab_EventScript_Birch_2

NewBirchsLab_EventScript_Birch_9:
# 30 "data/maps/NewBirchsLab/scripts.pory"
	call StarterFade
# 31 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_REGION, 0
	goto NewBirchsLab_EventScript_Birch_8

NewBirchsLab_EventScript_Birch_10:
# 35 "data/maps/NewBirchsLab/scripts.pory"
	call StarterFade
# 36 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_REGION, 1
	goto NewBirchsLab_EventScript_Birch_8

NewBirchsLab_EventScript_Birch_11:
# 40 "data/maps/NewBirchsLab/scripts.pory"
	call StarterFade
# 41 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_REGION, 2
	goto NewBirchsLab_EventScript_Birch_8

NewBirchsLab_EventScript_Birch_12:
# 45 "data/maps/NewBirchsLab/scripts.pory"
	call StarterFade
# 46 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_REGION, 3
	goto NewBirchsLab_EventScript_Birch_8

NewBirchsLab_EventScript_Birch_13:
# 50 "data/maps/NewBirchsLab/scripts.pory"
	call StarterFade
# 51 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_REGION, 4
	goto NewBirchsLab_EventScript_Birch_8

NewBirchsLab_EventScript_Birch_14:
# 55 "data/maps/NewBirchsLab/scripts.pory"
	call StarterFade
# 56 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_REGION, 5
	goto NewBirchsLab_EventScript_Birch_8

NewBirchsLab_EventScript_Birch_15:
# 60 "data/maps/NewBirchsLab/scripts.pory"
	call StarterFade
# 61 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_REGION, 6
	goto NewBirchsLab_EventScript_Birch_8

NewBirchsLab_EventScript_Birch_16:
# 65 "data/maps/NewBirchsLab/scripts.pory"
	call StarterFade
# 66 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_REGION, 7
	goto NewBirchsLab_EventScript_Birch_8

NewBirchsLab_EventScript_Birch_17:
# 70 "data/maps/NewBirchsLab/scripts.pory"
	call StarterFade
# 71 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_REGION, 8
	goto NewBirchsLab_EventScript_Birch_8


StarterFade::
# 90 "data/maps/NewBirchsLab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 91 "data/maps/NewBirchsLab/scripts.pory"
	delay 20
# 92 "data/maps/NewBirchsLab/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


NewBirchsLab_EventScript_GrassStarter::
# 98 "data/maps/NewBirchsLab/scripts.pory"
	lockall
# 100 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_CHOSEN_GRASS_TYPE, NewBirchsLab_EventScript_GrassStarter_2
# 100 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_CHOSEN_WATER_TYPE, NewBirchsLab_EventScript_GrassStarter_2
# 100 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_CHOSEN_FIRE_TYPE, NewBirchsLab_EventScript_GrassStarter_2
# 109 "data/maps/NewBirchsLab/scripts.pory"
	switch VAR_STARTER_REGION
# 111 "data/maps/NewBirchsLab/scripts.pory"
	case 0, NewBirchsLab_EventScript_GrassStarter_10
# 114 "data/maps/NewBirchsLab/scripts.pory"
	case 1, NewBirchsLab_EventScript_GrassStarter_11
# 117 "data/maps/NewBirchsLab/scripts.pory"
	case 2, NewBirchsLab_EventScript_GrassStarter_12
# 120 "data/maps/NewBirchsLab/scripts.pory"
	case 3, NewBirchsLab_EventScript_GrassStarter_13
# 123 "data/maps/NewBirchsLab/scripts.pory"
	case 4, NewBirchsLab_EventScript_GrassStarter_14
# 126 "data/maps/NewBirchsLab/scripts.pory"
	case 5, NewBirchsLab_EventScript_GrassStarter_15
# 129 "data/maps/NewBirchsLab/scripts.pory"
	case 6, NewBirchsLab_EventScript_GrassStarter_16
# 132 "data/maps/NewBirchsLab/scripts.pory"
	case 7, NewBirchsLab_EventScript_GrassStarter_17
# 135 "data/maps/NewBirchsLab/scripts.pory"
	case 8, NewBirchsLab_EventScript_GrassStarter_18
NewBirchsLab_EventScript_GrassStarter_8:
# 139 "data/maps/NewBirchsLab/scripts.pory"
	call ShowStarterPicBySpecies
# 140 "data/maps/NewBirchsLab/scripts.pory"
	call GiveStarterFromVar
# 141 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_GrassStarter_20
NewBirchsLab_EventScript_GrassStarter_19:
# 146 "data/maps/NewBirchsLab/scripts.pory"
	releaseall
	end

NewBirchsLab_EventScript_GrassStarter_2:
# 102 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_GrassStarter_Text_0
# 103 "data/maps/NewBirchsLab/scripts.pory"
	waitmessage
# 104 "data/maps/NewBirchsLab/scripts.pory"
	releaseall
	end

NewBirchsLab_EventScript_GrassStarter_10:
# 112 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_SPECIES, SPECIES_BULBASAUR
	goto NewBirchsLab_EventScript_GrassStarter_8

NewBirchsLab_EventScript_GrassStarter_11:
# 115 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_SPECIES, SPECIES_CHIKORITA
	goto NewBirchsLab_EventScript_GrassStarter_8

NewBirchsLab_EventScript_GrassStarter_12:
# 118 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_SPECIES, SPECIES_TREECKO
	goto NewBirchsLab_EventScript_GrassStarter_8

NewBirchsLab_EventScript_GrassStarter_13:
# 121 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_SPECIES, SPECIES_TURTWIG
	goto NewBirchsLab_EventScript_GrassStarter_8

NewBirchsLab_EventScript_GrassStarter_14:
# 124 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_SPECIES, SPECIES_SNIVY
	goto NewBirchsLab_EventScript_GrassStarter_8

NewBirchsLab_EventScript_GrassStarter_15:
# 127 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_SPECIES, SPECIES_CHESPIN
	goto NewBirchsLab_EventScript_GrassStarter_8

NewBirchsLab_EventScript_GrassStarter_16:
# 130 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_SPECIES, SPECIES_ROWLET
	goto NewBirchsLab_EventScript_GrassStarter_8

NewBirchsLab_EventScript_GrassStarter_17:
# 133 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_SPECIES, SPECIES_GROOKEY
	goto NewBirchsLab_EventScript_GrassStarter_8

NewBirchsLab_EventScript_GrassStarter_18:
# 136 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_SPECIES, SPECIES_SPRIGATITO
	goto NewBirchsLab_EventScript_GrassStarter_8

NewBirchsLab_EventScript_GrassStarter_20:
# 143 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSEN_GRASS_TYPE
# 144 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 1
	goto NewBirchsLab_EventScript_GrassStarter_19


NewBirchsLab_EventScript_WaterStarter::
# 152 "data/maps/NewBirchsLab/scripts.pory"
	lockall
# 154 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_CHOSEN_GRASS_TYPE, NewBirchsLab_EventScript_WaterStarter_2
# 154 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_CHOSEN_WATER_TYPE, NewBirchsLab_EventScript_WaterStarter_2
# 154 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_CHOSEN_FIRE_TYPE, NewBirchsLab_EventScript_WaterStarter_2
# 162 "data/maps/NewBirchsLab/scripts.pory"
	switch VAR_STARTER_REGION
# 164 "data/maps/NewBirchsLab/scripts.pory"
	case 0, NewBirchsLab_EventScript_WaterStarter_10
# 167 "data/maps/NewBirchsLab/scripts.pory"
	case 1, NewBirchsLab_EventScript_WaterStarter_11
# 170 "data/maps/NewBirchsLab/scripts.pory"
	case 2, NewBirchsLab_EventScript_WaterStarter_12
# 173 "data/maps/NewBirchsLab/scripts.pory"
	case 3, NewBirchsLab_EventScript_WaterStarter_13
# 176 "data/maps/NewBirchsLab/scripts.pory"
	case 4, NewBirchsLab_EventScript_WaterStarter_14
# 179 "data/maps/NewBirchsLab/scripts.pory"
	case 5, NewBirchsLab_EventScript_WaterStarter_15
# 182 "data/maps/NewBirchsLab/scripts.pory"
	case 6, NewBirchsLab_EventScript_WaterStarter_16
# 185 "data/maps/NewBirchsLab/scripts.pory"
	case 7, NewBirchsLab_EventScript_WaterStarter_17
# 188 "data/maps/NewBirchsLab/scripts.pory"
	case 8, NewBirchsLab_EventScript_WaterStarter_18
NewBirchsLab_EventScript_WaterStarter_8:
# 192 "data/maps/NewBirchsLab/scripts.pory"
	call ShowStarterPicBySpecies
# 193 "data/maps/NewBirchsLab/scripts.pory"
	call GiveStarterFromVar
# 194 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_WaterStarter_20
NewBirchsLab_EventScript_WaterStarter_19:
# 199 "data/maps/NewBirchsLab/scripts.pory"
	releaseall
	end

NewBirchsLab_EventScript_WaterStarter_2:
# 156 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_GrassStarter_Text_0
# 157 "data/maps/NewBirchsLab/scripts.pory"
	waitmessage
# 158 "data/maps/NewBirchsLab/scripts.pory"
	releaseall
	end

NewBirchsLab_EventScript_WaterStarter_10:
# 165 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_SPECIES, SPECIES_SQUIRTLE
	goto NewBirchsLab_EventScript_WaterStarter_8

NewBirchsLab_EventScript_WaterStarter_11:
# 168 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_SPECIES, SPECIES_TOTODILE
	goto NewBirchsLab_EventScript_WaterStarter_8

NewBirchsLab_EventScript_WaterStarter_12:
# 171 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_SPECIES, SPECIES_MUDKIP
	goto NewBirchsLab_EventScript_WaterStarter_8

NewBirchsLab_EventScript_WaterStarter_13:
# 174 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_SPECIES, SPECIES_PIPLUP
	goto NewBirchsLab_EventScript_WaterStarter_8

NewBirchsLab_EventScript_WaterStarter_14:
# 177 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_SPECIES, SPECIES_OSHAWOTT
	goto NewBirchsLab_EventScript_WaterStarter_8

NewBirchsLab_EventScript_WaterStarter_15:
# 180 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_SPECIES, SPECIES_FROAKIE
	goto NewBirchsLab_EventScript_WaterStarter_8

NewBirchsLab_EventScript_WaterStarter_16:
# 183 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_SPECIES, SPECIES_POPPLIO
	goto NewBirchsLab_EventScript_WaterStarter_8

NewBirchsLab_EventScript_WaterStarter_17:
# 186 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_SPECIES, SPECIES_SOBBLE
	goto NewBirchsLab_EventScript_WaterStarter_8

NewBirchsLab_EventScript_WaterStarter_18:
# 189 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_SPECIES, SPECIES_QUAXLY
	goto NewBirchsLab_EventScript_WaterStarter_8

NewBirchsLab_EventScript_WaterStarter_20:
# 196 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSEN_WATER_TYPE
# 197 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 2
	goto NewBirchsLab_EventScript_WaterStarter_19


NewBirchsLab_EventScript_FireStarter::
# 205 "data/maps/NewBirchsLab/scripts.pory"
	lockall
# 207 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_CHOSEN_GRASS_TYPE, NewBirchsLab_EventScript_FireStarter_2
# 207 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_CHOSEN_WATER_TYPE, NewBirchsLab_EventScript_FireStarter_2
# 207 "data/maps/NewBirchsLab/scripts.pory"
	goto_if_set FLAG_CHOSEN_FIRE_TYPE, NewBirchsLab_EventScript_FireStarter_2
# 215 "data/maps/NewBirchsLab/scripts.pory"
	switch VAR_STARTER_REGION
# 217 "data/maps/NewBirchsLab/scripts.pory"
	case 0, NewBirchsLab_EventScript_FireStarter_10
# 220 "data/maps/NewBirchsLab/scripts.pory"
	case 1, NewBirchsLab_EventScript_FireStarter_11
# 223 "data/maps/NewBirchsLab/scripts.pory"
	case 2, NewBirchsLab_EventScript_FireStarter_12
# 226 "data/maps/NewBirchsLab/scripts.pory"
	case 3, NewBirchsLab_EventScript_FireStarter_13
# 229 "data/maps/NewBirchsLab/scripts.pory"
	case 4, NewBirchsLab_EventScript_FireStarter_14
# 232 "data/maps/NewBirchsLab/scripts.pory"
	case 5, NewBirchsLab_EventScript_FireStarter_15
# 235 "data/maps/NewBirchsLab/scripts.pory"
	case 6, NewBirchsLab_EventScript_FireStarter_16
# 238 "data/maps/NewBirchsLab/scripts.pory"
	case 7, NewBirchsLab_EventScript_FireStarter_17
# 241 "data/maps/NewBirchsLab/scripts.pory"
	case 8, NewBirchsLab_EventScript_FireStarter_18
NewBirchsLab_EventScript_FireStarter_8:
# 245 "data/maps/NewBirchsLab/scripts.pory"
	call ShowStarterPicBySpecies
# 246 "data/maps/NewBirchsLab/scripts.pory"
	call GiveStarterFromVar
# 247 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_FireStarter_20
NewBirchsLab_EventScript_FireStarter_19:
# 252 "data/maps/NewBirchsLab/scripts.pory"
	releaseall
	end

NewBirchsLab_EventScript_FireStarter_2:
# 209 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NewBirchsLab_EventScript_GrassStarter_Text_0
# 210 "data/maps/NewBirchsLab/scripts.pory"
	waitmessage
# 211 "data/maps/NewBirchsLab/scripts.pory"
	releaseall
	end

NewBirchsLab_EventScript_FireStarter_10:
# 218 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_SPECIES, SPECIES_CHARMANDER
	goto NewBirchsLab_EventScript_FireStarter_8

NewBirchsLab_EventScript_FireStarter_11:
# 221 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_SPECIES, SPECIES_CYNDAQUIL
	goto NewBirchsLab_EventScript_FireStarter_8

NewBirchsLab_EventScript_FireStarter_12:
# 224 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_SPECIES, SPECIES_TORCHIC
	goto NewBirchsLab_EventScript_FireStarter_8

NewBirchsLab_EventScript_FireStarter_13:
# 227 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_SPECIES, SPECIES_CHIMCHAR
	goto NewBirchsLab_EventScript_FireStarter_8

NewBirchsLab_EventScript_FireStarter_14:
# 230 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_SPECIES, SPECIES_TEPIG
	goto NewBirchsLab_EventScript_FireStarter_8

NewBirchsLab_EventScript_FireStarter_15:
# 233 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_SPECIES, SPECIES_FENNEKIN
	goto NewBirchsLab_EventScript_FireStarter_8

NewBirchsLab_EventScript_FireStarter_16:
# 236 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_SPECIES, SPECIES_LITTEN
	goto NewBirchsLab_EventScript_FireStarter_8

NewBirchsLab_EventScript_FireStarter_17:
# 239 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_SPECIES, SPECIES_SCORBUNNY
	goto NewBirchsLab_EventScript_FireStarter_8

NewBirchsLab_EventScript_FireStarter_18:
# 242 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_STARTER_SPECIES, SPECIES_FUECOCO
	goto NewBirchsLab_EventScript_FireStarter_8

NewBirchsLab_EventScript_FireStarter_20:
# 249 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_CHOSEN_FIRE_TYPE
# 250 "data/maps/NewBirchsLab/scripts.pory"
	removeobject 3
	goto NewBirchsLab_EventScript_FireStarter_19


GiveStarterFromVar::
# 258 "data/maps/NewBirchsLab/scripts.pory"
	msgbox GiveStarterFromVar_Text_0, MSGBOX_YESNO
# 259 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne GiveStarterFromVar_2
# 265 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GiveStarterFromVar_5
GiveStarterFromVar_4:
	return

GiveStarterFromVar_2:
# 261 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 262 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_RESULT, 0
	return

GiveStarterFromVar_5:
# 267 "data/maps/NewBirchsLab/scripts.pory"
	givemon VAR_STARTER_SPECIES, 5
# 269 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq GiveStarterFromVar_7
# 278 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq GiveStarterFromVar_8
# 290 "data/maps/NewBirchsLab/scripts.pory"
	msgbox GiveStarterFromVar_Text_3
# 291 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 292 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_RESULT, 0
	goto GiveStarterFromVar_4

GiveStarterFromVar_7:
# 271 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 272 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 273 "data/maps/NewBirchsLab/scripts.pory"
	msgbox GiveStarterFromVar_Text_1
# 274 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 275 "data/maps/NewBirchsLab/scripts.pory"
	call NicknamePartyMon
# 276 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_RESULT, YES
	goto GiveStarterFromVar_4

GiveStarterFromVar_8:
# 280 "data/maps/NewBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 281 "data/maps/NewBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 282 "data/maps/NewBirchsLab/scripts.pory"
	msgbox GiveStarterFromVar_Text_2
# 283 "data/maps/NewBirchsLab/scripts.pory"
	hidemonpic
# 284 "data/maps/NewBirchsLab/scripts.pory"
	call NicknameBoxMon
# 285 "data/maps/NewBirchsLab/scripts.pory"
	setvar VAR_RESULT, YES
	goto GiveStarterFromVar_4


ShowStarterPicBySpecies::
# 301 "data/maps/NewBirchsLab/scripts.pory"
	switch VAR_STARTER_SPECIES
# 303 "data/maps/NewBirchsLab/scripts.pory"
	case SPECIES_BULBASAUR, ShowStarterPicBySpecies_3
# 306 "data/maps/NewBirchsLab/scripts.pory"
	case SPECIES_CHIKORITA, ShowStarterPicBySpecies_4
# 309 "data/maps/NewBirchsLab/scripts.pory"
	case SPECIES_TREECKO, ShowStarterPicBySpecies_5
# 312 "data/maps/NewBirchsLab/scripts.pory"
	case SPECIES_TURTWIG, ShowStarterPicBySpecies_6
# 315 "data/maps/NewBirchsLab/scripts.pory"
	case SPECIES_SNIVY, ShowStarterPicBySpecies_7
# 318 "data/maps/NewBirchsLab/scripts.pory"
	case SPECIES_CHESPIN, ShowStarterPicBySpecies_8
# 321 "data/maps/NewBirchsLab/scripts.pory"
	case SPECIES_ROWLET, ShowStarterPicBySpecies_9
# 324 "data/maps/NewBirchsLab/scripts.pory"
	case SPECIES_GROOKEY, ShowStarterPicBySpecies_10
# 327 "data/maps/NewBirchsLab/scripts.pory"
	case SPECIES_SPRIGATITO, ShowStarterPicBySpecies_11
# 330 "data/maps/NewBirchsLab/scripts.pory"
	case SPECIES_SQUIRTLE, ShowStarterPicBySpecies_12
# 333 "data/maps/NewBirchsLab/scripts.pory"
	case SPECIES_TOTODILE, ShowStarterPicBySpecies_13
# 336 "data/maps/NewBirchsLab/scripts.pory"
	case SPECIES_MUDKIP, ShowStarterPicBySpecies_14
# 339 "data/maps/NewBirchsLab/scripts.pory"
	case SPECIES_PIPLUP, ShowStarterPicBySpecies_15
# 342 "data/maps/NewBirchsLab/scripts.pory"
	case SPECIES_OSHAWOTT, ShowStarterPicBySpecies_16
# 345 "data/maps/NewBirchsLab/scripts.pory"
	case SPECIES_FROAKIE, ShowStarterPicBySpecies_17
# 348 "data/maps/NewBirchsLab/scripts.pory"
	case SPECIES_POPPLIO, ShowStarterPicBySpecies_18
# 351 "data/maps/NewBirchsLab/scripts.pory"
	case SPECIES_SOBBLE, ShowStarterPicBySpecies_19
# 354 "data/maps/NewBirchsLab/scripts.pory"
	case SPECIES_QUAXLY, ShowStarterPicBySpecies_20
# 357 "data/maps/NewBirchsLab/scripts.pory"
	case SPECIES_CHARMANDER, ShowStarterPicBySpecies_21
# 360 "data/maps/NewBirchsLab/scripts.pory"
	case SPECIES_CYNDAQUIL, ShowStarterPicBySpecies_22
# 363 "data/maps/NewBirchsLab/scripts.pory"
	case SPECIES_TORCHIC, ShowStarterPicBySpecies_23
# 366 "data/maps/NewBirchsLab/scripts.pory"
	case SPECIES_CHIMCHAR, ShowStarterPicBySpecies_24
# 369 "data/maps/NewBirchsLab/scripts.pory"
	case SPECIES_TEPIG, ShowStarterPicBySpecies_25
# 372 "data/maps/NewBirchsLab/scripts.pory"
	case SPECIES_FENNEKIN, ShowStarterPicBySpecies_26
# 375 "data/maps/NewBirchsLab/scripts.pory"
	case SPECIES_LITTEN, ShowStarterPicBySpecies_27
# 378 "data/maps/NewBirchsLab/scripts.pory"
	case SPECIES_SCORBUNNY, ShowStarterPicBySpecies_28
# 381 "data/maps/NewBirchsLab/scripts.pory"
	case SPECIES_FUECOCO, ShowStarterPicBySpecies_29
# 386 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
ShowStarterPicBySpecies_1:
	return

ShowStarterPicBySpecies_3:
# 304 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
	goto ShowStarterPicBySpecies_1

ShowStarterPicBySpecies_4:
# 307 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
	goto ShowStarterPicBySpecies_1

ShowStarterPicBySpecies_5:
# 310 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
	goto ShowStarterPicBySpecies_1

ShowStarterPicBySpecies_6:
# 313 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_TURTWIG, 10, 3
	goto ShowStarterPicBySpecies_1

ShowStarterPicBySpecies_7:
# 316 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_SNIVY, 10, 3
	goto ShowStarterPicBySpecies_1

ShowStarterPicBySpecies_8:
# 319 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_CHESPIN, 10, 3
	goto ShowStarterPicBySpecies_1

ShowStarterPicBySpecies_9:
# 322 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_ROWLET, 10, 3
	goto ShowStarterPicBySpecies_1

ShowStarterPicBySpecies_10:
# 325 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_GROOKEY, 10, 3
	goto ShowStarterPicBySpecies_1

ShowStarterPicBySpecies_11:
# 328 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_SPRIGATITO, 10, 3
	goto ShowStarterPicBySpecies_1

ShowStarterPicBySpecies_12:
# 331 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
	goto ShowStarterPicBySpecies_1

ShowStarterPicBySpecies_13:
# 334 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
	goto ShowStarterPicBySpecies_1

ShowStarterPicBySpecies_14:
# 337 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
	goto ShowStarterPicBySpecies_1

ShowStarterPicBySpecies_15:
# 340 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_PIPLUP, 10, 3
	goto ShowStarterPicBySpecies_1

ShowStarterPicBySpecies_16:
# 343 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
	goto ShowStarterPicBySpecies_1

ShowStarterPicBySpecies_17:
# 346 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_FROAKIE, 10, 3
	goto ShowStarterPicBySpecies_1

ShowStarterPicBySpecies_18:
# 349 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_POPPLIO, 10, 3
	goto ShowStarterPicBySpecies_1

ShowStarterPicBySpecies_19:
# 352 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_SOBBLE, 10, 3
	goto ShowStarterPicBySpecies_1

ShowStarterPicBySpecies_20:
# 355 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_QUAXLY, 10, 3
	goto ShowStarterPicBySpecies_1

ShowStarterPicBySpecies_21:
# 358 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
	goto ShowStarterPicBySpecies_1

ShowStarterPicBySpecies_22:
# 361 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
	goto ShowStarterPicBySpecies_1

ShowStarterPicBySpecies_23:
# 364 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
	goto ShowStarterPicBySpecies_1

ShowStarterPicBySpecies_24:
# 367 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_CHIMCHAR, 10, 3
	goto ShowStarterPicBySpecies_1

ShowStarterPicBySpecies_25:
# 370 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_TEPIG, 10, 3
	goto ShowStarterPicBySpecies_1

ShowStarterPicBySpecies_26:
# 373 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_FENNEKIN, 10, 3
	goto ShowStarterPicBySpecies_1

ShowStarterPicBySpecies_27:
# 376 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_LITTEN, 10, 3
	goto ShowStarterPicBySpecies_1

ShowStarterPicBySpecies_28:
# 379 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_SCORBUNNY, 10, 3
	goto ShowStarterPicBySpecies_1

ShowStarterPicBySpecies_29:
# 382 "data/maps/NewBirchsLab/scripts.pory"
	showmonpic SPECIES_FUECOCO, 10, 3
	goto ShowStarterPicBySpecies_1


NicknamePartyMon::
# 395 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 396 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_2
NicknamePartyMon_1:
	return

NicknamePartyMon_2:
# 398 "data/maps/NewBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 399 "data/maps/NewBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto NicknamePartyMon_1


NicknameBoxMon::
# 406 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 407 "data/maps/NewBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 411 "data/maps/NewBirchsLab/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 409 "data/maps/NewBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


NewBirchsLab_EventScript_Birch_Text_0:
# 19 "data/maps/NewBirchsLab/scripts.pory"
	.string "Would you like to switch regions?$"

NewBirchsLab_EventScript_Birch_Text_1:
# 76 "data/maps/NewBirchsLab/scripts.pory"
	.string "Choose wisely...$"

NewBirchsLab_EventScript_Birch_Text_2:
# 83 "data/maps/NewBirchsLab/scripts.pory"
	.string "Take care of your Pokémon.$"

NewBirchsLab_EventScript_GrassStarter_Text_0:
# 102 "data/maps/NewBirchsLab/scripts.pory"
	.string "Don't take another Pokémon.$"

GiveStarterFromVar_Text_0:
# 258 "data/maps/NewBirchsLab/scripts.pory"
	.string "Do you want to choose this Pokémon?$"

GiveStarterFromVar_Text_1:
# 273 "data/maps/NewBirchsLab/scripts.pory"
	.string "Received a Pokémon!$"

GiveStarterFromVar_Text_2:
# 282 "data/maps/NewBirchsLab/scripts.pory"
	.string "Received a Pokémon! (sent to PC)$"

GiveStarterFromVar_Text_3:
# 290 "data/maps/NewBirchsLab/scripts.pory"
	.string "No more room.$"

NicknamePartyMon_Text_0:
# 395 "data/maps/NewBirchsLab/scripts.pory"
	.string "Give it a nickname?$"

NicknameBoxMon_Text_0:
# 411 "data/maps/NewBirchsLab/scripts.pory"
	.string "Transferred to PC$"

NewBirchsLab_NotChosen::
# 415 "data/maps/NewBirchsLab/scripts.pory"
	.string "You did not choose a Pokémon.$"
