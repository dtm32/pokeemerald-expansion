/*

Sample format for importing graphics:

#if P_FAMILY_BULBASAUR

const u32 gMonFrontPic_Bulbasaur[] = INCBIN_U32("graphics/pokemon/bulbasaur/anim_front.4bpp.lz");
const u32 gMonPalette_Bulbasaur[] = INCBIN_U32("graphics/pokemon/bulbasaur/normal.gbapal.lz");
const u32 gMonBackPic_Bulbasaur[] = INCBIN_U32("graphics/pokemon/bulbasaur/back.4bpp.lz");
const u32 gMonShinyPalette_Bulbasaur[] = INCBIN_U32("graphics/pokemon/bulbasaur/shiny.gbapal.lz");
const u8 gMonIcon_Bulbasaur[] = INCBIN_U8("graphics/pokemon/bulbasaur/icon.4bpp");

#if P_FOOTPRINTS

const u8 gMonFootprint_Bulbasaur[] = INCBIN_U8("graphics/pokemon/bulbasaur/footprint.1bpp");

#endif //P_FOOTPRINTS

#if OW_POKEMON_OBJECT_EVENTS

const u32 gObjectEventPic_Bulbasaur[] = INCBIN_COMP("graphics/pokemon/bulbasaur/overworld.4bpp");

#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE

const u32 gOverworldPalette_Bulbasaur[] = INCBIN_U32("graphics/pokemon/bulbasaur/overworld_normal.gbapal.lz");
const u32 gShinyOverworldPalette_Bulbasaur[] = INCBIN_U32("graphics/pokemon/bulbasaur/overworld_shiny.gbapal.lz");

#endif //OW_PKMN_OBJECTS_SHARE_PALETTES
#endif //OW_POKEMON_OBJECT_EVENTS

*/

const u32 gMonFrontPic_WurmpleDelta[] = INCBIN_U32("graphics/pokemon/wurmple/delta/anim_front.4bpp.lz");
const u32 gMonPalette_WurmpleDelta[] = INCBIN_U32("graphics/pokemon/wurmple/delta/normal.gbapal.lz");
const u32 gMonBackPic_WurmpleDelta[] = INCBIN_U32("graphics/pokemon/wurmple/delta/back.4bpp.lz");
const u8 gMonIcon_WurmpleDelta[] = INCBIN_U8("graphics/pokemon/wurmple/delta/icon.4bpp");

const u32 gMonFrontPic_WhismurDelta[] = INCBIN_U32("graphics/pokemon/whismur/delta/anim_front_1.4bpp.lz");
const u32 gMonPalette_WhismurDelta[] = INCBIN_U32("graphics/pokemon/whismur/delta/normal.gbapal.lz");
const u32 gMonBackPic_WhismurDelta[] = INCBIN_U32("graphics/pokemon/whismur/delta/back.4bpp.lz");
const u8 gMonIcon_WhismurDelta[] = INCBIN_U8("graphics/pokemon/whismur/delta/icon.4bpp");

const u32 gMonFrontPic_SilcoonDelta[] = INCBIN_U32("graphics/pokemon/silcoon/delta/anim_front.4bpp.lz");
const u32 gMonPalette_SilcoonDelta[] = INCBIN_U32("graphics/pokemon/silcoon/delta/normal.gbapal.lz");
const u32 gMonBackPic_SilcoonDelta[] = INCBIN_U32("graphics/pokemon/silcoon/delta/back.4bpp.lz");
const u8 gMonIcon_SilcoonDelta[] = INCBIN_U8("graphics/pokemon/silcoon/delta/icon.4bpp");

const u32 gMonPalette_DustoxDelta[] = INCBIN_U32("graphics/pokemon/dustox/delta.gbapal.lz");
const u8 gMonIcon_DustoxDelta[] = INCBIN_U8("graphics/pokemon/dustox/icon_delta.4bpp");

