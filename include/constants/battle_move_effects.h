#ifndef GUARD_CONSTANTS_BATTLE_MOVE_EFFECTS_H
#define GUARD_CONSTANTS_BATTLE_MOVE_EFFECTS_H

enum {
    EFFECT_PLACEHOLDER,
    EFFECT_HIT,
    EFFECT_SLEEP,
    EFFECT_ABSORB,
    EFFECT_EXPLOSION,
    EFFECT_DREAM_EATER,
    EFFECT_MIRROR_MOVE,
    EFFECT_ATTACK_UP,
    EFFECT_DEFENSE_UP,
    EFFECT_SPEED_UP,
    EFFECT_SPECIAL_ATTACK_UP,
    EFFECT_SPECIAL_DEFENSE_UP,
    EFFECT_ACCURACY_UP,
    EFFECT_EVASION_UP,
    EFFECT_SPECIAL_ATTACK_UP_3,
    EFFECT_ATTACK_DOWN,
    EFFECT_DEFENSE_DOWN,
    EFFECT_SPEED_DOWN,
    EFFECT_SPECIAL_ATTACK_DOWN,
    EFFECT_SPECIAL_DEFENSE_DOWN,
    EFFECT_ACCURACY_DOWN,
    EFFECT_EVASION_DOWN,
    EFFECT_HAZE,
    EFFECT_BIDE,
    EFFECT_ROAR,
    EFFECT_MULTI_HIT,
    EFFECT_CONVERSION,
    EFFECT_RESTORE_HP,
    EFFECT_TOXIC,
    EFFECT_LIGHT_SCREEN,
    EFFECT_REST,
    EFFECT_OHKO,
    EFFECT_FUSION_COMBO,
    EFFECT_SUPER_FANG,
    EFFECT_FIXED_DAMAGE_ARG,
    EFFECT_HEAL_BLOCK,
    EFFECT_RECOIL_IF_MISS,
    EFFECT_MIST,
    EFFECT_FOCUS_ENERGY,
    EFFECT_CONFUSE,
    EFFECT_ATTACK_UP_2,
    EFFECT_DEFENSE_UP_2,
    EFFECT_SPEED_UP_2,
    EFFECT_SPECIAL_ATTACK_UP_2,
    EFFECT_SPECIAL_DEFENSE_UP_2,
    EFFECT_ACCURACY_UP_2,
    EFFECT_EVASION_UP_2,
    EFFECT_TRANSFORM,
    EFFECT_ATTACK_DOWN_2,
    EFFECT_DEFENSE_DOWN_2,
    EFFECT_SPEED_DOWN_2,
    EFFECT_SPECIAL_ATTACK_DOWN_2,
    EFFECT_SPECIAL_DEFENSE_DOWN_2,
    EFFECT_ACCURACY_DOWN_2,
    EFFECT_EVASION_DOWN_2,
    EFFECT_REFLECT,
    EFFECT_POISON,
    EFFECT_PARALYZE,
    EFFECT_TWO_TURNS_ATTACK,
    EFFECT_SUBSTITUTE,
    EFFECT_RAGE,
    EFFECT_MIMIC,
    EFFECT_METRONOME,
    EFFECT_LEECH_SEED,
    EFFECT_DO_NOTHING,
    EFFECT_DISABLE,
    EFFECT_LEVEL_DAMAGE,
    EFFECT_PSYWAVE,
    EFFECT_COUNTER,
    EFFECT_ENCORE,
    EFFECT_PAIN_SPLIT,
    EFFECT_SNORE,
    EFFECT_CONVERSION_2,
    EFFECT_LOCK_ON,
    EFFECT_SKETCH,
    EFFECT_SLEEP_TALK,
    EFFECT_DESTINY_BOND,
    EFFECT_FLAIL,
    EFFECT_SPITE,
    EFFECT_FALSE_SWIPE,
    EFFECT_HEAL_BELL,
    EFFECT_TRIPLE_KICK,
    EFFECT_MEAN_LOOK,
    EFFECT_NIGHTMARE,
    EFFECT_MINIMIZE,
    EFFECT_CURSE,
    EFFECT_HEALING_WISH,
    EFFECT_PROTECT,
    EFFECT_SPIKES,
    EFFECT_FORESIGHT,
    EFFECT_PERISH_SONG,
    EFFECT_SANDSTORM,
    EFFECT_ENDURE,
    EFFECT_ROLLOUT,
    EFFECT_SWAGGER,
    EFFECT_FURY_CUTTER,
    EFFECT_ATTRACT,
    EFFECT_RETURN,
    EFFECT_PRESENT,
    EFFECT_FRUSTRATION,
    EFFECT_SAFEGUARD,
    EFFECT_MAGNITUDE,
    EFFECT_BATON_PASS,
    EFFECT_PURSUIT,
    EFFECT_CAPTIVATE,
    EFFECT_MORNING_SUN,
    EFFECT_SYNTHESIS,
    EFFECT_MOONLIGHT,
    EFFECT_HIDDEN_POWER,
    EFFECT_RAIN_DANCE,
    // EFFECT_DISASTER_SURGE,
    EFFECT_SUNNY_DAY,
    EFFECT_FELL_STINGER,
    EFFECT_BELLY_DRUM,
    EFFECT_PSYCH_UP,
    EFFECT_MIRROR_COAT,
    EFFECT_EARTHQUAKE,
    EFFECT_FUTURE_SIGHT,
    EFFECT_SOLAR_BEAM,
    EFFECT_THUNDER,
    EFFECT_TELEPORT,
    EFFECT_BEAT_UP,
    EFFECT_SEMI_INVULNERABLE,
    EFFECT_DEFENSE_CURL,
    EFFECT_SOFTBOILED, // differences vs Recover - can be used outside of battle to restore HP
    EFFECT_FIRST_TURN_ONLY,
    EFFECT_UPROAR,
    EFFECT_STOCKPILE,
    EFFECT_SPIT_UP,
    EFFECT_SWALLOW,
    EFFECT_WORRY_SEED,
    EFFECT_HAIL,
    EFFECT_TORMENT,
    EFFECT_FLATTER,
    EFFECT_WILL_O_WISP,
    EFFECT_MEMENTO,
    EFFECT_FACADE,
    EFFECT_FOCUS_PUNCH,
    EFFECT_DOUBLE_POWER_ON_ARG_STATUS,
    EFFECT_FOLLOW_ME,
    EFFECT_NATURE_POWER,
    EFFECT_CHARGE,
    EFFECT_TAUNT,
    EFFECT_HELPING_HAND,
    EFFECT_TRICK,
    EFFECT_ROLE_PLAY,
    EFFECT_WISH,
    EFFECT_ASSIST,
    EFFECT_INGRAIN,
    EFFECT_MAGIC_COAT,
    EFFECT_RECYCLE,
    EFFECT_REVENGE,
    EFFECT_BRICK_BREAK,
    EFFECT_YAWN,
    EFFECT_KNOCK_OFF,
    EFFECT_ENDEAVOR,
    EFFECT_ERUPTION,
    EFFECT_SKILL_SWAP,
    EFFECT_IMPRISON,
    EFFECT_REFRESH,
    EFFECT_GRUDGE,
    EFFECT_SNATCH,
    EFFECT_LOW_KICK,
    EFFECT_HIT_ESCAPE,
    EFFECT_MUD_SPORT,
    EFFECT_WEATHER_BALL,
    EFFECT_TICKLE,
    EFFECT_COSMIC_POWER,
    EFFECT_BULK_UP,
    EFFECT_WATER_SPORT,
    EFFECT_CALM_MIND,
    EFFECT_DRAGON_DANCE,
    EFFECT_CAMOUFLAGE,
    EFFECT_PLEDGE,
    EFFECT_FLING,
    EFFECT_NATURAL_GIFT,
    EFFECT_VARY_POWER_BASED_ON_HP,
    EFFECT_ASSURANCE,
    EFFECT_TRUMP_CARD,
    EFFECT_ACROBATICS,
    EFFECT_HEAT_CRASH,
    EFFECT_PUNISHMENT,
    EFFECT_STORED_POWER,
    EFFECT_ELECTRO_BALL,
    EFFECT_GYRO_BALL,
    EFFECT_ECHOED_VOICE,
    EFFECT_PAYBACK,
    EFFECT_ROUND,
    EFFECT_BRINE,
    EFFECT_RETALIATE,
    EFFECT_FOUL_PLAY,
    EFFECT_PSYSHOCK,
    EFFECT_ROOST,
    EFFECT_GRAVITY,
    EFFECT_MIRACLE_EYE,
    EFFECT_TAILWIND,
    EFFECT_EMBARGO,
    EFFECT_AQUA_RING,
    EFFECT_TRICK_ROOM,
    EFFECT_WONDER_ROOM,
    EFFECT_MAGIC_ROOM,
    EFFECT_MAGNET_RISE,
    EFFECT_TOXIC_SPIKES,
    EFFECT_GASTRO_ACID,
    EFFECT_STEALTH_ROCK,
    EFFECT_TELEKINESIS,
    EFFECT_POWER_SWAP,
    EFFECT_GUARD_SWAP,
    EFFECT_HEART_SWAP,
    EFFECT_POWER_SPLIT,
    EFFECT_GUARD_SPLIT,
    EFFECT_STICKY_WEB,
    EFFECT_METAL_BURST,
    EFFECT_LUCKY_CHANT,
    EFFECT_SUCKER_PUNCH,
    EFFECT_SIMPLE_BEAM,
    EFFECT_ENTRAINMENT,
    EFFECT_HEAL_PULSE,
    EFFECT_QUASH,
    EFFECT_ION_DELUGE,
    EFFECT_SUPER_EFFECTIVE_ON_ARG,
    EFFECT_TOPSY_TURVY,
    EFFECT_MISTY_TERRAIN,
    EFFECT_GRASSY_TERRAIN,
    EFFECT_ELECTRIC_TERRAIN,
    EFFECT_PSYCHIC_TERRAIN,
    EFFECT_ATTACK_ACCURACY_UP,
    EFFECT_ATTACK_SPATK_UP,
    EFFECT_TWO_TYPED_MOVE,
    EFFECT_ME_FIRST,
    EFFECT_QUIVER_DANCE,
    EFFECT_COIL,
    EFFECT_ELECTRIFY,
    EFFECT_REFLECT_TYPE,
    EFFECT_SOAK,
    EFFECT_GROWTH,
    EFFECT_LAST_RESORT,
    EFFECT_SHELL_SMASH,
    EFFECT_SHIFT_GEAR,
    EFFECT_DEFENSE_UP_3,
    EFFECT_NOBLE_ROAR,
    EFFECT_VENOM_DRENCH,
    EFFECT_TOXIC_THREAD,
    EFFECT_HIT_SWITCH_TARGET,
    EFFECT_FINAL_GAMBIT,
    EFFECT_CHANGE_TYPE_ON_ITEM,
    EFFECT_AUTOTOMIZE,
    EFFECT_COPYCAT,
    EFFECT_DEFOG,
    EFFECT_HIT_ENEMY_HEAL_ALLY,
    EFFECT_SYNCHRONOISE,
    EFFECT_PSYCHO_SHIFT,
    EFFECT_POWER_TRICK,
    EFFECT_AFTER_YOU,
    EFFECT_BESTOW,
    EFFECT_ROTOTILLER,
    EFFECT_FLOWER_SHIELD,
    EFFECT_SPEED_SWAP,
    EFFECT_REVELATION_DANCE,
    EFFECT_AURORA_VEIL,
    EFFECT_THIRD_TYPE,
    EFFECT_ACUPRESSURE,
    EFFECT_AROMATIC_MIST,
    EFFECT_POWDER,
    EFFECT_BELCH,
    EFFECT_PARTING_SHOT,
    EFFECT_MAT_BLOCK,
    EFFECT_STOMPING_TANTRUM,
    EFFECT_INSTRUCT,
    EFFECT_LASER_FOCUS,
    EFFECT_MAGNETIC_FLUX,
    EFFECT_GEAR_UP,
    EFFECT_STRENGTH_SAP,
    EFFECT_PURIFY,
    EFFECT_FAIL_IF_NOT_ARG_TYPE,
    EFFECT_SHORE_UP,
    EFFECT_GEOMANCY,
    EFFECT_FAIRY_LOCK,
    EFFECT_ALLY_SWITCH,
    EFFECT_RELIC_SONG,
    EFFECT_BODY_PRESS,
    EFFECT_EERIE_SPELL,
    EFFECT_JUNGLE_HEALING,
    EFFECT_COACHING,
    EFFECT_LASH_OUT,
    EFFECT_GRASSY_GLIDE,
    EFFECT_DYNAMAX_DOUBLE_DMG,
    EFFECT_DECORATE,
    EFFECT_SNIPE_SHOT,
    EFFECT_RECOIL_HP_25,
    EFFECT_STUFF_CHEEKS,
    EFFECT_GRAV_APPLE,
    EFFECT_GLITZY_GLOW,
    EFFECT_BADDY_BAD,
    EFFECT_SAPPY_SEED,
    EFFECT_FREEZY_FROST,
    EFFECT_SPARKLY_SWIRL,
    EFFECT_PLASMA_FISTS,
    EFFECT_HYPERSPACE_FURY,
    EFFECT_AURA_WHEEL,
    EFFECT_PHOTON_GEYSER,
    EFFECT_TERRAIN_PULSE,
    EFFECT_NO_RETREAT,
    EFFECT_TAR_SHOT,
    EFFECT_POLTERGEIST,
    EFFECT_OCTOLOCK,
    EFFECT_CLANGOROUS_SOUL,
    EFFECT_BOLT_BEAK,
    EFFECT_SKY_DROP,
    EFFECT_EXPANDING_FORCE,
    EFFECT_RISING_VOLTAGE,
    EFFECT_BEAK_BLAST,
    EFFECT_COURT_CHANGE,
    EFFECT_MAX_HP_50_RECOIL,
    EFFECT_MIND_BLOWN, // Same as EFFECT_MAX_HP_50_RECOIL but is cancelled by Damp
    EFFECT_EXTREME_EVOBOOST,
    EFFECT_HIT_SET_REMOVE_TERRAIN,
    EFFECT_DARK_VOID,
    EFFECT_VICTORY_DANCE,
    EFFECT_TEATIME,
    EFFECT_ATTACK_UP_USER_ALLY,
    EFFECT_SHELL_TRAP,
    EFFECT_PSYBLADE,
    EFFECT_HYDRO_STEAM,
    EFFECT_REVIVAL_BLESSING,
    EFFECT_SNOWSCAPE,
    EFFECT_TAKE_HEART,
    EFFECT_COLLISION_COURSE,
    EFFECT_CORROSIVE_GAS,
    EFFECT_POPULATION_BOMB,
    EFFECT_SALT_CURE,
    EFFECT_CHILLY_RECEPTION,
    EFFECT_MAX_MOVE,
    EFFECT_GLAIVE_RUSH,
    EFFECT_RAGING_BULL,
    EFFECT_RAGE_FIST,
    EFFECT_DOODLE,
    EFFECT_FILLET_AWAY,
    EFFECT_IVY_CUDGEL,
    EFFECT_FICKLE_BEAM,
    EFFECT_BLIZZARD,
    EFFECT_RAIN_ALWAYS_HIT, // Unlike EFFECT_THUNDER, it doesn't get its accuracy reduced under sun.
    EFFECT_SHED_TAIL,
    EFFECT_UPPER_HAND,
    EFFECT_DRAGON_CHEER,
    EFFECT_LAST_RESPECTS,
    EFFECT_TIDY_UP,
    EFFECT_SPICY_EXTRACT,
    EFFECT_TERA_BLAST,
    EFFECT_TERA_STARSTORM,
    EFFECT_DRAGON_DARTS,
    EFFECT_GUARDIAN_OF_ALOLA,
    EFFECT_SHELL_SIDE_ARM,
    NUM_BATTLE_MOVE_EFFECTS,
};

#endif  // GUARD_CONSTANTS_BATTLE_MOVE_EFFECTS_H
