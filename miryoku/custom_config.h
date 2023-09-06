// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// #include "german.dtsi"
#include "../zmk-nodefree-config/helper.h"
#include "../zmk-nodefree-config/international_chars/german.dtsi"

#define XXX &none

// euro sign
// ZMK_UNICODE_SINGLE(euro_sign, N2, N0, A, C)  // €

// FPS friendly tap layer
#define MIRYOKU_LAYER_GERMAN \
&kp TAB,           &kp Q,             &kp CAPS,          &kp E,             &kp R,             &kp T,             &kp NUM_1,         &kp NUM_2,         &kp NUM_3,       &kp NUM_3,    \
&kp LSHFT,         &kp A,             &kp S,             &kp D,             &kp F,             &kp G,             U_MS_L,            U_MS_D,            U_MS_U,          U_MS_U,       \
&kp ESC,           &kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp LBKT,          &kp COMMA,         &kp DOT,         &kp DOT,      \
U_NP,              U_NP,              &kp LCTRL,         &kp SPC,           &kp LALT,          U_BTN2,            U_BTN1,            U_BTN3,            U_NP,             

// Direct custom layer access
#define MIRYOKU_LAYOUTMAPPING_CORNE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
XXX  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \
XXX  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
XXX  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
               K32  K33  K34       K35  K36  K37

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(GERMAN,  "German") 

#define MIRYOKU_LAYERMAPPING_GERMAN MIRYOKU_MAPPING

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9
#define U_GERMAN   10