const u32 gMonFrontPic_SandslashDelta[] = INCBIN_U32("graphics/pokemon/sandslash/delta/anim_front.4bpp.lz");
const u32 gMonPalette_SandslashDelta[] = INCBIN_U32("graphics/pokemon/sandslash/delta/normal.gbapal.lz");
const u32 gMonBackPic_SandslashDelta[] = INCBIN_U32("graphics/pokemon/sandslash/delta/back.4bpp.lz");
const u8 gMonIcon_SandslashDelta[] = INCBIN_U8("graphics/pokemon/sandslash/delta/icon.4bpp");

const u32 gMonFrontPic_FearowDelta[] = INCBIN_U32("graphics/pokemon/fearow/delta/anim_front.4bpp.lz");
const u32 gMonPalette_FearowDelta[] = INCBIN_U32("graphics/pokemon/fearow/delta/normal.gbapal.lz");
const u32 gMonBackPic_FearowDelta[] = INCBIN_U32("graphics/pokemon/fearow/delta/back.4bpp.lz");
const u8 gMonIcon_FearowDelta[] = INCBIN_U8("graphics/pokemon/fearow/delta/icon.4bpp");

const u32 gMonFrontPic_LaironDelta[] = INCBIN_U32("graphics/pokemon/lairon/delta/anim_front.4bpp.lz");
const u32 gMonPalette_LaironDelta[] = INCBIN_U32("graphics/pokemon/lairon/delta/normal.gbapal.lz");
const u32 gMonBackPic_LaironDelta[] = INCBIN_U32("graphics/pokemon/lairon/delta/back.4bpp.lz");
const u8 gMonIcon_LaironDelta[] = INCBIN_U8("graphics/pokemon/lairon/delta/icon.4bpp");

const u32 gMonFrontPic_VenonatDelta[] = INCBIN_U32("graphics/pokemon/venonat/delta/anim_front_2.4bpp.lz");
const u32 gMonPalette_VenonatDelta[] = INCBIN_U32("graphics/pokemon/venonat/delta/normal.gbapal.lz");
const u32 gMonBackPic_VenonatDelta[] = INCBIN_U32("graphics/pokemon/venonat/delta/back.4bpp.lz");
const u8 gMonIcon_VenonatDelta[] = INCBIN_U8("graphics/pokemon/venonat/delta/icon.4bpp");

const u32 gMonPalette_VenomothDelta[] = INCBIN_U32("graphics/pokemon/venomoth/delta.gbapal.lz");

const u32 gMonPalette_GolbatDelta[] = INCBIN_U32("graphics/pokemon/golbat/delta.gbapal.lz");

const u32 gMonPalette_ShedinjaDelta[] = INCBIN_U32("graphics/pokemon/shedinja/delta.gbapal.lz");

const u32 gMonFrontPic_BeedrillDelta[] = INCBIN_U32("graphics/pokemon/beedrill/delta/anim_front.4bpp.lz");
const u32 gMonPalette_BeedrillDelta[] = INCBIN_U32("graphics/pokemon/beedrill/delta/normal.gbapal.lz");
const u32 gMonBackPic_BeedrillDelta[] = INCBIN_U32("graphics/pokemon/beedrill/delta/back.4bpp.lz");
const u8 gMonIcon_BeedrillDelta[] = INCBIN_U8("graphics/pokemon/beedrill/delta/icon.4bpp");

const u32 gMonPalette_ButterfreeDelta[] = INCBIN_U32("graphics/pokemon/butterfree/delta.gbapal.lz");

const u32 gMonFrontPic_Igneousaur[] = INCBIN_U32("graphics/pokemon/igneousaur/anim_front.4bpp.lz");
const u32 gMonPalette_Igneousaur[] = INCBIN_U32("graphics/pokemon/igneousaur/normal.gbapal.lz");
const u32 gMonBackPic_Igneousaur[] = INCBIN_U32("graphics/pokemon/igneousaur/back.4bpp.lz");
const u32 gMonShinyPalette_Igneousaur[] = INCBIN_U32("graphics/pokemon/igneousaur/normal.gbapal.lz");
const u8 gMonIcon_Igneousaur[] = INCBIN_U8("graphics/pokemon/igneousaur/icon.4bpp");

