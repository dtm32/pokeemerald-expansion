/* You may add any custom species below this point based on the following structure: */

/*
[SPECIES_NONE] =
{
    .baseHP        = 1,
    .baseAttack    = 1,
    .baseDefense   = 1,
    .baseSpeed     = 1,
    .baseSpAttack  = 1,
    .baseSpDefense = 1,
    .types = MON_TYPES(TYPE_MYSTERY),
    .catchRate = 255,
    .expYield = 67,
    .evYield_HP = 1,
    .evYield_Defense = 1,
    .evYield_SpDefense = 1,
    .genderRatio = PERCENT_FEMALE(50),
    .eggCycles = 20,
    .friendship = STANDARD_FRIENDSHIP,
    .growthRate = GROWTH_MEDIUM_FAST,
    .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
    .abilities = { ABILITY_NONE, ABILITY_CURSED_BODY, ABILITY_DAMP },
    .bodyColor = BODY_COLOR_BLACK,
    .speciesName = _("??????????"),
    .cryId = CRY_NONE,
    .natDexNum = NATIONAL_DEX_NONE,
    .categoryName = _("Unknown"),
    .height = 0,
    .weight = 0,
    .description = COMPOUND_STRING(
        "This is a newly discovered Pokémon.\n"
        "It is currently under investigation.\n"
        "No detailed information is available\n"
        "at this time."),
    .pokemonScale = 256,
    .pokemonOffset = 0,
    .trainerScale = 256,
    .trainerOffset = 0,
    .frontPic = gMonFrontPic_CircledQuestionMark,
    .frontPicSize = MON_COORDS_SIZE(64, 64),
    //.frontPicFemale = gMonFrontPic_CircledQuestionMark,
    //.frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
    .frontPicYOffset = 0,
    .frontAnimFrames = sAnims_None,
    //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
    .backPic = gMonBackPic_CircledQuestionMark,
    .backPicSize = MON_COORDS_SIZE(64, 64),
    //.backPicFemale = gMonBackPic_CircledQuestionMarkF,
    //.backPicSizeFemale = MON_COORDS_SIZE(64, 64),
    .backPicYOffset = 7,
    .backAnimId = BACK_ANIM_NONE,
    .palette = gMonPalette_CircledQuestionMark,
    .shinyPalette = gMonShinyPalette_CircledQuestionMark,
    //.paletteFemale = gMonPalette_CircledQuestionMarkF,
    .shinyPaletteFemale = gMonShinyPalette_CircledQuestionMarkF,
    .iconSprite = gMonIcon_QuestionMark,
    .iconPalIndex = 0,
    //.iconSpriteFemale = gMonIcon_QuestionMarkF,
    //.iconPalIndexFemale = 1,
    FOOTPRINT(QuestionMark)
    .levelUpLearnset = sNoneLevelUpLearnset,
    .teachableLearnset = sNoneTeachableLearnset,
    .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                            {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
    //.formSpeciesIdTable = sNoneFormSpeciesIdTable,
    //.formChangeTable = sNoneFormChangeTable,
    .allPerfectIVs = TRUE,
},
*/


