
/* Generated on Tue Apr 19 21:07:23 2022 from -i */
/* Re-sized : True */
/* Rotated : 0.0 deg */



#include "arm_2d.h"

#if defined(__clang__)
#   pragma clang diagnostic push
#   pragma clang diagnostic ignored "-Wunknown-warning-option"
#   pragma clang diagnostic ignored "-Wreserved-identifier"
#   pragma clang diagnostic ignored "-Wmissing-variable-declarations"
#   pragma clang diagnostic ignored "-Wcast-qual"
#elif defined(__IS_COMPILER_ARM_COMPILER_5__)
#   pragma diag_suppress=1296
#endif


static const uint8_t c_bmpStar32Alpha[32*32] = {
/* -0- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x52,
0x52, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

/* -1- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xd5,
0xd5, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

/* -2- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0xff,
0xff, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

/* -3- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0xee, 0xff,
0xff, 0xee, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

/* -4- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa7, 0xff, 0xff,
0xff, 0xff, 0xa7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

/* -5- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0xfd, 0xff, 0xff,
0xff, 0xff, 0xfd, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

/* -6- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xd0, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xd0, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

/* -7- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x77, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0x77, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

/* -8- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0xee, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xee, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

/* -9- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x46, 0xba, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xba, 0x46, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

/* -10- */
0x00, 0x00, 0x00, 0x00, 0x0d, 0x38, 0x76, 0xb6, 0xe8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe8, 0xb6, 0x76, 0x38, 0x0d, 0x00, 0x00, 0x00, 0x00,

/* -11- */
0x0c, 0x2b, 0x66, 0xa7, 0xde, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xde, 0xa7, 0x66, 0x2b, 0x0c,

/* -12- */
0x9f, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x9f,

/* -13- */
0x25, 0xde, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xde, 0x25,

/* -14- */
0x00, 0x3e, 0xf5, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf5, 0x3e, 0x00,

/* -15- */
0x00, 0x00, 0x69, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x69, 0x00, 0x00,

/* -16- */
0x00, 0x00, 0x00, 0x98, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x98, 0x00, 0x00, 0x00,

/* -17- */
0x00, 0x00, 0x00, 0x0b, 0xc3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc3, 0x0b, 0x00, 0x00, 0x00,

/* -18- */
0x00, 0x00, 0x00, 0x00, 0x22, 0xe4, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe4, 0x22, 0x00, 0x00, 0x00, 0x00,

/* -19- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0x46, 0x00, 0x00, 0x00, 0x00, 0x00,

/* -20- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x76, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x76, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

/* -21- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

/* -22- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x49, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x49, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

/* -23- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

/* -24- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x67, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

/* -25- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x77, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x77, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

/* -26- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x87, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x87, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

/* -27- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x97, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xee,
0xee, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x97, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

/* -28- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd6, 0x79, 0x1f,
0x1f, 0x79, 0xd6, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

/* -29- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb5, 0xff, 0xff, 0xff, 0xf9, 0xb6, 0x53, 0x0b, 0x00, 0x00,
0x00, 0x00, 0x0b, 0x53, 0xb6, 0xf9, 0xff, 0xff, 0xff, 0xb5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

/* -30- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc7, 0xff, 0xe3, 0x90, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x90, 0xe3, 0xff, 0xc7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

/* -31- */
0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0xb0, 0x78, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x78, 0xb0, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00,

};

