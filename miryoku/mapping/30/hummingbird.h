// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#if !defined (MIRYOKU_LAYOUTMAPPING_HUMMINGBIRD)

#define MIRYOKU_LAYOUTMAPPING_HUMMINGBIRD( \
K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
K00  K01  K02  K03  K04       K05  K06  K07  K08  K09 \
K10  K11  K12  K13  K14       K15  K16  K17  K18  K19 \
     K21  K22  K23                 K26  K27  K28 \
               K34  K33       K36  K35

//#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTPINKIE 1 2
//#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTINNERINDEX 2 3
//#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTINNERINDEX 6 7
//#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTPINKIE 7 8

#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTPINKIE 1 2
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTINNERINDEX 21 22
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTINNERINDEX 23 24
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTPINKIE 7 8
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS

#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 26 27
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 28 29
#define MIRYOKU_KLUDGE_THUMBCOMBOS

#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_HUMMINGBIRD