// WURMPLE FAMILY
    [SPECIES_WURMPLE_DELTA] =
    {
        .baseHP        = 48,
        .baseAttack    = 65,
        .baseDefense   = 47,
        .baseSpeed     = 60,
        .baseSpAttack  = 74,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_DRAGON, TYPE_BUG),
        .catchRate = 155,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 78,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 39,
    #else
        .expYield = 54,
    #endif
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .itemCommon = ITEM_PECHA_BERRY,
        .itemRare = ITEM_BRIGHT_POWDER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_NONE, ABILITY_RUN_AWAY },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Wurmple δ"),
        .cryId = CRY_WURMPLE,
        .natDexNum = NATIONAL_DEX_WURMPLE,
        .categoryName = _("Worm"),
        .height = 3,
        .weight = 36,
        .description = COMPOUND_STRING(
            "It sticks to tree branches and eats\n"
            "leaves. The thread it spits from its mouth,\n"
            "which becomes gooey when it touches\n"
            "air, slows the movement of its foes."),
        .pokemonScale = 711,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Wurmple,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Wurmple,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Wurmple,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_WurmpleDelta,
        .shinyPalette = gMonShinyPalette_Wurmple,
        .iconSprite = gMonIcon_Wurmple,
        .iconPalIndex = 0,
        FOOTPRINT(Wurmple)
        OVERWORLD(
            sPicTable_Wurmple,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            gOverworldPalette_Wurmple,
            gShinyOverworldPalette_Wurmple
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sWurmpleDeltaLevelUpLearnset,
        .teachableLearnset = sWurmpleTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL_SILCOON, 7, SPECIES_SILCOON},
                                {EVO_LEVEL_CASCOON, 7, SPECIES_CASCOON}),
    },

    [SPECIES_SILCOON_DELTA] =
    {
        .baseHP        = 61,
        .baseAttack    = 35,
        .baseDefense   = 155,
        .baseSpeed     = 15,
        .baseSpAttack  = 55,
        .baseSpDefense = 129,
        .types = MON_TYPES(TYPE_GROUND, TYPE_BUG),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_4) ? 72 : 71,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Silcoon δ"),
        .cryId = CRY_SILCOON,
        .natDexNum = NATIONAL_DEX_SILCOON,
        .categoryName = _("Cocoon"),
        .height = 6,
        .weight = 100,
        .description = COMPOUND_STRING(
            "It prepares for evolution using the\n"
            "energy it stored while it was a Wurmple.\n"
            "It keeps watch over the surroundings with\n"
            "its two eyes."),
        .pokemonScale = 431,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Silcoon,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Silcoon,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Silcoon,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_SilcoonDelta,
        .shinyPalette = gMonShinyPalette_Silcoon,
        .iconSprite = gMonIcon_Silcoon,
        .iconPalIndex = 2,
        FOOTPRINT(Silcoon)
        OVERWORLD(
            sPicTable_Silcoon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            gOverworldPalette_Silcoon,
            gShinyOverworldPalette_Silcoon
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sSilcoonDeltaLevelUpLearnset,
        .teachableLearnset = sSilcoonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 10, SPECIES_BEAUTIFLY}),
    },

    [SPECIES_DUSTOX_DELTA] =
    {
        .baseHP        = 60,
        .baseAttack    = 70,
        .baseDefense   = 70,
        .baseSpeed     = 65,
        .baseSpAttack  = 70,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_FIRE),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 193,
    #elif P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 173,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 135,
    #elif P_UPDATED_EXP_YIELDS >= GEN_4
        .expYield = 161,
    #else
        .expYield = 160,
    #endif
        .evYield_SpDefense = 3,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_NONE, ABILITY_COMPOUND_EYES },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Dustox δ"),
        .cryId = CRY_DUSTOX,
        .natDexNum = NATIONAL_DEX_DUSTOX,
        .categoryName = _("Poison Moth"),
        .height = 12,
        .weight = 316,
        .description = COMPOUND_STRING(
            "It is a nocturnal Pokémon that flies from\n"
            "fields and mountains to the attraction of\n"
            "streetlights at night. It looses highly\n"
            "toxic powder from its wings."),
        .pokemonScale = 269,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dustox,
        .frontPicFemale = gMonFrontPic_DustoxF,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Dustox,
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        .enemyMonElevation = 12,
        .backPic = gMonBackPic_Dustox,
        .backPicFemale = gMonBackPic_DustoxF,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_DustoxDelta,
        .shinyPalette = gMonShinyPalette_Dustox,
        .iconSprite = gMonIcon_DustoxDelta,
        .iconPalIndex = 0,
        FOOTPRINT(Dustox)
        OVERWORLD(
            sPicTable_Dustox,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Dustox,
            gShinyOverworldPalette_Dustox
        )
        .levelUpLearnset = sDustoxDeltaLevelUpLearnset,
        .teachableLearnset = sDustoxTeachableLearnset,
    },
// END WURMPLE FAMILY

