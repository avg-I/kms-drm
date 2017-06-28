/*
 * Copyright 2012-15 Advanced Micro Devices, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 *  and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER(S) OR AUTHOR(S) BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 * Authors: AMD
 *
 */

#ifndef __DC_TIMING_GENERATOR_DCN10_H__
#define __DC_TIMING_GENERATOR_DCN10_H__

#include "timing_generator.h"

#define DCN10TG_FROM_TG(tg)\
	container_of(tg, struct dcn10_timing_generator, base)

#define TG_COMMON_REG_LIST_DCN(inst) \
	SRI(OTG_VSTARTUP_PARAM, OTG, inst),\
	SRI(OTG_VUPDATE_PARAM, OTG, inst),\
	SRI(OTG_VREADY_PARAM, OTG, inst),\
	SRI(OTG_BLANK_CONTROL, OTG, inst),\
	SRI(OTG_MASTER_UPDATE_LOCK, OTG, inst),\
	SRI(OTG_GLOBAL_CONTROL0, OTG, inst),\
	SRI(OTG_DOUBLE_BUFFER_CONTROL, OTG, inst),\
	SRI(OTG_H_TOTAL, OTG, inst),\
	SRI(OTG_H_BLANK_START_END, OTG, inst),\
	SRI(OTG_H_SYNC_A, OTG, inst),\
	SRI(OTG_H_SYNC_A_CNTL, OTG, inst),\
	SRI(OTG_H_TIMING_CNTL, OTG, inst),\
	SRI(OTG_V_TOTAL, OTG, inst),\
	SRI(OTG_V_BLANK_START_END, OTG, inst),\
	SRI(OTG_V_SYNC_A, OTG, inst),\
	SRI(OTG_V_SYNC_A_CNTL, OTG, inst),\
	SRI(OTG_INTERLACE_CONTROL, OTG, inst),\
	SRI(OTG_CONTROL, OTG, inst),\
	SRI(OTG_STEREO_CONTROL, OTG, inst),\
	SRI(OTG_3D_STRUCTURE_CONTROL, OTG, inst),\
	SRI(OTG_STEREO_STATUS, OTG, inst),\
	SRI(OTG_V_TOTAL_MAX, OTG, inst),\
	SRI(OTG_V_TOTAL_MIN, OTG, inst),\
	SRI(OTG_V_TOTAL_CONTROL, OTG, inst),\
	SRI(OTG_TRIGA_CNTL, OTG, inst),\
	SRI(OTG_FORCE_COUNT_NOW_CNTL, OTG, inst),\
	SRI(OTG_STATIC_SCREEN_CONTROL, OTG, inst),\
	SRI(OTG_STATUS_FRAME_COUNT, OTG, inst),\
	SRI(OTG_STATUS, OTG, inst),\
	SRI(OTG_STATUS_POSITION, OTG, inst),\
	SRI(OTG_NOM_VERT_POSITION, OTG, inst),\
	SRI(OTG_BLACK_COLOR, OTG, inst),\
	SRI(OTG_CLOCK_CONTROL, OTG, inst),\
	SRI(OPTC_INPUT_CLOCK_CONTROL, ODM, inst),\
	SRI(OPTC_DATA_SOURCE_SELECT, ODM, inst),\
	SRI(OPPBUF_CONTROL, OPPBUF, inst),\
	SRI(OPPBUF_3D_PARAMETERS_0, OPPBUF, inst),\
	SRI(CONTROL, VTG, inst),\
	SR(D1VGA_CONTROL),\
	SR(D2VGA_CONTROL),\
	SR(D3VGA_CONTROL),\
	SR(D4VGA_CONTROL)

#define TG_COMMON_REG_LIST_DCN1_0(inst) \
	TG_COMMON_REG_LIST_DCN(inst),\
	SRI(OTG_TEST_PATTERN_PARAMETERS, OTG, inst),\
	SRI(OTG_TEST_PATTERN_CONTROL, OTG, inst),\
	SRI(OTG_TEST_PATTERN_COLOR, OTG, inst)


