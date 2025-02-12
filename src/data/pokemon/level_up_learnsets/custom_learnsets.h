#define LEVEL_UP_MOVE(lvl, moveLearned) {.move = moveLearned, .level = lvl}
#define LEVEL_UP_END {.move = LEVEL_UP_MOVE_END, .level = 0}

static const struct LevelUpMove sWurmpleDeltaLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 1, MOVE_TACKLE),
    LEVEL_UP_MOVE( 1, MOVE_TWISTER),
    LEVEL_UP_MOVE( 5, MOVE_WRAP),
    LEVEL_UP_MOVE( 8, MOVE_DRAGON_RAGE),
    LEVEL_UP_MOVE( 5, MOVE_STRUGGLE_BUG),
    LEVEL_UP_MOVE(10, MOVE_AMNESIA),
    LEVEL_UP_MOVE(15, MOVE_SCALE_SHOT),
    LEVEL_UP_MOVE(20, MOVE_MEGA_DRAIN),
    LEVEL_UP_MOVE(25, MOVE_DRAGON_BREATH),
    LEVEL_UP_MOVE(30, MOVE_BUG_BITE),
    LEVEL_UP_MOVE(35, MOVE_TAIL_GLOW),
    LEVEL_UP_MOVE(35, MOVE_U_TURN),
    LEVEL_UP_MOVE(40, MOVE_DRAGON_PULSE),
    LEVEL_UP_END
};

static const struct LevelUpMove sSilcoonDeltaLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 1, MOVE_TACKLE),
    LEVEL_UP_MOVE( 1, MOVE_HARDEN),
    LEVEL_UP_MOVE( 1, MOVE_WRAP),
    LEVEL_UP_MOVE( 5, MOVE_POISON_STING),
    LEVEL_UP_MOVE( 8, MOVE_MUD_SLAP),
    LEVEL_UP_MOVE(10, MOVE_ROCK_THROW),
    LEVEL_UP_MOVE(15, MOVE_CURSE),
    LEVEL_UP_MOVE(20, MOVE_MUD_SHOT),
    LEVEL_UP_MOVE(25, MOVE_RECOVER),
    LEVEL_UP_MOVE(30, MOVE_REFLECT),
    LEVEL_UP_MOVE(30, MOVE_LIGHT_SCREEN),
    LEVEL_UP_MOVE(35, MOVE_BUG_BITE),
    LEVEL_UP_MOVE(40, MOVE_SMACK_DOWN),
    LEVEL_UP_MOVE(44, MOVE_STEALTH_ROCK),
    LEVEL_UP_MOVE(48, MOVE_POWER_SPLIT),
    LEVEL_UP_MOVE(53, MOVE_SHELL_SMASH),
    LEVEL_UP_END
};


static const struct LevelUpMove sDustoxDeltaLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 1, MOVE_TOXIC),
    LEVEL_UP_MOVE( 1, MOVE_FIRE_BLAST),
    LEVEL_UP_MOVE( 1, MOVE_TACKLE),
    LEVEL_UP_MOVE( 1, MOVE_EMBER),
    LEVEL_UP_MOVE( 1, MOVE_SMOG),
    LEVEL_UP_MOVE( 1, MOVE_FLAME_BURST),
    LEVEL_UP_MOVE(12, MOVE_CONFUSION),
    LEVEL_UP_MOVE(15, MOVE_POISON_GAS),
    LEVEL_UP_MOVE(17, MOVE_MOONLIGHT),
    LEVEL_UP_MOVE(20, MOVE_VENOSHOCK),
    LEVEL_UP_MOVE(22, MOVE_SWIFT),
    LEVEL_UP_MOVE(25, MOVE_MYSTICAL_FIRE),
    LEVEL_UP_MOVE(27, MOVE_MOONLIGHT),
    LEVEL_UP_MOVE(30, MOVE_NASTY_PLOT),
    LEVEL_UP_MOVE(32, MOVE_SLUDGE_BOMB),
    LEVEL_UP_MOVE(35, MOVE_BUG_BUZZ),
    LEVEL_UP_MOVE(37, MOVE_FLAMETHROWER),
    LEVEL_UP_MOVE(40, MOVE_QUIVER_DANCE),
    LEVEL_UP_END
};

