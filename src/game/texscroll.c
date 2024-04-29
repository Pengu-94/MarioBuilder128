#include "types.h"
#include "include/segment_symbols.h"
#include "memory.h"
#include "engine/math_util.h"
#include "src/engine/behavior_script.h"
#include "tile_scroll.h"
#include "texscroll.h"

#ifdef TARGET_N64
#define SCROLL_CONDITION(condition) condition
#else
#define SCROLL_CONDITION(condition) 1
#endif

extern u32 gGlobalTimer;
extern u8 maker_minecraft_water_ci4[];
extern u8 maker_lava_still_ci8[];
extern Gfx mat_maker_MakerMCWater[];
extern Gfx mat_maker_MakerMCLava[];
extern Gfx mat_maker_MakerMCFlowingLava[];
void scroll_sts_mat_maker_MakerMCFlowingLava() {
	static int intervalTex0 = 4;
	static int curInterval0 = 4;
	Gfx *mat = segmented_to_virtual(mat_maker_MakerMCFlowingLava);

	if (--curInterval0 <= 0) {
		shift_t(mat, 12, PACK_TILESIZE(0, 68));
		curInterval0 = intervalTex0;
	}
}
void scroll_minecraft_textures() {
	scroll_sts_mat_maker_MakerMCFlowingLava();

	u8 *waterTex = segmented_to_virtual(maker_minecraft_water_ci4);
	waterTex += (16*8) * ((gGlobalTimer/2) % 32);
	Gfx *mat = segmented_to_virtual(mat_maker_MakerMCWater);
	mat[8].words.w1 = waterTex;

	u8 *lavaTex = segmented_to_virtual(maker_lava_still_ci8);
	lavaTex += (16*16) * ((gGlobalTimer/2) % 38);
	mat = segmented_to_virtual(mat_maker_MakerMCLava);
	mat[8].words.w1 = lavaTex;
	mat = segmented_to_virtual(mat_maker_MakerMCFlowingLava);
	mat[8].words.w1 = lavaTex;
}


#include "src/game/texscroll/group0_texscroll.inc.c"
// #include "src/game/texscroll/wf_texscroll.inc.c"
// #include "src/game/texscroll/castle_courtyard_texscroll.inc.c"
// #include "src/game/texscroll/castle_grounds_texscroll.inc.c"
// #include "src/game/texscroll/castle_inside_texscroll.inc.c"
// #include "src/game/texscroll/ccm_texscroll.inc.c"
// #include "src/game/texscroll/bbh_texscroll.inc.c"
// #include "src/game/texscroll/jrb_texscroll.inc.c"
// #include "src/game/texscroll/bitdw_texscroll.inc.c"
// #include "src/game/texscroll/pss_texscroll.inc.c"
// #include "src/game/texscroll/lll_texscroll.inc.c"
// #include "src/game/texscroll/ssl_texscroll.inc.c"
// #include "src/game/texscroll/hmc_texscroll.inc.c"
// #include "src/game/texscroll/ddd_texscroll.inc.c"
// #include "src/game/texscroll/sa_texscroll.inc.c"
// #include "src/game/texscroll/sl_texscroll.inc.c"
// #include "src/game/texscroll/wmotr_texscroll.inc.c"
// #include "src/game/texscroll/wdw_texscroll.inc.c"
// #include "src/game/texscroll/ttm_texscroll.inc.c"
// #include "src/game/texscroll/bitfs_texscroll.inc.c"
// #include "src/game/texscroll/rr_texscroll.inc.c"
// #include "src/game/texscroll/thi_texscroll.inc.c"
// #include "src/game/texscroll/bits_texscroll.inc.c"
// #include "src/game/texscroll/ttc_texscroll.inc.c"
void scroll_textures() {

	if(SCROLL_CONDITION(sSegmentROMTable[0x4] == (uintptr_t)_group0_yay0SegmentRomStart)) {
		scroll_minecraft_textures();
	}

	// if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_wf_segment_7SegmentRomStart)) {
	// 	scroll_textures_wf();
	// }

	// if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_castle_courtyard_segment_7SegmentRomStart)) {
	// 	scroll_textures_castle_courtyard();
	// }

	// if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_ccm_segment_7SegmentRomStart)) {
	// 	scroll_textures_ccm();
	// }

	// if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_bbh_segment_7SegmentRomStart)) {
	// 	scroll_textures_bbh();
	// }

	// if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_jrb_segment_7SegmentRomStart)) {
	// 	scroll_textures_jrb();
	// }

	// if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_bitdw_segment_7SegmentRomStart)) {
	// 	scroll_textures_bitdw();
	// }

	// if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_pss_segment_7SegmentRomStart)) {
	// 	scroll_textures_pss();
	// }

	// if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_castle_inside_segment_7SegmentRomStart)) {
	// 	scroll_textures_castle_inside();
	// }

	// if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_lll_segment_7SegmentRomStart)) {
	// 	scroll_textures_lll();
	// }

	// if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_ssl_segment_7SegmentRomStart)) {
	// 	scroll_textures_ssl();
	// }

	// if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_hmc_segment_7SegmentRomStart)) {
	// 	scroll_textures_hmc();
	// }

	// if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_ddd_segment_7SegmentRomStart)) {
	// 	scroll_textures_ddd();
	// }

	// if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_sa_segment_7SegmentRomStart)) {
	// 	scroll_textures_sa();
	// }

	// if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_sl_segment_7SegmentRomStart)) {
	// 	scroll_textures_sl();
	// }

	// if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_wmotr_segment_7SegmentRomStart)) {
	// 	scroll_textures_wmotr();
	// }

	// if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_wdw_segment_7SegmentRomStart)) {
	// 	scroll_textures_wdw();
	// }

	// if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_ttm_segment_7SegmentRomStart)) {
	// 	scroll_textures_ttm();
	// }

	// if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_bitfs_segment_7SegmentRomStart)) {
	// 	scroll_textures_bitfs();
	// }

	// if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_rr_segment_7SegmentRomStart)) {
	// 	scroll_textures_rr();
	// }

	// if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_thi_segment_7SegmentRomStart)) {
	// 	scroll_textures_thi();
	// }

	// if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_bits_segment_7SegmentRomStart)) {
	// 	scroll_textures_bits();
	// }

	// if(SCROLL_CONDITION(sSegmentROMTable[0x7] == (uintptr_t)_ttc_segment_7SegmentRomStart)) {
	// 	scroll_textures_ttc();
	// }

	if(SCROLL_CONDITION(sSegmentROMTable[0x6] == (uintptr_t)_group14_yay0SegmentRomStart)) {
		scroll_textures_group14();
	}

	if(SCROLL_CONDITION(sSegmentROMTable[0x4] == (uintptr_t)_group0_yay0SegmentRomStart)) {
		scroll_textures_group0();
	}

}