const u32 gMonFrontPic_Polaris[] = INCBIN_U32("graphics/pokemon/polaris/anim_front.4bpp.lz");
const u32 gMonPalette_Polaris[] = INCBIN_U32("graphics/pokemon/polaris/normal.gbapal.lz");
const u32 gMonBackPic_Polaris[] = INCBIN_U32("graphics/pokemon/polaris/back.4bpp.lz");
const u32 gMonShinyPalette_Polaris[] = INCBIN_U32("graphics/pokemon/polaris/normal.gbapal.lz");
const u8 gMonFootprint_Polaris[] = INCBIN_U8("graphics/pokemon/polaris/footprint.1bpp");
const u8 gMonIcon_Polaris[] = INCBIN_U8("graphics/pokemon/polaris/icon.4bpp");

const u32 gMonFrontPic_Voltrex[] = INCBIN_U32("graphics/pokemon/voltrex/anim_front.4bpp.lz");
const u32 gMonPalette_Voltrex[] = INCBIN_U32("graphics/pokemon/voltrex/normal.gbapal.lz");
const u32 gMonBackPic_Voltrex[] = INCBIN_U32("graphics/pokemon/voltrex/back.4bpp.lz");
const u8 gMonIcon_Voltrex[] = INCBIN_U8("graphics/pokemon/voltrex/icon.4bpp");

const u32 gMonFrontPic_Electrosaur[] = INCBIN_U32("graphics/pokemon/electrosaur/electrosaur.4bpp.lz");
const u32 gMonPalette_Electrosaur[] = INCBIN_U32("graphics/pokemon/electrosaur/electrosaur.gbapal.lz");
const u32 gMonBackPic_Electrosaur[] = INCBIN_U32("graphics/pokemon/electrosaur/back_electrosaur.4bpp.lz");
const u8 gMonIcon_Electrosaur[] = INCBIN_U8("graphics/pokemon/electrosaur/icon_electrosaur.4bpp");

const u32 gMonFrontPic_Tricerachop[] = INCBIN_U32("graphics/pokemon/tricerachop/anim_front.4bpp.lz");
const u32 gMonPalette_Tricerachop[] = INCBIN_U32("graphics/pokemon/tricerachop/normal.gbapal.lz");
const u32 gMonBackPic_Tricerachop[] = INCBIN_U32("graphics/pokemon/tricerachop/back.4bpp.lz");
const u8 gMonIcon_Tricerachop[] = INCBIN_U8("graphics/pokemon/tricerachop/icon.4bpp");

const u32 gMonFrontPic_Tomahtops[] = INCBIN_U32("graphics/pokemon/tricerachop/tomahtops/anim_front.4bpp.lz");
const u32 gMonPalette_Tomahtops[] = INCBIN_U32("graphics/pokemon/tricerachop/tomahtops/normal.gbapal.lz");
const u32 gMonBackPic_Tomahtops[] = INCBIN_U32("graphics/pokemon/tricerachop/tomahtops/back.4bpp.lz");
const u8 gMonIcon_Tomahtops[] = INCBIN_U8("graphics/pokemon/tricerachop/tomahtops/icon.4bpp");

const u32 gMonFrontPic_Abyssilily[] = INCBIN_U32("graphics/pokemon/cradily/anim_front_mega.4bpp.lz");
const u32 gMonPalette_Abyssilily[] = INCBIN_U32("graphics/pokemon/cradily/mega.gbapal.lz");
const u32 gMonShinyPalette_Abyssilily[] = INCBIN_U32("graphics/pokemon/cradily/shiny_mega.gbapal.lz");
const u32 gMonBackPic_Abyssilily[] = INCBIN_U32("graphics/pokemon/cradily/back_mega.4bpp.lz");
const u8 gMonIcon_Abyssilily[] = INCBIN_U8("graphics/pokemon/cradily/mega/icon.4bpp");

const u32 gMonFrontPic_Armountan[] = INCBIN_U32("graphics/pokemon/armaldo/mega/anim_front.4bpp.lz");
const u32 gMonPalette_Armountan[] = INCBIN_U32("graphics/pokemon/armaldo/mega/normal.gbapal.lz");
const u32 gMonShinyPalette_Armountan[] = INCBIN_U32("graphics/pokemon/armaldo/mega/shiny.gbapal.lz");
const u32 gMonBackPic_Armountan[] = INCBIN_U32("graphics/pokemon/armaldo/mega/back.4bpp.lz");
const u8 gMonIcon_Armountan[] = INCBIN_U8("graphics/pokemon/armaldo/mega/icon.4bpp");