static const struct LevelUpMove sVenonatDeltaLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 1, MOVE_DOUBLE_HIT),
    LEVEL_UP_MOVE( 1, MOVE_DISABLE),
    LEVEL_UP_MOVE( 4, MOVE_FAIRY_WIND),
    LEVEL_UP_MOVE( 8, MOVE_CHARM),
    LEVEL_UP_MOVE(11, MOVE_CLEAR_SMOG),
    LEVEL_UP_MOVE(13, MOVE_MIMIC),
    LEVEL_UP_MOVE(17, MOVE_COVET),
    LEVEL_UP_MOVE(25, MOVE_LOVELY_KISS),
    LEVEL_UP_MOVE(29, MOVE_DRAINING_KISS),
    LEVEL_UP_MOVE(34, MOVE_SLUDGE),
    LEVEL_UP_MOVE(37, MOVE_MOONBLAST),
    LEVEL_UP_MOVE(41, MOVE_HEALING_WISH),
    LEVEL_UP_MOVE(47, MOVE_GUNK_SHOT),
    LEVEL_UP_END
};

static const struct LevelUpMove sVenomothDeltaLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 0, MOVE_MOONBLAST),
    LEVEL_UP_MOVE( 1, MOVE_TACKLE),
    LEVEL_UP_MOVE( 1, MOVE_CHARM),
    LEVEL_UP_MOVE( 1, MOVE_DISABLE),
    LEVEL_UP_MOVE( 1, MOVE_AMNESIA),
    LEVEL_UP_MOVE(11, MOVE_FAIRY_WIND),
    LEVEL_UP_MOVE(13, MOVE_MIMIC),
    LEVEL_UP_MOVE(17, MOVE_COVET),
    LEVEL_UP_MOVE(23, MOVE_LOVELY_KISS),
    LEVEL_UP_MOVE(25, MOVE_DRAINING_KISS),
    LEVEL_UP_MOVE(29, MOVE_QUIVER_DANCE),
    LEVEL_UP_MOVE(37, MOVE_STEEL_WING),
    LEVEL_UP_MOVE(41, MOVE_MOONLIGHT),
    LEVEL_UP_MOVE(47, MOVE_TACHYON_CUTTER),
    LEVEL_UP_MOVE(55, MOVE_NATURES_MADNESS),
    LEVEL_UP_END
};

static const struct LevelUpMove sWhismurDeltaLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 1, MOVE_ACID),
    LEVEL_UP_MOVE( 1, MOVE_POUND),
    LEVEL_UP_MOVE( 5, MOVE_ECHOED_VOICE),
    LEVEL_UP_MOVE(10, MOVE_HOWL),
    LEVEL_UP_MOVE(14, MOVE_SLUDGE),
    LEVEL_UP_MOVE(18, MOVE_MUD_SLAP),
    LEVEL_UP_MOVE(21, MOVE_CLEAR_SMOG),
    LEVEL_UP_MOVE(25, MOVE_FLING),
    LEVEL_UP_MOVE(30, MOVE_UPROAR),
    LEVEL_UP_MOVE(35, MOVE_CROSS_POISON),
    LEVEL_UP_MOVE(40, MOVE_TOXIC),
    LEVEL_UP_MOVE(45, MOVE_GUNK_SHOT),
    LEVEL_UP_END
};

