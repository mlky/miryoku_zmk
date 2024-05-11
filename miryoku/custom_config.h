// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku


#define XXX &none

#define MIRYOKU_LAYOUTMAPPING_CARDINAL(\
     K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39 \
)\
&kp ESC K00  K01  K02  K03  K04                           K05  K06  K07  K08  K09  XXX  \
XXX  K10  K11  K12  K13  K14                           K15  K16  K17  K18  K19  XXX  \
XXX  K20  K21  K22  K23  K24  XXX                 XXX  K25  K26  K27  K28  K29  XXX  \
               &kp C_MUTE  K32  K33  K34       K35  K36  K37  U_BTN1 \
               U_MS_U                                                 &kp UP \
          U_MS_L U_BTN1 U_MS_R                                     &kp LEFT  &kp SPACE  &kp RIGHT \
               U_MS_D                                                 &kp DOWN  


#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base",   sensor-bindings = < &inc_dec_kp U_MS_D U_MS_U &inc_dec_kp U_MS_D U_MS_U &inc_dec_kp U_MS_D U_MS_U &inc_dec_kp U_MS_D U_MS_U> ;) \
MIRYOKU_X(EXTRA,  "Extra",  sensor-bindings = < &inc_dec_kp U_MS_D U_MS_U &inc_dec_kp U_MS_D U_MS_U &inc_dec_kp U_MS_D U_MS_U &inc_dec_kp U_MS_D U_MS_U> ;) \
MIRYOKU_X(TAP,    "Tap",    ) \
MIRYOKU_X(BUTTON, "Button", ) \
MIRYOKU_X(NAV,    "Nav",    sensor-bindings = < &inc_dec_kp U_MS_D U_MS_U &inc_dec_kp U_MS_D U_MS_U &inc_dec_kp U_MS_D U_MS_U &inc_dec_kp U_MS_D U_MS_U> ;) \
MIRYOKU_X(MOUSE,  "Mouse",  ) \
MIRYOKU_X(MEDIA,  "Media",  sensor-bindings = < &inc_dec_kp U_MS_D U_MS_U &inc_dec_kp U_MS_D U_MS_U &inc_dec_kp U_MS_D U_MS_U &inc_dec_kp U_MS_D U_MS_U> ;) \
MIRYOKU_X(NUM,    "Num",    ) \
MIRYOKU_X(SYM,    "Sym",    ) \
MIRYOKU_X(FUN,    "Fun",    )

