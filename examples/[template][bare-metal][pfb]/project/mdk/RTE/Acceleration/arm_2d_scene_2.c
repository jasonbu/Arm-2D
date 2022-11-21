/*
 * Copyright (c) 2009-2022 Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*============================ INCLUDES ======================================*/

#include "arm_2d.h"

#ifdef __RTE_ACCELERATION_ARM_2D_SCENE2__

#define __USER_SCENE2_IMPLEMENT__
#include "arm_2d_scene_2.h"

#include "arm_2d_helper.h"
#include "arm_extra_controls.h"

#include <stdlib.h>
#include <string.h>

#if defined(__clang__)
#   pragma clang diagnostic push
#   pragma clang diagnostic ignored "-Wunknown-warning-option"
#   pragma clang diagnostic ignored "-Wreserved-identifier"
#   pragma clang diagnostic ignored "-Wsign-conversion"
#   pragma clang diagnostic ignored "-Wpadded"
#   pragma clang diagnostic ignored "-Wcast-qual"
#   pragma clang diagnostic ignored "-Wcast-align"
#   pragma clang diagnostic ignored "-Wmissing-field-initializers"
#   pragma clang diagnostic ignored "-Wgnu-zero-variadic-macro-arguments"
#   pragma clang diagnostic ignored "-Wmissing-prototypes"
#   pragma clang diagnostic ignored "-Wunused-variable"
#   pragma clang diagnostic ignored "-Wgnu-statement-expression"
#   pragma clang diagnostic ignored "-Wdeclaration-after-statement"
#   pragma clang diagnostic ignored "-Wunused-function"
#   pragma clang diagnostic ignored "-Wmissing-declarations"
#   pragma clang diagnostic ignored "-Wgnu-variable-sized-type-not-at-end"
#elif __IS_COMPILER_ARM_COMPILER_5__
#elif __IS_COMPILER_GCC__
#   pragma GCC diagnostic push
#   pragma GCC diagnostic ignored "-Wformat="
#   pragma GCC diagnostic ignored "-Wpedantic"
#endif

/*============================ MACROS ========================================*/

#if __GLCD_CFG_COLOUR_DEPTH__ == 8

#   define c_tileCMSISLogo          c_tileCMSISLogoGRAY8

#elif __GLCD_CFG_COLOUR_DEPTH__ == 16

#   define c_tileCMSISLogo          c_tileCMSISLogoRGB565

#elif __GLCD_CFG_COLOUR_DEPTH__ == 32

#   define c_tileCMSISLogo          c_tileCMSISLogoCCCA8888
#else
#   error Unsupported colour depth!
#endif

/*============================ MACROFIED FUNCTIONS ===========================*/
#undef this
#define this (*ptThis)

/*============================ TYPES =========================================*/




/*============================ GLOBAL VARIABLES ==============================*/
extern 
const arm_2d_tile_t c_tileListCoverMask;

extern
const arm_2d_tile_t c_tileWhiteDotMask;
/*============================ PROTOTYPES ====================================*/


/*============================ LOCAL VARIABLES ===============================*/
/*============================ IMPLEMENTATION ================================*/

static void __on_scene2_depose(arm_2d_scene_t *ptScene)
{
    user_scene_2_t *ptThis = (user_scene_2_t *)ptScene;
    ARM_2D_UNUSED(ptThis);
    
    ptScene->ptPlayer = NULL;
    
    /* reset timestamp */
    arm_foreach(int64_t,this.lTimestamp, ptItem) {
        *ptItem = 0;
    }

    if (this.bUserAllocated) {
        free(ptScene);
    }
}

/*----------------------------------------------------------------------------*
 * Scene 2                                                                    *
 *----------------------------------------------------------------------------*/

static void __on_scene2_background_start(arm_2d_scene_t *ptScene)
{
    user_scene_2_t *ptThis = (user_scene_2_t *)ptScene;
    ARM_2D_UNUSED(ptThis);

}

static void __on_scene2_background_complete(arm_2d_scene_t *ptScene)
{
    user_scene_2_t *ptThis = (user_scene_2_t *)ptScene;
    ARM_2D_UNUSED(ptThis);

}


static void __on_scene2_frame_start(arm_2d_scene_t *ptScene)
{
    user_scene_2_t *ptThis = (user_scene_2_t *)ptScene;
    ARM_2D_UNUSED(ptThis);

}