// NINCADA FAMILY
[SPECIES_NINCADA_DELTA] =
{
    .baseHP        = 31,
    .baseAttack    = 45,
    .baseDefense   = 90,
    .baseSpeed     = 40,
    .baseSpAttack  = 30,
    .baseSpDefense = 30,
    .types = MON_TYPES(TYPE_NORMAL, TYPE_ELECTRIC),
    .catchRate = 255,
    .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 53 : 65,
    .evYield_Defense = 1,
    .itemRare = ITEM_SOFT_SAND,
    .genderRatio = PERCENT_FEMALE(50),
    .eggCycles = 15,
    .friendship = STANDARD_FRIENDSHIP,
    .growthRate = GROWTH_ERRATIC,
    .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
    .abilities = { ABILITY_COMPOUND_EYES, ABILITY_NONE, ABILITY_RUN_AWAY },
    .bodyColor = BODY_COLOR_GRAY,
    .speciesName = _("Nincada δ"),
    .cryId = CRY_NINCADA,
    .natDexNum = NATIONAL_DEX_NINCADA,
    .categoryName = _("Trainee"),
    .height = 5,
    .weight = 55,
    .description = COMPOUND_STRING(
        "It makes its nest at the roots of a mighty\n"
        "tree. Using its whiskerlike antennae, it\n"
        "probes its surroundings in the\n"
        "pitch-black darkness of soil."),
    .pokemonScale = 405,
    .pokemonOffset = 21,
    .trainerScale = 256,
    .trainerOffset = 0,
    .frontPic = gMonFrontPic_Nincada,
    .frontPicSize = MON_COORDS_SIZE(56, 32),
    .frontPicYOffset = 16,
    .frontAnimFrames = sAnims_Nincada,
    .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
    .backPic = gMonBackPic_Nincada,
    .backPicSize = MON_COORDS_SIZE(64, 32),
    .backPicYOffset = 18,
    .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
    .palette = gMonPalette_Nincada,
    .shinyPalette = gMonShinyPalette_Nincada,
    .iconSprite = gMonIcon_Nincada,
    .iconPalIndex = 1,
    FOOTPRINT(Nincada)
    OVERWORLD(
        sPicTable_Nincada,
        SIZE_32x32,
        SHADOW_SIZE_M,
        TRACKS_BUG,
        gOverworldPalette_Nincada,
        gShinyOverworldPalette_Nincada
    )
    .levelUpLearnset = sNincadaLevelUpLearnset,
    .teachableLearnset = sNincadaTeachableLearnset,
    .eggMoveLearnset = sNincadaEggMoveLearnset,
    .evolutions = EVOLUTION({EVO_LEVEL_NINJASK, 20, SPECIES_NINJASK_DELTA},
                            {EVO_LEVEL_SHEDINJA, 20, SPECIES_SHEDINJA_DELTA}),
},

[SPECIES_NINJASK_DELTA] =
{
    .baseHP        = 61,
    .baseAttack    = 90,
    .baseDefense   = 45,
    .baseSpeed     = 160,
    .baseSpAttack  = 50,
    .baseSpDefense = 50,
    .types = MON_TYPES(TYPE_ELECTRIC, TYPE_FLYING),
    .catchRate = 120,
    .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 160 : 155,
    .evYield_Speed = 2,
    .genderRatio = PERCENT_FEMALE(50),
    .eggCycles = 15,
    .friendship = STANDARD_FRIENDSHIP,
    .growthRate = GROWTH_ERRATIC,
    .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
    .abilities = { ABILITY_SPEED_BOOST, ABILITY_NONE, ABILITY_INFILTRATOR },
    .bodyColor = BODY_COLOR_YELLOW,
    .speciesName = _("Ninjask δ"),
    .cryId = CRY_NINJASK,
    .natDexNum = NATIONAL_DEX_NINJASK,
    .categoryName = _("Ninja"),
    .height = 8,
    .weight = 120,
    .description = COMPOUND_STRING(
        "Because it darts about vigorously at high\n"
        "speed, it is very difficult to see. Hearing\n"
        "its distinctive cries for too long induces\n"
        "a headache."),
    .pokemonScale = 383,
    .pokemonOffset = -9,
    .trainerScale = 256,
    .trainerOffset = 0,
    .frontPic = gMonFrontPic_Ninjask,
    .frontPicSize = MON_COORDS_SIZE(64, 48),
    .frontPicYOffset = 11,
    .frontAnimFrames = sAnims_Ninjask,
    .frontAnimId = ANIM_H_SLIDE_SLOW,
    .enemyMonElevation = 10,
    .backPic = gMonBackPic_Ninjask,
    .backPicSize = MON_COORDS_SIZE(64, 40),
    .backPicYOffset = 13,
    .backAnimId = BACK_ANIM_H_VIBRATE,
    .palette = gMonPalette_Ninjask,
    .shinyPalette = gMonShinyPalette_Ninjask,
    .iconSprite = gMonIcon_Ninjask,
    .iconPalIndex = 1,
    FOOTPRINT(Ninjask)
    OVERWORLD(
        sPicTable_Ninjask,
        SIZE_32x32,
        SHADOW_SIZE_M,
        TRACKS_NONE,
        gOverworldPalette_Ninjask,
        gShinyOverworldPalette_Ninjask
    )
    .levelUpLearnset = sNinjaskLevelUpLearnset,
    .teachableLearnset = sNinjaskTeachableLearnset,
},