struct dcn_tg_registers {
	uint32_t OTG_VSTARTUP_PARAM;
	uint32_t OTG_VUPDATE_PARAM;
	uint32_t OTG_VREADY_PARAM;
	uint32_t OTG_BLANK_CONTROL;
	uint32_t OTG_MASTER_UPDATE_LOCK;
	uint32_t OTG_GLOBAL_CONTROL0;
	uint32_t OTG_DOUBLE_BUFFER_CONTROL;
	uint32_t OTG_H_TOTAL;
	uint32_t OTG_H_BLANK_START_END;
	uint32_t OTG_H_SYNC_A;
	uint32_t OTG_H_SYNC_A_CNTL;
	uint32_t OTG_H_TIMING_CNTL;
	uint32_t OTG_V_TOTAL;
	uint32_t OTG_V_BLANK_START_END;
	uint32_t OTG_V_SYNC_A;
	uint32_t OTG_V_SYNC_A_CNTL;
	uint32_t OTG_INTERLACE_CONTROL;
	uint32_t OTG_CONTROL;
	uint32_t OTG_STEREO_CONTROL;
	uint32_t OTG_3D_STRUCTURE_CONTROL;
	uint32_t OTG_STEREO_STATUS;
	uint32_t OTG_V_TOTAL_MAX;
	uint32_t OTG_V_TOTAL_MIN;
	uint32_t OTG_V_TOTAL_CONTROL;
	uint32_t OTG_TRIGA_CNTL;
	uint32_t OTG_FORCE_COUNT_NOW_CNTL;
	uint32_t OTG_STATIC_SCREEN_CONTROL;
	uint32_t OTG_STATUS_FRAME_COUNT;
	uint32_t OTG_STATUS;
	uint32_t OTG_STATUS_POSITION;
	uint32_t OTG_NOM_VERT_POSITION;
	uint32_t OTG_BLACK_COLOR;
	uint32_t OTG_TEST_PATTERN_PARAMETERS;
	uint32_t OTG_TEST_PATTERN_CONTROL;
	uint32_t OTG_TEST_PATTERN_COLOR;
	uint32_t OTG_CLOCK_CONTROL;
	uint32_t OPTC_INPUT_CLOCK_CONTROL;
	uint32_t OPTC_DATA_SOURCE_SELECT;
	uint32_t OPPBUF_CONTROL;
	uint32_t OPPBUF_3D_PARAMETERS_0;
	uint32_t CONTROL;
	/*todo: move VGA to HWSS */
	uint32_t D1VGA_CONTROL;
	uint32_t D2VGA_CONTROL;
	uint32_t D3VGA_CONTROL;
	uint32_t D4VGA_CONTROL;
};