static const struct LevelUpMove sGolbatDeltaLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 1, MOVE_SCREECH),
    LEVEL_UP_MOVE( 1, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE( 6, MOVE_ABSORB),
    LEVEL_UP_MOVE(10, MOVE_BITE),
    LEVEL_UP_MOVE(15, MOVE_VINE_WHIP),
    LEVEL_UP_MOVE(20, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(27, MOVE_IRON_HEAD),
    LEVEL_UP_MOVE(34, MOVE_CRUNCH),
    LEVEL_UP_MOVE(41, MOVE_LEAF_BLADE),
    LEVEL_UP_MOVE(48, MOVE_FIRE_FANG),
    LEVEL_UP_MOVE(55, MOVE_SPIKES),
    LEVEL_UP_MOVE(62, MOVE_DOUBLE_IRON_BASH),
    LEVEL_UP_MOVE(69, MOVE_POWER_WHIP),
    LEVEL_UP_END
};

static const struct LevelUpMove sShedinjaDeltaLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 1, MOVE_CHARGE),
    LEVEL_UP_MOVE( 1, MOVE_REFLECT),
    LEVEL_UP_MOVE( 1, MOVE_METAL_CLAW),
    LEVEL_UP_MOVE( 1, MOVE_DIG),
    LEVEL_UP_MOVE( 1, MOVE_SWIFT),
    LEVEL_UP_MOVE( 1, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE( 1, MOVE_NUZZLE),
    LEVEL_UP_MOVE( 9, MOVE_SHOCK_WAVE),
    LEVEL_UP_MOVE(15, MOVE_FALSE_SWIPE),
    LEVEL_UP_MOVE(23, MOVE_SPARK),
    LEVEL_UP_MOVE(29, MOVE_COVET),
    LEVEL_UP_MOVE(36, MOVE_DAZZLING_GLEAM),
    LEVEL_UP_MOVE(43, MOVE_HEART_SWAP),
    LEVEL_UP_MOVE(50, MOVE_DISCHARGE),
    LEVEL_UP_MOVE(57, MOVE_EERIE_IMPULSE),
    LEVEL_UP_MOVE(64, MOVE_PARABOLIC_CHARGE),
    LEVEL_UP_END
};

static const struct LevelUpMove sSandslashDeltaLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 1, MOVE_COMET_PUNCH),
    LEVEL_UP_MOVE( 1, MOVE_ICE_PUNCH),
    LEVEL_UP_MOVE( 1, MOVE_KNOCK_OFF),
    LEVEL_UP_MOVE( 1, MOVE_BULLET_PUNCH),
    LEVEL_UP_MOVE( 1, MOVE_ARM_THRUST),
    LEVEL_UP_MOVE( 1, MOVE_DETECT),
    LEVEL_UP_MOVE( 9, MOVE_ROLLOUT),
    LEVEL_UP_MOVE(12, MOVE_FURY_CUTTER),
    LEVEL_UP_MOVE(15, MOVE_DRAIN_PUNCH),
    LEVEL_UP_MOVE(18, MOVE_BODY_PRESS),
    LEVEL_UP_MOVE(21, MOVE_MEGA_PUNCH),
    LEVEL_UP_MOVE(26, MOVE_FEINT),
    LEVEL_UP_MOVE(31, MOVE_POWER_UP_PUNCH),
    LEVEL_UP_MOVE(36, MOVE_HEADLONG_RUSH),
    LEVEL_UP_MOVE(41, MOVE_QUICK_GUARD),
    LEVEL_UP_MOVE(46, MOVE_SUCKER_PUNCH),
    LEVEL_UP_MOVE(51, MOVE_SWORDS_DANCE),
    LEVEL_UP_MOVE(56, MOVE_HAMMER_ARM),
    LEVEL_UP_END
};

static const struct LevelUpMove sBeedrillDeltaLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 1, MOVE_MACH_PUNCH),
    LEVEL_UP_MOVE( 1, MOVE_SCRATCH),
    LEVEL_UP_MOVE( 1, MOVE_POISON_STING),
    LEVEL_UP_MOVE( 1, MOVE_STRING_SHOT),
    LEVEL_UP_MOVE( 1, MOVE_DRAGON_DANCE),
    LEVEL_UP_MOVE(11, MOVE_AERIAL_ACE),
    LEVEL_UP_MOVE(14, MOVE_POISON_STING),
    LEVEL_UP_MOVE(17, MOVE_AGILITY),
    LEVEL_UP_MOVE(20, MOVE_VENOSHOCK),
    LEVEL_UP_MOVE(23, MOVE_BRICK_BREAK),
    LEVEL_UP_MOVE(26, MOVE_DETECT),
    LEVEL_UP_MOVE(29, MOVE_NIGHT_SLASH),
    LEVEL_UP_MOVE(32, MOVE_SACRED_SWORD),
    LEVEL_UP_MOVE(35, MOVE_CROSS_POISON),
    LEVEL_UP_MOVE(38, MOVE_SUCKER_PUNCH),
    LEVEL_UP_MOVE(41, MOVE_ENDEAVOR),
    LEVEL_UP_MOVE(44, MOVE_CLOSE_COMBAT),
    LEVEL_UP_END
};