// const u32 gMonFrontPic_RhyhornDelta[] = INCBIN_U32("graphics/pokemon/rhyhorn/delta/anim_front.4bpp.lz");
// const u32 gMonPalette_RhyhornDelta[] = INCBIN_U32("graphics/pokemon/rhyhorn/delta/normal.gbapal.lz");
// const u32 gMonShinyPalette_RhyhornDelta[] = INCBIN_U32("graphics/pokemon/rhyhorn/delta/shiny.gbapal.lz");
// const u32 gMonBackPic_RhyhornDelta[] = INCBIN_U32("graphics/pokemon/rhyhorn/delta/back.4bpp.lz");
// const u8 gMonIcon_RhyhornDelta[] = INCBIN_U8("graphics/pokemon/rhyhorn/delta/icon.4bpp");

const u32 gMonFrontPic_SlowpokeDelta[] = INCBIN_U32("graphics/pokemon/slowpoke/delta/anim_front.4bpp.lz");
const u32 gMonPalette_SlowpokeDelta[] = INCBIN_U32("graphics/pokemon/slowpoke/delta/normal.gbapal.lz");
// const u32 gMonShinyPalette_SlowpokeDelta[] = INCBIN_U32("graphics/pokemon/slowpoke/delta/shiny.gbapal.lz");
const u32 gMonBackPic_SlowpokeDelta[] = INCBIN_U32("graphics/pokemon/slowpoke/delta/back.4bpp.lz");
// const u8 gMonIcon_SlowpokeDelta[] = INCBIN_U8("graphics/pokemon/slowpoke/delta/icon.4bpp");

const u32 gMonFrontPic_LunatoneDelta[] = INCBIN_U32("graphics/pokemon/lunatone/delta/anim_front.4bpp.lz");
const u32 gMonPalette_LunatoneDelta[] = INCBIN_U32("graphics/pokemon/lunatone/delta/normal.gbapal.lz");
// const u32 gMonShinyPalette_LunatoneDelta[] = INCBIN_U32("graphics/pokemon/lunatone/delta/shiny.gbapal.lz");
// const u32 gMonBackPic_LunatoneDelta[] = INCBIN_U32("graphics/pokemon/lunatone/delta/back.4bpp.lz");
// const u8 gMonIcon_LunatoneDelta[] = INCBIN_U8("graphics/pokemon/lunatone/delta/icon.4bpp");

const u32 gMonFrontPic_SolrockDelta[] = INCBIN_U32("graphics/pokemon/solrock/delta/anim_front.4bpp.lz");
const u32 gMonPalette_SolrockDelta[] = INCBIN_U32("graphics/pokemon/solrock/delta/normal.gbapal.lz");
// const u32 gMonShinyPalette_SolrockDelta[] = INCBIN_U32("graphics/pokemon/solrock/delta/shiny.gbapal.lz");
// const u32 gMonBackPic_SolrockDelta[] = INCBIN_U32("graphics/pokemon/solrock/delta/back.4bpp.lz");
// const u8 gMonIcon_SolrockDelta[] = INCBIN_U8("graphics/pokemon/solrock/delta/icon.4bpp");

// Skarmory
// const u32 gMonFrontPic_RhyhornDelta[] = INCBIN_U32("graphics/pokemon/rhyhorn/delta/anim_front.4bpp.lz");
// const u32 gMonPalette_RhyhornDelta[] = INCBIN_U32("graphics/pokemon/rhyhorn/delta/normal.gbapal.lz");
// const u32 gMonShinyPalette_RhyhornDelta[] = INCBIN_U32("graphics/pokemon/rhyhorn/delta/shiny.gbapal.lz");
// const u32 gMonBackPic_RhyhornDelta[] = INCBIN_U32("graphics/pokemon/rhyhorn/delta/back.4bpp.lz");
// const u8 gMonIcon_RhyhornDelta[] = INCBIN_U8("graphics/pokemon/rhyhorn/delta/icon.4bpp");

