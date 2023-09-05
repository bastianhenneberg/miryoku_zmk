// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define XXX &none

// FPS friendly tap layer
#define MIRYOKU_LAYER_GAME \
&kp TAB,           &kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp NUM_4,         \
&kp LSHFT,         &kp A,             &kp S,             &kp D,             &kp F,             &kp G,             U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            \
&kp ESC,           &kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp LBKT,          &kp COMMA,         &kp DOT,           &kp RBKT,         \
U_NP,              U_NP,              &kp LCTRL,         &kp SPC,           &kp LALT,          U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

#define MIRYOKU_LAYER_DONE \
&kp N1,            &kp N2,            &kp N3,            &kp N4,            &kp TILDE,         U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
&kp F1,            &kp F2,            &kp F3,            &kp F4,            &kp F5,            U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
&kp Q,             &kp W,             &kp C,             &kp I,             &kp T,             U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
U_NP,              U_NP,              U_LT(U_DTWO, ESC), &kp SPC,           &kp LSHFT,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_DTWO \
&kp N1,            &kp N2,            &kp N3,            &kp N4,            &kp TILDE,         U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
&kp F6,            &kp F7,            &kp F8,            &kp F9,            &kp F10,           U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
&kp P,             &kp M,             &kp S,             &kp I,             &kp T,             U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
U_NP,              U_NP,              U_NA,              &kp SPC,           &kp LSHFT,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP


#define MIRYOKU_LAYOUTMAPPING_CORNE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
XXX  K00  K01  K02  K03  K04       &to U_GAME K05  K06  K07  K08  K09  XXX \
XXX  K10  K11  K12  K13  K14                  K15  K16  K17  K18  K19  XXX \
XXX  K20  K21  K22  K23  K24       &to U_DONE K25  K26  K27  K28  K29  XXX \
               K32  K33  K34       &to U_BASE K35  K36  K37