[SPECIES_SHEDINJA_DELTA] =
{
    .baseHP        = 1,
    .baseAttack    = 66,
    .baseDefense   = 50,
    .baseSpeed     = 44,
    .baseSpAttack  = 66,
    .baseSpDefense = 33,
    .types = MON_TYPES(TYPE_ELECTRIC, TYPE_FAIRY),
    .catchRate = 45,
    .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 83 : 95,
    .evYield_HP = 2,
    .genderRatio = MON_GENDERLESS,
    .eggCycles = 15,
    .friendship = STANDARD_FRIENDSHIP,
    .growthRate = GROWTH_ERRATIC,
    .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
    .abilities = { ABILITY_WONDER_CLOUD, ABILITY_NONE, ABILITY_NONE },
    .bodyColor = BODY_COLOR_BROWN,
    .speciesName = _("Shedinja δ"),
    .cryId = CRY_SHEDINJA,
    .natDexNum = NATIONAL_DEX_SHEDINJA,
    .categoryName = _("Shed"),
    .height = 8,
    .weight = 12,
    .description = COMPOUND_STRING(
        "A peculiar Pokémon that floats in air even\n"
        "though its wings remain completely still.\n"
        "The inside of its body is hollow and\n"
        "utterly dark."),
    .pokemonScale = 372,
    .pokemonOffset = -8,
    .trainerScale = 256,
    .trainerOffset = 0,
    .frontPic = gMonFrontPic_Shedinja,
    .frontPicSize = MON_COORDS_SIZE(48, 48),
    .frontPicYOffset = 10,
    .frontAnimFrames = sAnims_Shedinja,
    .frontAnimId = ANIM_V_SLIDE_WOBBLE,
    .enemyMonElevation = 8,
    .backPic = gMonBackPic_Shedinja,
    .backPicSize = MON_COORDS_SIZE(64, 56),
    .backPicYOffset = 6,
    .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
    .palette = gMonPalette_ShedinjaDelta,
    .shinyPalette = gMonShinyPalette_Shedinja,
    .iconSprite = gMonIcon_Shedinja,
    .iconPalIndex = 1,
    FOOTPRINT(Shedinja)
    OVERWORLD(
        sPicTable_Shedinja,
        SIZE_32x32,
        SHADOW_SIZE_M,
        TRACKS_NONE,
        gOverworldPalette_Shedinja,
        gShinyOverworldPalette_Shedinja
    )
    .levelUpLearnset = sShedinjaDeltaLevelUpLearnset,
    .teachableLearnset = sShedinjaTeachableLearnset,
},
// END NINCADA FAMILY