// Camerupt
// const u32 gMonFrontPic_CacturneDelta[] = INCBIN_U32("graphics/pokemon/rhyhorn/delta/anim_front.4bpp.lz");
// const u32 gMonPalette_CacturneDelta[] = INCBIN_U32("graphics/pokemon/rhyhorn/delta/normal.gbapal.lz");
// const u32 gMonShinyPalette_CacturneDelta[] = INCBIN_U32("graphics/pokemon/rhyhorn/delta/shiny.gbapal.lz");
// const u32 gMonBackPic_CacturneDelta[] = INCBIN_U32("graphics/pokemon/rhyhorn/delta/back.4bpp.lz");
// const u8 gMonIcon_CacturneDelta[] = INCBIN_U8("graphics/pokemon/rhyhorn/delta/icon.4bpp");

// Cacturne
const u32 gMonFrontPic_CacturneDelta[] = INCBIN_U32("graphics/pokemon/cacturne/delta/anim_front.4bpp.lz");
const u32 gMonPalette_CacturneDelta[] = INCBIN_U32("graphics/pokemon/cacturne/delta/normal.gbapal.lz");
// const u32 gMonShinyPalette_CacturneDelta[] = INCBIN_U32("graphics/pokemon/cacturne/delta/shiny.gbapal.lz");
const u32 gMonBackPic_CacturneDelta[] = INCBIN_U32("graphics/pokemon/cacturne/delta/back.4bpp.lz");
// const u8 gMonIcon_CacturneDelta[] = INCBIN_U8("graphics/pokemon/cacturne/delta/icon.4bpp");

// const u32 gMonFrontPic_RhyhornDelta[] = INCBIN_U32("graphics/pokemon/rhyhorn/delta/anim_front.4bpp.lz");
// const u32 gMonPalette_RhyhornDelta[] = INCBIN_U32("graphics/pokemon/rhyhorn/delta/normal.gbapal.lz");
// const u32 gMonShinyPalette_RhyhornDelta[] = INCBIN_U32("graphics/pokemon/rhyhorn/delta/shiny.gbapal.lz");
// const u32 gMonBackPic_RhyhornDelta[] = INCBIN_U32("graphics/pokemon/rhyhorn/delta/back.4bpp.lz");
// const u8 gMonIcon_RhyhornDelta[] = INCBIN_U8("graphics/pokemon/rhyhorn/delta/icon.4bpp");

// const u32 gMonFrontPic_RhyhornDelta[] = INCBIN_U32("graphics/pokemon/rhyhorn/delta/anim_front.4bpp.lz");
// const u32 gMonPalette_RhyhornDelta[] = INCBIN_U32("graphics/pokemon/rhyhorn/delta/normal.gbapal.lz");
// const u32 gMonShinyPalette_RhyhornDelta[] = INCBIN_U32("graphics/pokemon/rhyhorn/delta/shiny.gbapal.lz");
// const u32 gMonBackPic_RhyhornDelta[] = INCBIN_U32("graphics/pokemon/rhyhorn/delta/back.4bpp.lz");
// const u8 gMonIcon_RhyhornDelta[] = INCBIN_U8("graphics/pokemon/rhyhorn/delta/icon.4bpp");

const u32 gMonFrontPic_MetangDelta[] = INCBIN_U32("graphics/pokemon/metang/delta/anim_front.4bpp.lz");
const u32 gMonPalette_MetangDelta[] = INCBIN_U32("graphics/pokemon/metang/delta/normal.gbapal.lz");
// const u32 gMonShinyPalette_MetangDelta[] = INCBIN_U32("graphics/pokemon/metang/delta/shiny.gbapal.lz");
// const u32 gMonBackPic_MetangDelta[] = INCBIN_U32("graphics/pokemon/metang/delta/back.4bpp.lz");
// const u8 gMonIcon_MetangDelta[] = INCBIN_U8("graphics/pokemon/metang/delta/icon.4bpp");