#define TG_COMMON_MASK_SH_LIST_DCN(mask_sh)\
	SF(OTG0_OTG_VSTARTUP_PARAM, VSTARTUP_START, mask_sh),\
	SF(OTG0_OTG_VUPDATE_PARAM, VUPDATE_OFFSET, mask_sh),\
	SF(OTG0_OTG_VUPDATE_PARAM, VUPDATE_WIDTH, mask_sh),\
	SF(OTG0_OTG_VREADY_PARAM, VREADY_OFFSET, mask_sh),\
	SF(OTG0_OTG_BLANK_CONTROL, OTG_BLANK_DATA_EN, mask_sh),\
	SF(OTG0_OTG_BLANK_CONTROL, OTG_BLANK_DE_MODE, mask_sh),\
	SF(OTG0_OTG_BLANK_CONTROL, OTG_CURRENT_BLANK_STATE, mask_sh),\
	SF(OTG0_OTG_MASTER_UPDATE_LOCK, OTG_MASTER_UPDATE_LOCK, mask_sh),\
	SF(OTG0_OTG_GLOBAL_CONTROL0, OTG_MASTER_UPDATE_LOCK_SEL, mask_sh),\
	SF(OTG0_OTG_DOUBLE_BUFFER_CONTROL, OTG_UPDATE_PENDING, mask_sh),\
	SF(OTG0_OTG_DOUBLE_BUFFER_CONTROL, OTG_BLANK_DATA_DOUBLE_BUFFER_EN, mask_sh),\
	SF(OTG0_OTG_H_TOTAL, OTG_H_TOTAL, mask_sh),\
	SF(OTG0_OTG_H_BLANK_START_END, OTG_H_BLANK_START, mask_sh),\
	SF(OTG0_OTG_H_BLANK_START_END, OTG_H_BLANK_END, mask_sh),\
	SF(OTG0_OTG_H_SYNC_A, OTG_H_SYNC_A_START, mask_sh),\
	SF(OTG0_OTG_H_SYNC_A, OTG_H_SYNC_A_END, mask_sh),\
	SF(OTG0_OTG_H_SYNC_A_CNTL, OTG_H_SYNC_A_POL, mask_sh),\
	SF(OTG0_OTG_H_TIMING_CNTL, OTG_H_TIMING_DIV_BY2, mask_sh),\
	SF(OTG0_OTG_V_TOTAL, OTG_V_TOTAL, mask_sh),\
	SF(OTG0_OTG_V_BLANK_START_END, OTG_V_BLANK_START, mask_sh),\
	SF(OTG0_OTG_V_BLANK_START_END, OTG_V_BLANK_END, mask_sh),\
	SF(OTG0_OTG_V_SYNC_A, OTG_V_SYNC_A_START, mask_sh),\
	SF(OTG0_OTG_V_SYNC_A, OTG_V_SYNC_A_END, mask_sh),\
	SF(OTG0_OTG_V_SYNC_A_CNTL, OTG_V_SYNC_A_POL, mask_sh),\
	SF(OTG0_OTG_INTERLACE_CONTROL, OTG_INTERLACE_ENABLE, mask_sh),\
	SF(OTG0_OTG_CONTROL, OTG_MASTER_EN, mask_sh),\
	SF(OTG0_OTG_CONTROL, OTG_START_POINT_CNTL, mask_sh),\
	SF(OTG0_OTG_CONTROL, OTG_DISABLE_POINT_CNTL, mask_sh),\
	SF(OTG0_OTG_CONTROL, OTG_FIELD_NUMBER_CNTL, mask_sh),\
	SF(OTG0_OTG_STEREO_CONTROL, OTG_STEREO_EN, mask_sh),\
	SF(OTG0_OTG_STEREO_CONTROL, OTG_STEREO_SYNC_OUTPUT_LINE_NUM, mask_sh),\
	SF(OTG0_OTG_STEREO_CONTROL, OTG_STEREO_SYNC_OUTPUT_POLARITY, mask_sh),\
	SF(OTG0_OTG_STEREO_CONTROL, OTG_STEREO_EYE_FLAG_POLARITY, mask_sh),\
	SF(OTG0_OTG_STEREO_CONTROL, OTG_DISABLE_STEREOSYNC_OUTPUT_FOR_DP, mask_sh),\
	SF(OTG0_OTG_STEREO_CONTROL, OTG_DISABLE_STEREOSYNC_OUTPUT_FOR_DP, mask_sh),\
	SF(OTG0_OTG_STEREO_STATUS, OTG_STEREO_CURRENT_EYE, mask_sh),\
	SF(OTG0_OTG_3D_STRUCTURE_CONTROL, OTG_3D_STRUCTURE_EN, mask_sh),\
	SF(OTG0_OTG_3D_STRUCTURE_CONTROL, OTG_3D_STRUCTURE_V_UPDATE_MODE, mask_sh),\
	SF(OTG0_OTG_3D_STRUCTURE_CONTROL, OTG_3D_STRUCTURE_STEREO_SEL_OVR, mask_sh),\
	SF(OTG0_OTG_V_TOTAL_MAX, OTG_V_TOTAL_MAX, mask_sh),\
	SF(OTG0_OTG_V_TOTAL_MIN, OTG_V_TOTAL_MIN, mask_sh),\
	SF(OTG0_OTG_V_TOTAL_CONTROL, OTG_V_TOTAL_MIN_SEL, mask_sh),\
	SF(OTG0_OTG_V_TOTAL_CONTROL, OTG_V_TOTAL_MAX_SEL, mask_sh),\
	SF(OTG0_OTG_V_TOTAL_CONTROL, OTG_FORCE_LOCK_ON_EVENT, mask_sh),\
	SF(OTG0_OTG_V_TOTAL_CONTROL, OTG_SET_V_TOTAL_MIN_MASK_EN, mask_sh),\
	SF(OTG0_OTG_V_TOTAL_CONTROL, OTG_SET_V_TOTAL_MIN_MASK, mask_sh),\
	SF(OTG0_OTG_FORCE_COUNT_NOW_CNTL, OTG_FORCE_COUNT_NOW_CLEAR, mask_sh),\
	SF(OTG0_OTG_FORCE_COUNT_NOW_CNTL, OTG_FORCE_COUNT_NOW_MODE, mask_sh),\
	SF(OTG0_OTG_FORCE_COUNT_NOW_CNTL, OTG_FORCE_COUNT_NOW_OCCURRED, mask_sh),\
	SF(OTG0_OTG_TRIGA_CNTL, OTG_TRIGA_SOURCE_SELECT, mask_sh),\
	SF(OTG0_OTG_TRIGA_CNTL, OTG_TRIGA_SOURCE_PIPE_SELECT, mask_sh),\
	SF(OTG0_OTG_TRIGA_CNTL, OTG_TRIGA_RISING_EDGE_DETECT_CNTL, mask_sh),\
	SF(OTG0_OTG_TRIGA_CNTL, OTG_TRIGA_FALLING_EDGE_DETECT_CNTL, mask_sh),\
	SF(OTG0_OTG_STATIC_SCREEN_CONTROL, OTG_STATIC_SCREEN_EVENT_MASK, mask_sh),\
	SF(OTG0_OTG_STATIC_SCREEN_CONTROL, OTG_STATIC_SCREEN_FRAME_COUNT, mask_sh),\
	SF(OTG0_OTG_STATUS_FRAME_COUNT, OTG_FRAME_COUNT, mask_sh),\
	SF(OTG0_OTG_STATUS, OTG_V_BLANK, mask_sh),\
	SF(OTG0_OTG_STATUS, OTG_V_ACTIVE_DISP, mask_sh),\
	SF(OTG0_OTG_STATUS_POSITION, OTG_HORZ_COUNT, mask_sh),\
	SF(OTG0_OTG_STATUS_POSITION, OTG_VERT_COUNT, mask_sh),\
	SF(OTG0_OTG_NOM_VERT_POSITION, OTG_VERT_COUNT_NOM, mask_sh),\
	SF(OTG0_OTG_BLACK_COLOR, OTG_BLACK_COLOR_B_CB, mask_sh),\
	SF(OTG0_OTG_BLACK_COLOR, OTG_BLACK_COLOR_G_Y, mask_sh),\
	SF(OTG0_OTG_BLACK_COLOR, OTG_BLACK_COLOR_R_CR, mask_sh),\
	SF(OTG0_OTG_CLOCK_CONTROL, OTG_BUSY, mask_sh),\
	SF(OTG0_OTG_CLOCK_CONTROL, OTG_CLOCK_EN, mask_sh),\
	SF(OTG0_OTG_CLOCK_CONTROL, OTG_CLOCK_ON, mask_sh),\
	SF(OTG0_OTG_CLOCK_CONTROL, OTG_CLOCK_GATE_DIS, mask_sh),\
	SF(ODM0_OPTC_INPUT_CLOCK_CONTROL, OPTC_INPUT_CLK_EN, mask_sh),\
	SF(ODM0_OPTC_INPUT_CLOCK_CONTROL, OPTC_INPUT_CLK_ON, mask_sh),\
	SF(ODM0_OPTC_INPUT_CLOCK_CONTROL, OPTC_INPUT_CLK_GATE_DIS, mask_sh),\
	SF(OPPBUF0_OPPBUF_CONTROL, OPPBUF_ACTIVE_WIDTH, mask_sh),\
	SF(OPPBUF0_OPPBUF_3D_PARAMETERS_0, OPPBUF_3D_VACT_SPACE1_SIZE, mask_sh),\
	SF(VTG0_CONTROL, VTG0_ENABLE, mask_sh),\
	SF(VTG0_CONTROL, VTG0_FP2, mask_sh),\
	SF(VTG0_CONTROL, VTG0_VCOUNT_INIT, mask_sh)