static const struct LevelUpMove sVoltrexLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 1, MOVE_SCRATCH),
    LEVEL_UP_MOVE( 1, MOVE_GROWL),
    LEVEL_UP_MOVE( 1, MOVE_THUNDERSHOCK),
    LEVEL_UP_MOVE( 5, MOVE_HEADBUTT),
    LEVEL_UP_MOVE( 8, MOVE_BITE),
    LEVEL_UP_MOVE(11, MOVE_SPARK),
    LEVEL_UP_MOVE(14, MOVE_ROAR),
    LEVEL_UP_MOVE(17, MOVE_ROCK_SMASH),
    LEVEL_UP_MOVE(21, MOVE_VOLT_SWITCH),
    LEVEL_UP_MOVE(25, MOVE_ROCK_TOMB),
    LEVEL_UP_MOVE(28, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(31, MOVE_SWAGGER),
    LEVEL_UP_MOVE(35, MOVE_THUNDER_FANG),
    LEVEL_UP_MOVE(39, MOVE_DISCHARGE),
    LEVEL_UP_MOVE(45, MOVE_WILD_CHARGE),
    LEVEL_UP_MOVE(50, MOVE_ZEN_HEADBUTT),
    LEVEL_UP_MOVE(54, MOVE_VOLT_TACKLE),
    LEVEL_UP_END
};

static const struct LevelUpMove sElectrosaurLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 0, MOVE_CRUNCH),
    LEVEL_UP_MOVE( 1, MOVE_CRUNCH),
    LEVEL_UP_MOVE( 1, MOVE_SCRATCH),
    LEVEL_UP_MOVE( 1, MOVE_GROWL),
    LEVEL_UP_MOVE( 1, MOVE_THUNDERSHOCK),
    LEVEL_UP_MOVE( 1, MOVE_HEADBUTT),
    LEVEL_UP_MOVE( 8, MOVE_BITE),
    LEVEL_UP_MOVE(12, MOVE_SPARK),
    LEVEL_UP_MOVE(16, MOVE_ROAR),
    LEVEL_UP_MOVE(20, MOVE_ROCK_SMASH),
    LEVEL_UP_MOVE(24, MOVE_VOLT_SWITCH),
    LEVEL_UP_MOVE(29, MOVE_ROCK_TOMB),
    LEVEL_UP_MOVE(33, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(38, MOVE_SWAGGER),
    LEVEL_UP_MOVE(42, MOVE_THUNDER_FANG),
    LEVEL_UP_MOVE(47, MOVE_DISCHARGE),
    LEVEL_UP_MOVE(51, MOVE_WILD_CHARGE),
    LEVEL_UP_MOVE(56, MOVE_ZEN_HEADBUTT),
    LEVEL_UP_MOVE(60, MOVE_VOLT_TACKLE),
};

static const struct LevelUpMove sTricerachopLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 1, MOVE_PECK),
    LEVEL_UP_MOVE( 1, MOVE_LEER),
    LEVEL_UP_MOVE( 5, MOVE_ROCK_SMASH),
    LEVEL_UP_MOVE( 8, MOVE_BITE),
    LEVEL_UP_MOVE(11, MOVE_ROCK_THROW),
    LEVEL_UP_MOVE(14, MOVE_BULK_UP),
    LEVEL_UP_MOVE(17, MOVE_DOUBLE_KICK),
    LEVEL_UP_MOVE(21, MOVE_BULLDOZE),
    LEVEL_UP_MOVE(25, MOVE_THRASH),
    LEVEL_UP_MOVE(28, MOVE_STONE_EDGE),
    LEVEL_UP_MOVE(31, MOVE_SWAGGER),
    LEVEL_UP_MOVE(35, MOVE_HORN_LEECH),
    LEVEL_UP_MOVE(39, MOVE_JAGGED_BLOW),
    LEVEL_UP_MOVE(45, MOVE_CLOSE_COMBAT),
    LEVEL_UP_MOVE(50, MOVE_DRILL_RUN),
    LEVEL_UP_MOVE(54, MOVE_HEAD_SMASH),
    LEVEL_UP_END
};