// SANDSHREW FAMILY
    [SPECIES_SANDSHREW_DELTA] =
    {
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 85,
        .baseSpeed     = 40,
        .baseSpAttack  = 20,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_DARK),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 60 : 93,
        .evYield_Defense = 1,
        .itemRare = ITEM_GRIP_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SAND_VEIL, ABILITY_NONE, ABILITY_SAND_RUSH },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Sandshrew δ"),
        .cryId = CRY_SANDSHREW,
        .natDexNum = NATIONAL_DEX_SANDSHREW,
        .categoryName = _("Mouse"),
        .height = 6,
        .weight = 120,
        .description = COMPOUND_STRING(
            "When it curls up in a ball, it can make any\n"
            "attack bounce off harmlessly. Its hide has\n"
            "turned tough and solid as a result of\n"
            "living in the desert."),
        .pokemonScale = 365,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sandshrew,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Sandshrew,
        .frontAnimId = ANIM_SWING_CONCAVE_FAST_SHORT,
        .backPic = gMonBackPic_Sandshrew,
        .backPicSize = MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Sandshrew,
        .shinyPalette = gMonShinyPalette_Sandshrew,
        .iconSprite = gMonIcon_Sandshrew,
        .iconPalIndex = 2,
        FOOTPRINT(Sandshrew)
        OVERWORLD(
            sPicTable_Sandshrew,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Sandshrew,
            gShinyOverworldPalette_Sandshrew
        )
        .levelUpLearnset = sSandshrewLevelUpLearnset,
        .teachableLearnset = sSandshrewTeachableLearnset,
        .eggMoveLearnset = sSandshrewEggMoveLearnset,
        .formSpeciesIdTable = sSandshrewFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_SANDSLASH_DELTA}),
    },

    [SPECIES_SANDSLASH_DELTA] =
    {
        .baseHP        = 83,
        .baseAttack    = 100,
        .baseDefense   = 122,
        .baseSpeed     = 65,
        .baseSpAttack  = 45,
        .baseSpDefense = 61,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_DARK),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 158 : 163,
        .evYield_Defense = 2,
        .itemRare = ITEM_GRIP_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_IRON_FIST, ABILITY_BATTLE_ARMOR, ABILITY_SCRAPPY },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Sandslash δ"),
        .cryId = CRY_SANDSLASH,
        .natDexNum = NATIONAL_DEX_SANDSLASH,
        .categoryName = _("Mouse"),
        .height = 10,
        .weight = 295,
        .description = COMPOUND_STRING(
            "It curls up in a ball to protect itself from\n"
            "enemy attacks. It also curls up to prevent\n"
            "heatstroke during the daytime when\n"
            "temperatures rise sharply."),
        .pokemonScale = 341,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sandslash,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Sandslash,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Sandslash,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_SandslashDelta,
        .shinyPalette = gMonShinyPalette_Sandslash,
        .iconSprite = gMonIcon_Sandslash,
        .iconPalIndex = 2,
        FOOTPRINT(Sandslash)
        OVERWORLD(
            sPicTable_Sandslash,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Sandslash,
            gShinyOverworldPalette_Sandslash
        )
        .levelUpLearnset = sSandslashDeltaLevelUpLearnset,
        .teachableLearnset = sSandslashTeachableLearnset,
        .formSpeciesIdTable = sSandslashFormSpeciesIdTable,
    },
// END SANDSHREW FAMILY

// VENONAT FAMILY
    [SPECIES_VENONAT_DELTA] =
    {
        .baseHP        = 67,
        .baseAttack    = 59,
        .baseDefense   = 55,
        .baseSpeed     = 49,
        .baseSpAttack  = 30,
        .baseSpDefense = 59,
        .types = MON_TYPES(TYPE_FAIRY),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 61 : 75,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_COMPOUND_EYES, ABILITY_TINTED_LENS, ABILITY_RUN_AWAY },
    #else
        .abilities = { ABILITY_COMPOUND_EYES, ABILITY_NONE, ABILITY_RUN_AWAY },
    #endif
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Venonat δ"),
        .cryId = CRY_VENONAT,
        .natDexNum = NATIONAL_DEX_VENONAT,
        .categoryName = _("Insect"),
        .height = 10,
        .weight = 300,
        .description = COMPOUND_STRING(
            "Its coat of thin, stiff hair that covers\n"
            "its entire body is said to have evolved\n"
            "for protection. Its large eyes never fail\n"
            "to spot even miniscule prey."),
        .pokemonScale = 360,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = -1,
        .frontPic = gMonFrontPic_Venonat,
        .frontPicSize = MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Venonat,
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        .frontAnimDelay = 20,
        .backPic = gMonBackPic_Venonat,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_VenonatDelta,
        .shinyPalette = gMonShinyPalette_Venonat,
        .iconSprite = gMonIcon_Venonat,
        .iconPalIndex = 2,
        FOOTPRINT(Venonat)
        OVERWORLD(
            sPicTable_Venonat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Venonat,
            gShinyOverworldPalette_Venonat
        )
        .levelUpLearnset = sVenonatDeltaLevelUpLearnset,
        .teachableLearnset = sVenonatTeachableLearnset,
        .eggMoveLearnset = sVenonatEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 31, SPECIES_VENOMOTH_DELTA}),
    },

    [SPECIES_VENOMOTH_DELTA] =
    {
        .baseHP        = 75,
        .baseAttack    = 60,
        .baseDefense   = 55,
        .baseSpeed     = 99,
        .baseSpAttack  = 99,
        .baseSpDefense = 89,
        .types = MON_TYPES(TYPE_FAIRY, TYPE_STEEL),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 158 : 138,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_TINTED_LENS, ABILITY_WONDER_SKIN },
    #else
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_NONE, ABILITY_WONDER_SKIN },
    #endif
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Venomoth δ"),
        .cryId = CRY_VENOMOTH,
        .natDexNum = NATIONAL_DEX_VENOMOTH,
        .categoryName = _("Poison Moth"),
        .height = 15,
        .weight = 125,
        .description = COMPOUND_STRING(
            "Venomoth are nocturnal--they are only\n"
            "active at night. Their favorite prey are\n"
            "insects that gather around streetlights,\n"
            "attracted by the light in the darkness."),
        .pokemonScale = 285,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Venomoth,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Venomoth,
        .frontAnimId = ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = 16,
        .backPic = gMonBackPic_Venomoth,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_VenomothDelta,
        .shinyPalette = gMonShinyPalette_Venomoth,
        .iconSprite = gMonIcon_Venomoth,
        .iconPalIndex = 2,
        FOOTPRINT(Venomoth)
        OVERWORLD(
            sPicTable_Venomoth,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Venomoth,
            gShinyOverworldPalette_Venomoth
        )
        .levelUpLearnset = sVenomothDeltaLevelUpLearnset,
        .teachableLearnset = sVenomothTeachableLearnset,
    },