static void __on_scene2_frame_complete(arm_2d_scene_t *ptScene)
{
    user_scene_2_t *ptThis = (user_scene_2_t *)ptScene;
    ARM_2D_UNUSED(ptThis);
    
    if (arm_2d_helper_is_time_out(10000, &this.lTimestamp[0])) {
        numer_list_move_selection(&this.tNumberList[0], 100, 10000);
    }
    
    if (arm_2d_helper_is_time_out(10000, &this.lTimestamp[1])) {
        numer_list_move_selection(&this.tNumberList[1], 10, 10000);
    }
    
    if (arm_2d_helper_is_time_out(10000, &this.lTimestamp[2])) {
        numer_list_move_selection(&this.tNumberList[2], 1, 10000);
    }
    
    if (arm_2d_helper_is_time_out(10, &this.lTimestamp[3])) {
        this.iProgress += 4;
        if (this.iProgress > 1000) {
            this.iProgress = 0;
        }
    }
    
//    /* switch to next scene after 3s */
//    if (arm_2d_helper_is_time_out(3000, &this.lTimestamp)) {
//        arm_2d_scene_player_switch_to_next_scene(ptScene->ptPlayer);
//    }
}

static
IMPL_PFB_ON_DRAW(__pfb_draw_scene2_background_handler)
{
    user_scene_2_t *ptThis = (user_scene_2_t *)pTarget;
    ARM_2D_UNUSED(ptTile);
    ARM_2D_UNUSED(bIsNewFrame);
    /*-----------------------draw back ground begin-----------------------*/



    /*-----------------------draw back ground end  -----------------------*/
    arm_2d_op_wait_async(NULL);

    return arm_fsm_rt_cpl;
}

static
IMPL_PFB_ON_DRAW(__pfb_draw_scene2_handler)
{
    user_scene_2_t *ptThis = (user_scene_2_t *)pTarget;
    ARM_2D_UNUSED(ptTile);
    ARM_2D_UNUSED(bIsNewFrame);
    
    /*-----------------------draw the foreground begin-----------------------*/

    /* following code is just a demo, you can remove them */
    
    arm_2d_fill_colour(ptTile, NULL, GLCD_COLOR_BLACK);

    arm_2d_align_centre(ptTile->tRegion, 150, 80) {

        __centre_region.tLocation.iX += 60;
        __centre_region.tSize.iWidth = 30;
        while(arm_fsm_rt_cpl != number_list_show(   &this.tNumberList[2], 
                                                    ptTile, 
                                                    &__centre_region, 
                                                    bIsNewFrame));
        __centre_region.tLocation.iX += 30;
        while(arm_fsm_rt_cpl != number_list_show(   &this.tNumberList[1], 
                                                    ptTile, 
                                                    &__centre_region, 
                                                    bIsNewFrame));
        __centre_region.tLocation.iX += 30;
        while(arm_fsm_rt_cpl != number_list_show(   &this.tNumberList[0], 
                                                    ptTile, 
                                                    &__centre_region, 
                                                    bIsNewFrame));
        
        __centre_region.tLocation.iX -= 150;
        __centre_region.tSize.iWidth = 60;
        progress_wheel_show(&this.tWheel,
                            ptTile, 
                            &__centre_region,       
                            this.iProgress,         /* progress 0~1000 */
                            255 - 32,               /* opacity */
                            bIsNewFrame);
    }
    
    arm_2d_align_top_right( ptTile->tRegion, 
                            c_tileWhiteDotMask.tRegion.tSize.iWidth + 10,
                            c_tileWhiteDotMask.tRegion.tSize.iHeight) {
        
        if (bIsNewFrame) {
            int32_t iResult;
            arm_2d_helper_time_cos_slider(0, 255, 2000, 0, &iResult);
            this.chOpacity = (uint8_t)iResult;
        }
        
        arm_2d_fill_colour_with_mask_and_opacity(ptTile,
                                                 &__top_right_region,
                                                 &c_tileWhiteDotMask,
                                                 (__arm_2d_color_t){GLCD_COLOR_RED},
                                                 this.chOpacity);
    }
    
//    arm_2d_align_centre(ptTile->tRegion, 100, 100) {
//        static arm_2d_location_t s_tOffset = {0,0};
//        if (bIsNewFrame) {
//            static int64_t s_lTimestamp[2] = {0};
//            int32_t iXOffset, iYOffset;
//            arm_2d_helper_time_cos_slider(0, 100, 2000, 0, &iXOffset, &s_lTimestamp[0]);
//            arm_2d_helper_time_cos_slider(0, 100, 2000, ARM_2D_ANGLE(90), &iYOffset, &s_lTimestamp[1]);
//            s_tOffset.iX = iXOffset;
//            s_tOffset.iY = iYOffset;
//        }
//        
//        __centre_region.tLocation.iX += 100 - s_tOffset.iX;
//        __centre_region.tLocation.iY += s_tOffset.iY;
//        arm_2d_fill_colour_with_mask(ptTile,
//                                     &__centre_region,
//                                     &c_tileWhiteDotMask,
//                                     (__arm_2d_color_t){GLCD_COLOR_RED});
//    
//    }


    /* draw text at the top-left corner */
    arm_lcd_text_set_target_framebuffer((arm_2d_tile_t *)ptTile);
    arm_lcd_text_set_font(&ARM_2D_FONT_6x8.use_as__arm_2d_font_t);
    arm_lcd_text_set_colour(GLCD_COLOR_RED, GLCD_COLOR_WHITE);
    arm_lcd_text_location(0,0);
    arm_lcd_puts("scene 2");

    /*-----------------------draw the foreground end  -----------------------*/
    arm_2d_op_wait_async(NULL);

    return arm_fsm_rt_cpl;
}