static const struct LevelUpMove sTomahtopsLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 0, MOVE_DOUBLE_EDGE),
    LEVEL_UP_MOVE( 1, MOVE_PECK),
    LEVEL_UP_MOVE( 1, MOVE_LEER),
    LEVEL_UP_MOVE( 1, MOVE_ROCK_SMASH),
    LEVEL_UP_MOVE( 1, MOVE_BITE),
    LEVEL_UP_MOVE( 1, MOVE_FIRE_FANG),
    LEVEL_UP_MOVE(16, MOVE_ROCK_THROW),
    LEVEL_UP_MOVE(19, MOVE_BULK_UP),
    LEVEL_UP_MOVE(22, MOVE_DOUBLE_KICK),
    LEVEL_UP_MOVE(26, MOVE_BULLDOZE),
    LEVEL_UP_MOVE(30, MOVE_THRASH),
    LEVEL_UP_MOVE(33, MOVE_STONE_EDGE),
    LEVEL_UP_MOVE(36, MOVE_SWAGGER),
    LEVEL_UP_MOVE(40, MOVE_HORN_LEECH),
    LEVEL_UP_MOVE(44, MOVE_JAGGED_BLOW),
    LEVEL_UP_MOVE(50, MOVE_CLOSE_COMBAT),
    LEVEL_UP_MOVE(55, MOVE_DRILL_RUN),
    LEVEL_UP_MOVE(59, MOVE_HEAD_SMASH),
    LEVEL_UP_END
};

static const struct LevelUpMove sLaironDeltaLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 1, MOVE_TACKLE),
    LEVEL_UP_MOVE( 1, MOVE_HARDEN),
    LEVEL_UP_MOVE( 1, MOVE_ROCK_SLIDE),
    LEVEL_UP_MOVE( 1, MOVE_ROAR),
    LEVEL_UP_MOVE(12, MOVE_ICE_SHARD),
    LEVEL_UP_MOVE(16, MOVE_CRUNCH),
    LEVEL_UP_MOVE(20, MOVE_POWDER_SNOW),
    LEVEL_UP_MOVE(24, MOVE_SHARPEN),
    LEVEL_UP_MOVE(28, MOVE_ACCELEROCK),
    LEVEL_UP_MOVE(35, MOVE_CURSE),
    LEVEL_UP_MOVE(40, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(46, MOVE_ICE_FANG),
    LEVEL_UP_MOVE(52, MOVE_JAGGED_BLOW),
    LEVEL_UP_MOVE(58, MOVE_BULLDOZE),
    LEVEL_UP_MOVE(64, MOVE_HEAD_SMASH),
    LEVEL_UP_MOVE(70, MOVE_DOUBLE_EDGE),
    LEVEL_UP_MOVE(76, MOVE_MOUNTAIN_GALE),
    LEVEL_UP_END
};

static const struct LevelUpMove sFearowDeltaLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 1, MOVE_PECK),
    LEVEL_UP_MOVE( 1, MOVE_GROWL),
    LEVEL_UP_MOVE( 1, MOVE_LEER),
    LEVEL_UP_MOVE( 8, MOVE_LEER),
    LEVEL_UP_MOVE(11, MOVE_FURY_ATTACK),
    LEVEL_UP_MOVE(15, MOVE_KNOCK_OFF),
    LEVEL_UP_MOVE(18, MOVE_DUAL_WINGBEAT),
    LEVEL_UP_MOVE(23, MOVE_SHADOW_SNEAK),
    LEVEL_UP_MOVE(27, MOVE_FALSE_SURRENDER),
    LEVEL_UP_MOVE(32, MOVE_AGILITY),
    LEVEL_UP_MOVE(36, MOVE_ROOST),
    LEVEL_UP_MOVE(43, MOVE_DRILL_PECK),
    LEVEL_UP_MOVE(48, MOVE_WICKED_BLOW),
    LEVEL_UP_MOVE(51, MOVE_BRAVE_BIRD),
    LEVEL_UP_END
};