static const uint32_t c_bmpStar32[32*32] = {
/* -0- */
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x52fffffb,
0x52fffffb, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,

/* -1- */
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0bffffff, 0xd5a4e8ff,
0xd5a4e8ff, 0x0bffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,

/* -2- */
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x78ebf8ff, 0xff30d4ff,
0xff30d4ff, 0x78ebf8ff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,

/* -3- */
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x23ffffff, 0xee7fe1ff, 0xff00c1ff,
0xff00c1ff, 0xee7fe1ff, 0x23ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,

/* -4- */
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00030000, 0xa7c9f1ff, 0xff19ceff, 0xff00bfff,
0xff00bfff, 0xff19ceff, 0xa7c9f1ff, 0x00030000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,

/* -5- */
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x48ffffff, 0xfd59daff, 0xff00bfff, 0xff00c0ff,
0xff00c0ff, 0xff00bfff, 0xfd59daff, 0x48ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,

/* -6- */
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0bffffff, 0xd0a5e8ff, 0xff07c6ff, 0xff00c0ff, 0xff00c0ff,
0xff00c0ff, 0xff00c0ff, 0xff07c6ff, 0xd0a5e8ff, 0x0bffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,

/* -7- */
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x77edf8ff, 0xff37d5ff, 0xff00beff, 0xff00c0ff, 0xff00c0ff,
0xff00c0ff, 0xff00c0ff, 0xff00beff, 0xff37d5ff, 0x77edf8ff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,

/* -8- */
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x21ffffff, 0xee7fe1fd, 0xff00c1ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff,
0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c1ff, 0xee7fe1fd, 0x21ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,

/* -9- */
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00030000, 0x15ffffff, 0x46ffffff, 0xbac2f1ff, 0xff19ccff, 0xff00bfff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff,
0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00bfff, 0xff19ccff, 0xbac2f1ff, 0x46ffffff, 0x15ffffff, 0x00030000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,

/* -10- */
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0dffffff, 0x38ffffff, 0x76e2f8ff, 0xb6b0ebff, 0xe87cdfff, 0xff4cd5ff, 0xff18caff, 0xff00bfff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff,
0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00bfff, 0xff18caff, 0xff4cd5ff, 0xe87cdfff, 0xb6b0ebff, 0x76e2f8ff, 0x38ffffff, 0x0dffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000,

/* -11- */
0x0cffffff, 0x2bffffff, 0x66f0faff, 0xa7bbefff, 0xde88e1ff, 0xfe56d5ff, 0xff2ad2ff, 0xff08c8ff, 0xff00c1ff, 0xff00bfff, 0xff00bfff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff,
0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00bfff, 0xff00bfff, 0xff00c1ff, 0xff08c8ff, 0xff2ad2ff, 0xfe56d5ff, 0xde88e1ff, 0xa7bbefff, 0x66f0faff, 0x2bffffff, 0x0cffffff,

/* -12- */
0x9ff8fdff, 0xfc78e0ff, 0xff33d2ff, 0xff0fcaff, 0xff00c2ff, 0xff00bfff, 0xff00bfff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff,
0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00bfff, 0xff00bfff, 0xff00c2ff, 0xff0fcaff, 0xff33d2ff, 0xfc78e0ff, 0x9ff8fdff,

/* -13- */
0x25ffffff, 0xde8de4ff, 0xff01c4ff, 0xff00bfff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff,
0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00bfff, 0xff01c4ff, 0xde8de4ff, 0x25ffffff,

/* -14- */
0x00000000, 0x3efffffa, 0xf573dfff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff,
0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xf573dfff, 0x3efffffa, 0x00000000,

/* -15- */
0x00000000, 0x00000000, 0x69fcffff, 0xff4fd9ff, 0xff00beff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff,
0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00beff, 0xff4fd9ff, 0x69fcffff, 0x00000000, 0x00000000,

/* -16- */
0x00000000, 0x00000000, 0x00040000, 0x98d8f4ff, 0xff2ed3ff, 0xff00beff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff,
0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00beff, 0xff2ed3ff, 0x98d8f4ff, 0x00040000, 0x00000000, 0x00000000,

/* -17- */
0x00000000, 0x00000000, 0x00000000, 0x0bffffff, 0xc3b5eeff, 0xff14cbff, 0xff00bfff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff,
0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00bfff, 0xff14cbff, 0xc3b5eeff, 0x0bffffff, 0x00000000, 0x00000000, 0x00000000,

/* -18- */
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x22ffffff, 0xe491e5ff, 0xff04c4ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff,
0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff04c4ff, 0xe491e5ff, 0x22ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000,

/* -19- */
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x46ffffff, 0xf76cdeff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff,
0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xf76cdeff, 0x46ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,

/* -20- */
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x76f2fcff, 0xff3ad3ff, 0xff00bfff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff,
0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00bfff, 0xff3ad3ff, 0x76f2fcff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,

/* -21- */
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x36ffffff, 0xff52d6ff, 0xff00bfff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff,
0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00bfff, 0xff52d6ff, 0x36ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,

/* -22- */
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x49ffffff, 0xff44d5ff, 0xff00bfff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff,
0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00bfff, 0xff44d5ff, 0x49ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,

/* -23- */
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x58f9fcff, 0xff3ad5ff, 0xff00bfff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff,
0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00bfff, 0xff3ad5ff, 0x58f9fcff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,

/* -24- */
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x67edfaff, 0xff2fd3ff, 0xff00bfff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff,
0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00bfff, 0xff2fd3ff, 0x67edfaff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,

/* -25- */
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x77def6ff, 0xff25d1ff, 0xff00bfff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff,
0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00bfff, 0xff25d1ff, 0x77def6ff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,

/* -26- */
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x87d1f5ff, 0xff1ccfff, 0xff00bfff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00bfff, 0xff00c1ff,
0xff00c1ff, 0xff00bfff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00bfff, 0xff1ccfff, 0x87d1f5ff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,

/* -27- */
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x97c5f1ff, 0xff14cdff, 0xff00bfff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00beff, 0xff00c3ff, 0xff2fd2ff, 0xee79ddff,
0xee79ddff, 0xff2fd2ff, 0xff00c3ff, 0xff00beff, 0xff00c0ff, 0xff00c0ff, 0xff00c0ff, 0xff00bfff, 0xff14cdff, 0x97c5f1ff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,

/* -28- */
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xa7b8ecff, 0xff0dcaff, 0xff00c0ff, 0xff00bfff, 0xff00bfff, 0xff0cc9ff, 0xff4ad7ff, 0xd699e7ff, 0x79e9faff, 0x1fffffff,
0x1fffffff, 0x79e9faff, 0xd699e7ff, 0xff4ad7ff, 0xff0cc9ff, 0xff00bfff, 0xff00bfff, 0xff00c0ff, 0xff0dcaff, 0xa7b8ecff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,

/* -29- */
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00010000, 0xb5adebff, 0xff01c6ff, 0xff00c1ff, 0xff1fcfff, 0xf966daff, 0xb6b8efff, 0x53ffffff, 0x0bffffff, 0x00000000, 0x00000000,
0x00000000, 0x00000000, 0x0bffffff, 0x53ffffff, 0xb6b8efff, 0xf966daff, 0xff1fcfff, 0xff00c1ff, 0xff01c6ff, 0xb5adebff, 0x00010000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,

/* -30- */
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00050000, 0xc7a2e7ff, 0xff38d7ff, 0xe385e2ff, 0x90d6f6ff, 0x31ffffff, 0x00040000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00040000, 0x31ffffff, 0x90d6f6ff, 0xe385e2ff, 0xff38d7ff, 0xc7a2e7ff, 0x00050000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,

/* -31- */
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x05ffffff, 0xb0e9f9ff, 0x78eeffff, 0x19ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x19ffffff, 0x78eeffff, 0xb0e9f9ff, 0x05ffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,

};