#define TG_COMMON_MASK_SH_LIST_DCN1_0(mask_sh)\
	TG_COMMON_MASK_SH_LIST_DCN(mask_sh),\
	SF(OTG0_OTG_TEST_PATTERN_PARAMETERS, OTG_TEST_PATTERN_INC0, mask_sh),\
	SF(OTG0_OTG_TEST_PATTERN_PARAMETERS, OTG_TEST_PATTERN_INC1, mask_sh),\
	SF(OTG0_OTG_TEST_PATTERN_PARAMETERS, OTG_TEST_PATTERN_VRES, mask_sh),\
	SF(OTG0_OTG_TEST_PATTERN_PARAMETERS, OTG_TEST_PATTERN_HRES, mask_sh),\
	SF(OTG0_OTG_TEST_PATTERN_PARAMETERS, OTG_TEST_PATTERN_RAMP0_OFFSET, mask_sh),\
	SF(OTG0_OTG_TEST_PATTERN_CONTROL, OTG_TEST_PATTERN_EN, mask_sh),\
	SF(OTG0_OTG_TEST_PATTERN_CONTROL, OTG_TEST_PATTERN_MODE, mask_sh),\
	SF(OTG0_OTG_TEST_PATTERN_CONTROL, OTG_TEST_PATTERN_DYNAMIC_RANGE, mask_sh),\
	SF(OTG0_OTG_TEST_PATTERN_CONTROL, OTG_TEST_PATTERN_COLOR_FORMAT, mask_sh),\
	SF(OTG0_OTG_TEST_PATTERN_COLOR, OTG_TEST_PATTERN_MASK, mask_sh),\
	SF(OTG0_OTG_TEST_PATTERN_COLOR, OTG_TEST_PATTERN_DATA, mask_sh),\
	SF(ODM0_OPTC_DATA_SOURCE_SELECT, OPTC_SRC_SEL, mask_sh)