static 
IMPL_PFB_ON_DRAW(__arm_2d_number_list_draw_cover)
{
    ARM_2D_UNUSED(bIsNewFrame);
    
    number_list_t *ptThis = (number_list_t *)pTarget;

    arm_2d_align_centre(ptTile->tRegion, c_tileListCoverMask.tRegion.tSize) {
        arm_2d_fill_colour_with_mask(   ptTile, 
                                        &__centre_region, 
                                        &c_tileListCoverMask, 
                                        (__arm_2d_color_t){GLCD_COLOR_BLACK});
    }

    arm_2d_op_wait_async(NULL);
    
    return arm_fsm_rt_cpl;
}

ARM_NONNULL(1)
user_scene_2_t *__arm_2d_scene2_init(   arm_2d_scene_player_t *ptDispAdapter, 
                                        user_scene_2_t *ptScene)
{

    bool bUserAllocated = false;
    assert(NULL != ptDispAdapter);

    if (NULL == ptScene) {
        ptScene = (user_scene_2_t *)malloc(sizeof(user_scene_2_t));
        assert(NULL != ptScene);
        if (NULL == ptScene) {
            return NULL;
        }
        bUserAllocated = true;
    } else {
        memset(ptScene, 0, sizeof(user_scene_2_t));
    }
    
    *ptScene = (user_scene_2_t){
        .use_as__arm_2d_scene_t = {
        /* Please uncommon the callbacks if you need them
         */
        //.fnBackground   = &__pfb_draw_scene2_background_handler,
        .fnScene        = &__pfb_draw_scene2_handler,
        //.ptDirtyRegion  = (arm_2d_region_list_item_t *)s_tDirtyRegions,
        

        //.fnOnBGStart    = &__on_scene2_background_start,
        //.fnOnBGComplete = &__on_scene2_background_complete,
        //.fnOnFrameStart = &__on_scene2_frame_start,
        .fnOnFrameCPL   = &__on_scene2_frame_complete,
        .fnDepose       = &__on_scene2_depose,
        },
        .bUserAllocated = bUserAllocated,
    };

    user_scene_2_t *ptThis = (user_scene_2_t *)ptScene;

    progress_wheel_init(&this.tWheel, 60, GLCD_COLOR_GREEN);

    /* initialize number list */
    do {
        number_list_cfg_t tCFG = {
            .hwCount = 10,
            .nStart = 0,
            .iDelta = 1,
            .tFontColour = GLCD_COLOR_WHITE,
            .tBackgroundColour = GLCD_COLOR_BLACK,
            .chNextPadding = 3,
            .chPrviousePadding = 3,
            .tListSize = {
                .iHeight = 80,
                .iWidth = 28,
            },
            .ptFont = (arm_2d_font_t *)&ARM_2D_FONT_A4_DIGITS_ONLY,
            /* draw list cover */
            .fnOnDrawListCover = &__arm_2d_number_list_draw_cover,
        };
        number_list_init(&this.tNumberList[0], &tCFG);
        number_list_init(&this.tNumberList[1], &tCFG);
    } while(0);
    
    /* initialize number list */
    do {
        number_list_cfg_t tCFG = {
            .hwCount = 6,
            .nStart = 0,
            .iDelta = 1,
            .tFontColour = GLCD_COLOR_WHITE,
            .tBackgroundColour = GLCD_COLOR_BLACK,
            .chNextPadding = 3,
            .chPrviousePadding = 3,
            .tListSize = {
                .iHeight = 80,
                .iWidth = 28,
            },
            .ptFont = (arm_2d_font_t *)&ARM_2D_FONT_A4_DIGITS_ONLY,
            /* draw list cover */
            .fnOnDrawListCover = &__arm_2d_number_list_draw_cover,
        };
        number_list_init(&this.tNumberList[2], &tCFG);
    } while(0);
    
    numer_list_move_selection(&this.tNumberList[0], 100,   10000);
    numer_list_move_selection(&this.tNumberList[1], 10,    10000);
    numer_list_move_selection(&this.tNumberList[2], 1,     10000);


    arm_2d_scene_player_append_scenes(  ptDispAdapter, 
                                        &ptScene->use_as__arm_2d_scene_t, 
                                        1);

    return ptScene;
}




#if defined(__clang__)
#   pragma clang diagnostic pop
#endif

#endif