static const struct LevelUpMove sPolarisLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 1, MOVE_CONFUSION),
    LEVEL_UP_MOVE( 1, MOVE_HEAL_BLOCK),
    LEVEL_UP_MOVE( 1, MOVE_PECK),
    LEVEL_UP_MOVE( 5, MOVE_HIDDEN_POWER),
    LEVEL_UP_MOVE( 8, MOVE_BODY_SLAM),
    LEVEL_UP_MOVE(10, MOVE_ROCK_TOMB),
    LEVEL_UP_MOVE(15, MOVE_CALM_MIND),
    LEVEL_UP_MOVE(20, MOVE_PSYBEAM),
    LEVEL_UP_MOVE(25, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(30, MOVE_REFLECT),
    LEVEL_UP_MOVE(30, MOVE_LIGHT_SCREEN),
    LEVEL_UP_MOVE(35, MOVE_STORED_POWER),
    LEVEL_UP_MOVE(40, MOVE_MYSTICAL_POWER),
    LEVEL_UP_MOVE(44, MOVE_POWER_GEM),
    LEVEL_UP_MOVE(48, MOVE_EXTRASENSORY),
    LEVEL_UP_MOVE(53, MOVE_FUTURE_SIGHT),
    LEVEL_UP_END
};

static const struct LevelUpMove sIgneousaurLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 1, MOVE_BITE),
    LEVEL_UP_MOVE( 1, MOVE_EMBER),
    LEVEL_UP_MOVE( 1, MOVE_HOWL),
    LEVEL_UP_MOVE( 5, MOVE_ACCELEROCK),
    LEVEL_UP_MOVE(10, MOVE_FIRE_FANG),
    LEVEL_UP_MOVE(15, MOVE_MEAN_LOOK),
    LEVEL_UP_MOVE(20, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(25, MOVE_SWORDS_DANCE),
    LEVEL_UP_MOVE(30, MOVE_CRUNCH),
    LEVEL_UP_MOVE(35, MOVE_FIRE_LASH),
    LEVEL_UP_MOVE(40, MOVE_JAGGED_BLOW),
    LEVEL_UP_MOVE(45, MOVE_EXTREME_SPEED),
    LEVEL_UP_MOVE(50, MOVE_STONE_EDGE),
    LEVEL_UP_MOVE(55, MOVE_HEAD_SMASH),
    LEVEL_UP_MOVE(60, MOVE_RAGING_FURY),
    LEVEL_UP_END
};

static const struct LevelUpMove sTrainingTyrogueLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 1, MOVE_TACKLE),
    LEVEL_UP_MOVE( 1, MOVE_LOW_KICK),
    LEVEL_UP_END
};

static const struct LevelUpMove sTherazorLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 1, MOVE_BITE),
    LEVEL_UP_MOVE( 1, MOVE_AERIAL_ACE),
    LEVEL_UP_MOVE( 1, MOVE_ROCK_SMASH),
    LEVEL_UP_MOVE( 1, MOVE_HOWL),
    LEVEL_UP_MOVE( 5, MOVE_PECK),
    LEVEL_UP_MOVE(10, MOVE_BODY_SLAM),
    LEVEL_UP_MOVE(14, MOVE_ROCK_BLAST),
    LEVEL_UP_MOVE(19, MOVE_METAL_CLAW),
    LEVEL_UP_MOVE(23, MOVE_SLASH),
    LEVEL_UP_MOVE(28, MOVE_HONE_CLAWS),
    LEVEL_UP_MOVE(33, MOVE_POWER_GEM),
    LEVEL_UP_MOVE(37, MOVE_SCISSOR_CUT),
    LEVEL_UP_MOVE(41, MOVE_JAGGED_BLOW),
    LEVEL_UP_MOVE(46, MOVE_WIDE_GUARD),
    LEVEL_UP_MOVE(51, MOVE_DOUBLE_EDGE),
    LEVEL_UP_MOVE(56, MOVE_SANDSTORM),
    LEVEL_UP_MOVE(61, MOVE_FACADE),
    LEVEL_UP_MOVE(66, MOVE_MIGHTY_CLEAVE),
    LEVEL_UP_END
};