#define TG_REG_FIELD_LIST(type) \
	type VSTARTUP_START;\
	type VUPDATE_OFFSET;\
	type VUPDATE_WIDTH;\
	type VREADY_OFFSET;\
	type OTG_BLANK_DATA_EN;\
	type OTG_BLANK_DE_MODE;\
	type OTG_CURRENT_BLANK_STATE;\
	type OTG_MASTER_UPDATE_LOCK;\
	type OTG_UPDATE_PENDING;\
	type OTG_MASTER_UPDATE_LOCK_SEL;\
	type OTG_BLANK_DATA_DOUBLE_BUFFER_EN;\
	type OTG_H_TOTAL;\
	type OTG_H_BLANK_START;\
	type OTG_H_BLANK_END;\
	type OTG_H_SYNC_A_START;\
	type OTG_H_SYNC_A_END;\
	type OTG_H_SYNC_A_POL;\
	type OTG_H_TIMING_DIV_BY2;\
	type OTG_V_TOTAL;\
	type OTG_V_BLANK_START;\
	type OTG_V_BLANK_END;\
	type OTG_V_SYNC_A_START;\
	type OTG_V_SYNC_A_END;\
	type OTG_V_SYNC_A_POL;\
	type OTG_INTERLACE_ENABLE;\
	type OTG_MASTER_EN;\
	type OTG_START_POINT_CNTL;\
	type OTG_DISABLE_POINT_CNTL;\
	type OTG_FIELD_NUMBER_CNTL;\
	type OTG_STEREO_EN;\
	type OTG_STEREO_SYNC_OUTPUT_LINE_NUM;\
	type OTG_STEREO_SYNC_OUTPUT_POLARITY;\
	type OTG_STEREO_EYE_FLAG_POLARITY;\
	type OTG_STEREO_CURRENT_EYE;\
	type OTG_DISABLE_STEREOSYNC_OUTPUT_FOR_DP;\
	type OTG_3D_STRUCTURE_EN;\
	type OTG_3D_STRUCTURE_V_UPDATE_MODE;\
	type OTG_3D_STRUCTURE_STEREO_SEL_OVR;\
	type OTG_V_TOTAL_MAX;\
	type OTG_V_TOTAL_MIN;\
	type OTG_V_TOTAL_MIN_SEL;\
	type OTG_V_TOTAL_MAX_SEL;\
	type OTG_FORCE_LOCK_ON_EVENT;\
	type OTG_SET_V_TOTAL_MIN_MASK_EN;\
	type OTG_SET_V_TOTAL_MIN_MASK;\
	type OTG_FORCE_COUNT_NOW_CLEAR;\
	type OTG_FORCE_COUNT_NOW_MODE;\
	type OTG_FORCE_COUNT_NOW_OCCURRED;\
	type OTG_TRIGA_SOURCE_SELECT;\
	type OTG_TRIGA_SOURCE_PIPE_SELECT;\
	type OTG_TRIGA_RISING_EDGE_DETECT_CNTL;\
	type OTG_TRIGA_FALLING_EDGE_DETECT_CNTL;\
	type OTG_STATIC_SCREEN_EVENT_MASK;\
	type OTG_STATIC_SCREEN_FRAME_COUNT;\
	type OTG_FRAME_COUNT;\
	type OTG_V_BLANK;\
	type OTG_V_ACTIVE_DISP;\
	type OTG_HORZ_COUNT;\
	type OTG_VERT_COUNT;\
	type OTG_VERT_COUNT_NOM;\
	type OTG_BLACK_COLOR_B_CB;\
	type OTG_BLACK_COLOR_G_Y;\
	type OTG_BLACK_COLOR_R_CR;\
	type OTG_TEST_PATTERN_INC0;\
	type OTG_TEST_PATTERN_INC1;\
	type OTG_TEST_PATTERN_VRES;\
	type OTG_TEST_PATTERN_HRES;\
	type OTG_TEST_PATTERN_RAMP0_OFFSET;\
	type OTG_TEST_PATTERN_EN;\
	type OTG_TEST_PATTERN_MODE;\
	type OTG_TEST_PATTERN_DYNAMIC_RANGE;\
	type OTG_TEST_PATTERN_COLOR_FORMAT;\
	type OTG_TEST_PATTERN_MASK;\
	type OTG_TEST_PATTERN_DATA;\
	type OTG_BUSY;\
	type OTG_CLOCK_EN;\
	type OTG_CLOCK_ON;\
	type OTG_CLOCK_GATE_DIS;\
	type OPTC_INPUT_CLK_EN;\
	type OPTC_INPUT_CLK_ON;\
	type OPTC_INPUT_CLK_GATE_DIS;\
	type OPTC_SRC_SEL;\
	type OPTC_SEG0_SRC_SEL;\
	type OPPBUF_ACTIVE_WIDTH;\
	type OPPBUF_3D_VACT_SPACE1_SIZE;\
	type VTG0_ENABLE;\
	type VTG0_FP2;\
	type VTG0_VCOUNT_INIT;

struct dcn_tg_shift {
	TG_REG_FIELD_LIST(uint8_t)
};

struct dcn_tg_mask {
	TG_REG_FIELD_LIST(uint32_t)
};

struct dcn10_timing_generator {
	struct timing_generator base;

	const struct dcn_tg_registers *tg_regs;
	const struct dcn_tg_shift *tg_shift;
	const struct dcn_tg_mask *tg_mask;

	enum controller_id controller_id;

	uint32_t max_h_total;
	uint32_t max_v_total;

	uint32_t min_h_blank;

	uint32_t min_h_sync_width;
	uint32_t min_v_sync_width;
	uint32_t min_v_blank;
	uint32_t min_v_blank_interlace;
};

void dcn10_timing_generator_init(struct dcn10_timing_generator *tg);

#endif /* __DC_TIMING_GENERATOR_DCN10_H__ */