// END VENONAT FAMILY

// ZUBAT FAMILY
    [SPECIES_GOLBAT_DELTA] =
    {
        .baseHP        = 75,
        .baseAttack    = 95,
        .baseDefense   = 80,
        .baseSpeed     = 110,
        .baseSpAttack  = 70,
        .baseSpDefense = 98,
        .types = MON_TYPES(TYPE_GRASS, TYPE_STEEL),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 159 : 171,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_INFILTRATOR, ABILITY_STRONG_JAW },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Golbat δ"),
        .cryId = CRY_GOLBAT,
        .natDexNum = NATIONAL_DEX_GOLBAT,
        .categoryName = _("Bat"),
        .height = 16,
        .weight = 550,
        .description = COMPOUND_STRING(
            "Its fangs easily puncture even thick\n"
            "animal hide. It loves to feast on the blood\n"
            "of people and Pokémon. It flits about in\n"
            "darkness and strikes from behind."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Golbat,
        .frontPicFemale = gMonFrontPic_GolbatF,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Golbat,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Golbat,
        .backPicFemale = gMonBackPic_GolbatF,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicSizeFemale = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_GolbatDelta,
        .shinyPalette = gMonShinyPalette_Golbat,
        .iconSprite = gMonIcon_Golbat,
        .iconPalIndex = 2,
        FOOTPRINT(Golbat)
        OVERWORLD(
            sPicTable_Golbat,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Golbat,
            gShinyOverworldPalette_Golbat
        )
        .levelUpLearnset = sGolbatDeltaLevelUpLearnset,
        .teachableLearnset = sGolbatTeachableLearnset,
        // .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_CROBAT}),
    },
// END ZUBAT FAMILY

// WEEDLE FAMILY
    [SPECIES_BEEDRILL_DELTA] =
    {
        .baseHP        = 65,
        .baseAttack    = 99,
        .baseDefense   = 81,
        .baseSpeed     = 90,
        .baseSpAttack  = 45,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_FLYING),
        .catchRate = 25,
        .expYield = 248,
    #endif
        .evYield_Attack = 2,
        .evYield_Speed = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_DEFIANT, ABILITY_SNIPER, ABILITY_SHARPNESS },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Beedrill δ"),
        .cryId = CRY_BEEDRILL,
        .natDexNum = NATIONAL_DEX_BEEDRILL,
        .categoryName = _("Poison Bee"),
        .height = 10,
        .weight = 295,
        .description = COMPOUND_STRING(
            "A Beedrill is extremely territorial.\n"
            "For safety reasons, no one should ever\n"
            "approach its nest. If angered, they will\n"
            "attack in a swarm."),
        .pokemonScale = 366,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Beedrill,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Beedrill,
        .frontAnimId = ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = 9,
        .backPic = gMonBackPic_Beedrill,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Beedrill,
        .shinyPalette = gMonShinyPalette_Beedrill,
        .iconSprite = gMonIcon_Beedrill,
        .iconPalIndex = 2,
        FOOTPRINT(Beedrill)
        OVERWORLD(
            sPicTable_Beedrill,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Beedrill,
            gShinyOverworldPalette_Beedrill
        )
        .levelUpLearnset = sBeedrillLevelUpLearnset,
        .teachableLearnset = sBeedrillTeachableLearnset,
        .formSpeciesIdTable = sBeedrillFormSpeciesIdTable,
        .formChangeTable = sBeedrillFormChangeTable,
    },
// END WEEDLE FAMILY