static const struct LevelUpMove sClefableDeltaLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 1, MOVE_POUND),
    LEVEL_UP_MOVE( 1, MOVE_THUNDER_PUNCH),
    LEVEL_UP_MOVE( 1, MOVE_SPIRIT_BREAK),
    LEVEL_UP_MOVE( 1, MOVE_ICY_WIND),
    LEVEL_UP_MOVE( 1, MOVE_EERIE_IMPULSE),
    LEVEL_UP_MOVE( 1, MOVE_SPLASH),
    LEVEL_UP_MOVE( 6, MOVE_SWEET_KISS),
    LEVEL_UP_MOVE(12, MOVE_THUNDER_WAVE),
    LEVEL_UP_MOVE(17, MOVE_SING),
    LEVEL_UP_MOVE(23, MOVE_MOONLIGHT),
    LEVEL_UP_MOVE(28, MOVE_SHOCK_WAVE),
    LEVEL_UP_MOVE(34, MOVE_COSMIC_POWER),
    LEVEL_UP_MOVE(39, MOVE_DISCHARGE),
    LEVEL_UP_MOVE(44, MOVE_HEALING_WISH),
    LEVEL_UP_MOVE(49, MOVE_HEAD_CHARGE),
    LEVEL_UP_MOVE(53, MOVE_SIGNAL_BEAM),
    LEVEL_UP_MOVE(58, MOVE_EXTRASENSORY),
    LEVEL_UP_MOVE(63, MOVE_ALLURING_VOICE),
    LEVEL_UP_MOVE(67, MOVE_WILD_CHARGE),
    LEVEL_UP_MOVE(72, MOVE_MOONBLAST),
    LEVEL_UP_MOVE(76, MOVE_PARABOLIC_CHARGE),
    LEVEL_UP_MOVE(80, MOVE_DRACO_METEOR),
    LEVEL_UP_END
};

static const struct LevelUpMove sMetangDeltaLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 1, MOVE_TACKLE),
    LEVEL_UP_MOVE( 1, MOVE_BULLET_PUNCH),
    LEVEL_UP_MOVE( 1, MOVE_HONE_CLAWS),
    LEVEL_UP_MOVE( 4, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(10, MOVE_FAKE_OUT),
    LEVEL_UP_MOVE(16, MOVE_MAGNET_RISE),
    LEVEL_UP_MOVE(22, MOVE_FLASH_CANNON),
    LEVEL_UP_MOVE(26, MOVE_METAL_CLAW),
    LEVEL_UP_MOVE(30, MOVE_SPIRIT_BREAK),
    LEVEL_UP_MOVE(34, MOVE_IRON_HEAD),
    LEVEL_UP_MOVE(38, MOVE_CRAFTY_SHIELD),
    LEVEL_UP_MOVE(42, MOVE_PLAY_ROUGH),
    LEVEL_UP_MOVE(48, MOVE_METEOR_MASH),
    LEVEL_UP_MOVE(54, MOVE_IRON_DEFENSE),
    LEVEL_UP_MOVE(60, MOVE_SUCKER_PUNCH),
    LEVEL_UP_MOVE(66, MOVE_CURSE),
    LEVEL_UP_MOVE(72, MOVE_HYPER_BEAM),
    LEVEL_UP_END
};

static const struct LevelUpMove sRhyhornDeltaLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 1, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE( 1, MOVE_CHARGE),
    LEVEL_UP_MOVE( 5, MOVE_MUD_SLAP),
    LEVEL_UP_MOVE(10, MOVE_BULLDOZE),
    LEVEL_UP_MOVE(15, MOVE_HORN_ATTACK),
    LEVEL_UP_MOVE(20, MOVE_MUD_BOMB),
    LEVEL_UP_MOVE(25, MOVE_SPARK),
    LEVEL_UP_MOVE(30, MOVE_SHOCK_WAVE),
    LEVEL_UP_MOVE(35, MOVE_DRILL_RUN),
    LEVEL_UP_MOVE(40, MOVE_WILD_CHARGE),
    LEVEL_UP_MOVE(45, MOVE_EARTH_POWER),
    LEVEL_UP_MOVE(50, MOVE_DISCHARGE),
    LEVEL_UP_MOVE(55, MOVE_EARTHQUAKE),
    LEVEL_UP_MOVE(60, MOVE_ZAP_CANNON),
    LEVEL_UP_MOVE(65, MOVE_HORN_DRILL),
    LEVEL_UP_END
};