extern const arm_2d_tile_t c_tileStar32;
const arm_2d_tile_t c_tileStar32 = {
    .tRegion = {
        .tSize = {
            .iWidth = 32,
            .iHeight = 32,
        },
    },
    .tInfo = {
        .bIsRoot = true,
        .bHasEnforcedColour = true,
        .tColourInfo = {
            .chScheme = ARM_2D_COLOUR_RGBA8888,
        },
    },
    .pwBuffer = (uint32_t*)c_bmpStar32,
};




extern const arm_2d_tile_t c_tileStar32Mask;
const arm_2d_tile_t c_tileStar32Mask = {
    .tRegion = {
        .tSize = {
            .iWidth = 32,
            .iHeight = 32,
        },
    },
    .tInfo = {
        .bIsRoot = true,
        .bHasEnforcedColour = true,
        .tColourInfo = {
            .chScheme = ARM_2D_COLOUR_8BIT,
        },
    },
    .pchBuffer = (uint8_t *)c_bmpStar32Alpha,
};



extern const arm_2d_tile_t c_tileStar32Mask2;
const arm_2d_tile_t c_tileStar32Mask2 = {
    .tRegion = {
        .tSize = {
            .iWidth = 32,
            .iHeight = 32,
        },
    },
    .tInfo = {
        .bIsRoot = true,
        .bHasEnforcedColour = true,
        .tColourInfo = {
            .chScheme = ARM_2D_CHANNEL_8in32,
        },
    },
    .nAddress = ((intptr_t)c_bmpStar32) + 3,
};



#if defined(__clang__)
#   pragma clang diagnostic pop
#elif defined(__IS_COMPILER_ARM_COMPILER_5__)
#   pragma diag_warning=1296
#endif