static const struct LevelUpMove sSlowpokeDeltaLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 1, MOVE_TACKLE),
    LEVEL_UP_MOVE( 1, MOVE_CURSE),
    LEVEL_UP_MOVE( 3, MOVE_GROWL),
    LEVEL_UP_MOVE( 6, MOVE_WATER_GUN),
    LEVEL_UP_MOVE( 9, MOVE_BITE),
    LEVEL_UP_MOVE(12, MOVE_FAKE_TEARS),
    LEVEL_UP_MOVE(15, MOVE_CLEAR_SMOG),
    LEVEL_UP_MOVE(18, MOVE_WATER_PULSE),
    LEVEL_UP_MOVE(21, MOVE_HEADBUTT),
    LEVEL_UP_MOVE(24, MOVE_JAW_LOCK),
    LEVEL_UP_MOVE(27, MOVE_AMNESIA),
    LEVEL_UP_MOVE(30, MOVE_SURF),
    LEVEL_UP_MOVE(33, MOVE_SLACK_OFF),
    LEVEL_UP_MOVE(36, MOVE_FOUL_PLAY),
    LEVEL_UP_MOVE(39, MOVE_EMBARGO),
    LEVEL_UP_MOVE(42, MOVE_RAIN_DANCE),
    LEVEL_UP_MOVE(45, MOVE_MEMENTO),
    LEVEL_UP_MOVE(49, MOVE_HEAL_PULSE),
    LEVEL_UP_MOVE(54, MOVE_DARK_PULSE),
    LEVEL_UP_END
};

static const struct LevelUpMove sLunatoneDeltaLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 1, MOVE_MOONBLAST),
    LEVEL_UP_MOVE( 1, MOVE_MOONLIGHT),
    LEVEL_UP_MOVE( 1, MOVE_TACKLE),
    LEVEL_UP_MOVE( 1, MOVE_HARDEN),
    LEVEL_UP_MOVE( 1, MOVE_CONFUSION),
    LEVEL_UP_MOVE( 1, MOVE_ROCK_THROW),
    LEVEL_UP_MOVE( 5, MOVE_HYPNOSIS),
    LEVEL_UP_MOVE(10, MOVE_CONFUSE_RAY),
    LEVEL_UP_MOVE(15, MOVE_ROCK_SLIDE),
    LEVEL_UP_MOVE(20, MOVE_HEX),
    LEVEL_UP_MOVE(25, MOVE_COSMIC_POWER),
    LEVEL_UP_MOVE(30, MOVE_SHADOW_BALL),
    LEVEL_UP_MOVE(35, MOVE_POWER_GEM),
    LEVEL_UP_MOVE(40, MOVE_OMINOUS_WIND),
    LEVEL_UP_MOVE(45, MOVE_MAGIC_ROOM),
    LEVEL_UP_MOVE(50, MOVE_NIGHT_DAZE),
    LEVEL_UP_MOVE(56, MOVE_MOONGEIST_BEAM),
    LEVEL_UP_END
};

static const struct LevelUpMove sSolrockDeltaLevelUpLearnset[] = {
    LEVEL_UP_MOVE( 1, MOVE_FLARE_BLITZ),
    LEVEL_UP_MOVE( 1, MOVE_MORNING_SUN),
    LEVEL_UP_MOVE( 1, MOVE_TACKLE),
    LEVEL_UP_MOVE( 1, MOVE_HARDEN),
    LEVEL_UP_MOVE( 1, MOVE_CONFUSION),
    LEVEL_UP_MOVE( 1, MOVE_ROCK_THROW),
    LEVEL_UP_MOVE( 5, MOVE_HYPNOSIS),
    LEVEL_UP_MOVE(10, MOVE_WILL_O_WISP),
    LEVEL_UP_MOVE(15, MOVE_ROCK_SLIDE),
    LEVEL_UP_MOVE(20, MOVE_FLAME_WHEEL),
    LEVEL_UP_MOVE(25, MOVE_COSMIC_POWER),
    LEVEL_UP_MOVE(30, MOVE_JAGGED_BLOW),
    LEVEL_UP_MOVE(35, MOVE_FIRE_BLAST),
    LEVEL_UP_MOVE(40, MOVE_WONDER_ROOM),
    LEVEL_UP_MOVE(45, MOVE_STONE_EDGE),
    LEVEL_UP_MOVE(50, MOVE_HEAD_SMASH),
    LEVEL_UP_MOVE(56, MOVE_SOLAR_BLADE),
    LEVEL_UP_END
};