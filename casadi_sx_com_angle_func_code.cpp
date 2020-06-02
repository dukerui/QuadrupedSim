/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) casadi_sx_com_angle_func_code_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int long long int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)
#define casadi_sq CASADI_PREFIX(sq)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

casadi_real casadi_sq(casadi_real x) { return x*x;}

static const casadi_int casadi_s0[5] = {1, 1, 0, 1, 0};
static const casadi_int casadi_s1[698] = {694, 1, 0, 694, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552, 553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571, 572, 573, 574, 575, 576, 577, 578, 579, 580, 581, 582, 583, 584, 585, 586, 587, 588, 589, 590, 591, 592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693};
static const casadi_int casadi_s2[7] = {3, 1, 0, 3, 0, 1, 2};

/* com_angle:(cur_t,state[694],com_angle0[3],com_angleT[3])->(com_ang[3]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a6, a7, a8, a9;
  a0=0.;
  a1=arg[0]? arg[0][0] : 0;
  a0=(a0<=a1);
  a2=arg[1]? arg[1][15] : 0;
  a3=(a1<a2);
  a0=(a0&&a3);
  a3=arg[2]? arg[2][0] : 0;
  a4=2.;
  a5=(a1/a2);
  a6=casadi_sq(a5);
  a6=(a5*a6);
  a6=(a4*a6);
  a7=3.;
  a8=casadi_sq(a5);
  a8=(a7*a8);
  a6=(a6-a8);
  a8=1.;
  a6=(a6+a8);
  a3=(a3*a6);
  a9=arg[1]? arg[1][148] : 0;
  a10=-2.;
  a11=casadi_sq(a5);
  a11=(a5*a11);
  a11=(a10*a11);
  a12=casadi_sq(a5);
  a12=(a7*a12);
  a11=(a11+a12);
  a12=(a9*a11);
  a3=(a3+a12);
  a12=arg[1]? arg[1][151] : 0;
  a13=casadi_sq(a5);
  a13=(a5*a13);
  a5=casadi_sq(a5);
  a13=(a13-a5);
  a5=(a12*a13);
  a5=(a5*a2);
  a3=(a3+a5);
  a3=(a0?a3:0);
  a5=(a2<=a1);
  a14=arg[1]? arg[1][16] : 0;
  a15=(a1<a14);
  a5=(a5&&a15);
  a15=(a1-a2);
  a16=(a14-a2);
  a15=(a15/a16);
  a16=casadi_sq(a15);
  a16=(a15*a16);
  a16=(a4*a16);
  a17=casadi_sq(a15);
  a17=(a7*a17);
  a16=(a16-a17);
  a16=(a16+a8);
  a9=(a9*a16);
  a17=casadi_sq(a15);
  a17=(a15*a17);
  a18=casadi_sq(a15);
  a18=(a4*a18);
  a17=(a17-a18);
  a17=(a17+a15);
  a12=(a12*a17);
  a18=(a14-a2);
  a12=(a12*a18);
  a9=(a9+a12);
  a12=arg[1]? arg[1][154] : 0;
  a19=casadi_sq(a15);
  a19=(a15*a19);
  a19=(a10*a19);
  a20=casadi_sq(a15);
  a20=(a7*a20);
  a19=(a19+a20);
  a20=(a12*a19);
  a9=(a9+a20);
  a20=arg[1]? arg[1][157] : 0;
  a21=casadi_sq(a15);
  a21=(a15*a21);
  a15=casadi_sq(a15);
  a21=(a21-a15);
  a15=(a20*a21);
  a22=(a14-a2);
  a15=(a15*a22);
  a9=(a9+a15);
  a9=(a5?a9:0);
  a3=(a3+a9);
  a9=(a14<=a1);
  a15=arg[1]? arg[1][17] : 0;
  a23=(a1<a15);
  a9=(a9&&a23);
  a23=(a1-a14);
  a24=(a15-a14);
  a23=(a23/a24);
  a24=casadi_sq(a23);
  a24=(a23*a24);
  a24=(a4*a24);
  a25=casadi_sq(a23);
  a25=(a7*a25);
  a24=(a24-a25);
  a24=(a24+a8);
  a12=(a12*a24);
  a25=casadi_sq(a23);
  a25=(a23*a25);
  a26=casadi_sq(a23);
  a26=(a4*a26);
  a25=(a25-a26);
  a25=(a25+a23);
  a20=(a20*a25);
  a26=(a15-a14);
  a20=(a20*a26);
  a12=(a12+a20);
  a20=arg[1]? arg[1][160] : 0;
  a27=casadi_sq(a23);
  a27=(a23*a27);
  a27=(a10*a27);
  a28=casadi_sq(a23);
  a28=(a7*a28);
  a27=(a27+a28);
  a28=(a20*a27);
  a12=(a12+a28);
  a28=arg[1]? arg[1][163] : 0;
  a29=casadi_sq(a23);
  a29=(a23*a29);
  a23=casadi_sq(a23);
  a29=(a29-a23);
  a23=(a28*a29);
  a14=(a15-a14);
  a23=(a23*a14);
  a12=(a12+a23);
  a12=(a9?a12:0);
  a3=(a3+a12);
  a12=(a15<=a1);
  a23=arg[1]? arg[1][18] : 0;
  a30=(a1<a23);
  a12=(a12&&a30);
  a30=(a1-a15);
  a31=(a23-a15);
  a30=(a30/a31);
  a31=casadi_sq(a30);
  a31=(a30*a31);
  a31=(a4*a31);
  a32=casadi_sq(a30);
  a32=(a7*a32);
  a31=(a31-a32);
  a31=(a31+a8);
  a20=(a20*a31);
  a32=casadi_sq(a30);
  a32=(a30*a32);
  a33=casadi_sq(a30);
  a33=(a4*a33);
  a32=(a32-a33);
  a32=(a32+a30);
  a28=(a28*a32);
  a33=(a23-a15);
  a28=(a28*a33);
  a20=(a20+a28);
  a28=arg[1]? arg[1][166] : 0;
  a34=casadi_sq(a30);
  a34=(a30*a34);
  a34=(a10*a34);
  a35=casadi_sq(a30);
  a35=(a7*a35);
  a34=(a34+a35);
  a35=(a28*a34);
  a20=(a20+a35);
  a35=arg[1]? arg[1][169] : 0;
  a36=casadi_sq(a30);
  a36=(a30*a36);
  a30=casadi_sq(a30);
  a36=(a36-a30);
  a30=(a35*a36);
  a15=(a23-a15);
  a30=(a30*a15);
  a20=(a20+a30);
  a20=(a12?a20:0);
  a3=(a3+a20);
  a20=(a23<=a1);
  a30=arg[1]? arg[1][19] : 0;
  a37=(a1<a30);
  a20=(a20&&a37);
  a37=(a1-a23);
  a38=(a30-a23);
  a37=(a37/a38);
  a38=casadi_sq(a37);
  a38=(a37*a38);
  a38=(a4*a38);
  a39=casadi_sq(a37);
  a39=(a7*a39);
  a38=(a38-a39);
  a38=(a38+a8);
  a28=(a28*a38);
  a39=casadi_sq(a37);
  a39=(a37*a39);
  a40=casadi_sq(a37);
  a40=(a4*a40);
  a39=(a39-a40);
  a39=(a39+a37);
  a35=(a35*a39);
  a40=(a30-a23);
  a35=(a35*a40);
  a28=(a28+a35);
  a35=arg[1]? arg[1][172] : 0;
  a41=casadi_sq(a37);
  a41=(a37*a41);
  a41=(a10*a41);
  a42=casadi_sq(a37);
  a42=(a7*a42);
  a41=(a41+a42);
  a42=(a35*a41);
  a28=(a28+a42);
  a42=arg[1]? arg[1][175] : 0;
  a43=casadi_sq(a37);
  a43=(a37*a43);
  a37=casadi_sq(a37);
  a43=(a43-a37);
  a37=(a42*a43);
  a23=(a30-a23);
  a37=(a37*a23);
  a28=(a28+a37);
  a28=(a20?a28:0);
  a3=(a3+a28);
  a28=(a30<=a1);
  a37=arg[1]? arg[1][20] : 0;
  a44=(a1<a37);
  a28=(a28&&a44);
  a44=(a1-a30);
  a45=(a37-a30);
  a44=(a44/a45);
  a45=casadi_sq(a44);
  a45=(a44*a45);
  a45=(a4*a45);
  a46=casadi_sq(a44);
  a46=(a7*a46);
  a45=(a45-a46);
  a45=(a45+a8);
  a35=(a35*a45);
  a46=casadi_sq(a44);
  a46=(a44*a46);
  a47=casadi_sq(a44);
  a47=(a4*a47);
  a46=(a46-a47);
  a46=(a46+a44);
  a42=(a42*a46);
  a47=(a37-a30);
  a42=(a42*a47);
  a35=(a35+a42);
  a42=arg[1]? arg[1][178] : 0;
  a48=casadi_sq(a44);
  a48=(a44*a48);
  a48=(a10*a48);
  a49=casadi_sq(a44);
  a49=(a7*a49);
  a48=(a48+a49);
  a49=(a42*a48);
  a35=(a35+a49);
  a49=arg[1]? arg[1][181] : 0;
  a50=casadi_sq(a44);
  a50=(a44*a50);
  a44=casadi_sq(a44);
  a50=(a50-a44);
  a44=(a49*a50);
  a30=(a37-a30);
  a44=(a44*a30);
  a35=(a35+a44);
  a35=(a28?a35:0);
  a3=(a3+a35);
  a35=(a37<=a1);
  a44=arg[1]? arg[1][21] : 0;
  a51=(a1<a44);
  a35=(a35&&a51);
  a51=(a1-a37);
  a52=(a44-a37);
  a51=(a51/a52);
  a52=casadi_sq(a51);
  a52=(a51*a52);
  a52=(a4*a52);
  a53=casadi_sq(a51);
  a53=(a7*a53);
  a52=(a52-a53);
  a52=(a52+a8);
  a42=(a42*a52);
  a53=casadi_sq(a51);
  a53=(a51*a53);
  a54=casadi_sq(a51);
  a54=(a4*a54);
  a53=(a53-a54);
  a53=(a53+a51);
  a49=(a49*a53);
  a54=(a44-a37);
  a49=(a49*a54);
  a42=(a42+a49);
  a49=arg[1]? arg[1][184] : 0;
  a55=casadi_sq(a51);
  a55=(a51*a55);
  a55=(a10*a55);
  a56=casadi_sq(a51);
  a56=(a7*a56);
  a55=(a55+a56);
  a56=(a49*a55);
  a42=(a42+a56);
  a56=arg[1]? arg[1][187] : 0;
  a57=casadi_sq(a51);
  a57=(a51*a57);
  a51=casadi_sq(a51);
  a57=(a57-a51);
  a51=(a56*a57);
  a37=(a44-a37);
  a51=(a51*a37);
  a42=(a42+a51);
  a42=(a35?a42:0);
  a3=(a3+a42);
  a42=(a44<=a1);
  a51=(a1<=a4);
  a42=(a42&&a51);
  a1=(a1-a44);
  a51=(a4-a44);
  a1=(a1/a51);
  a51=casadi_sq(a1);
  a51=(a1*a51);
  a51=(a4*a51);
  a58=casadi_sq(a1);
  a58=(a7*a58);
  a51=(a51-a58);
  a51=(a51+a8);
  a49=(a49*a51);
  a8=casadi_sq(a1);
  a8=(a1*a8);
  a58=casadi_sq(a1);
  a58=(a4*a58);
  a8=(a8-a58);
  a8=(a8+a1);
  a56=(a56*a8);
  a4=(a4-a44);
  a56=(a56*a4);
  a49=(a49+a56);
  a56=arg[3]? arg[3][0] : 0;
  a44=casadi_sq(a1);
  a44=(a1*a44);
  a10=(a10*a44);
  a1=casadi_sq(a1);
  a7=(a7*a1);
  a10=(a10+a7);
  a56=(a56*a10);
  a49=(a49+a56);
  a49=(a42?a49:0);
  a3=(a3+a49);
  if (res[0]!=0) res[0][0]=a3;
  a3=arg[2]? arg[2][1] : 0;
  a3=(a3*a6);
  a49=arg[1]? arg[1][149] : 0;
  a56=(a49*a11);
  a3=(a3+a56);
  a56=arg[1]? arg[1][152] : 0;
  a7=(a56*a13);
  a7=(a7*a2);
  a3=(a3+a7);
  a3=(a0?a3:0);
  a49=(a49*a16);
  a56=(a56*a17);
  a56=(a56*a18);
  a49=(a49+a56);
  a56=arg[1]? arg[1][155] : 0;
  a7=(a56*a19);
  a49=(a49+a7);
  a7=arg[1]? arg[1][158] : 0;
  a1=(a7*a21);
  a1=(a1*a22);
  a49=(a49+a1);
  a49=(a5?a49:0);
  a3=(a3+a49);
  a56=(a56*a24);
  a7=(a7*a25);
  a7=(a7*a26);
  a56=(a56+a7);
  a7=arg[1]? arg[1][161] : 0;
  a49=(a7*a27);
  a56=(a56+a49);
  a49=arg[1]? arg[1][164] : 0;
  a1=(a49*a29);
  a1=(a1*a14);
  a56=(a56+a1);
  a56=(a9?a56:0);
  a3=(a3+a56);
  a7=(a7*a31);
  a49=(a49*a32);
  a49=(a49*a33);
  a7=(a7+a49);
  a49=arg[1]? arg[1][167] : 0;
  a56=(a49*a34);
  a7=(a7+a56);
  a56=arg[1]? arg[1][170] : 0;
  a1=(a56*a36);
  a1=(a1*a15);
  a7=(a7+a1);
  a7=(a12?a7:0);
  a3=(a3+a7);
  a49=(a49*a38);
  a56=(a56*a39);
  a56=(a56*a40);
  a49=(a49+a56);
  a56=arg[1]? arg[1][173] : 0;
  a7=(a56*a41);
  a49=(a49+a7);
  a7=arg[1]? arg[1][176] : 0;
  a1=(a7*a43);
  a1=(a1*a23);
  a49=(a49+a1);
  a49=(a20?a49:0);
  a3=(a3+a49);
  a56=(a56*a45);
  a7=(a7*a46);
  a7=(a7*a47);
  a56=(a56+a7);
  a7=arg[1]? arg[1][179] : 0;
  a49=(a7*a48);
  a56=(a56+a49);
  a49=arg[1]? arg[1][182] : 0;
  a1=(a49*a50);
  a1=(a1*a30);
  a56=(a56+a1);
  a56=(a28?a56:0);
  a3=(a3+a56);
  a7=(a7*a52);
  a49=(a49*a53);
  a49=(a49*a54);
  a7=(a7+a49);
  a49=arg[1]? arg[1][185] : 0;
  a56=(a49*a55);
  a7=(a7+a56);
  a56=arg[1]? arg[1][188] : 0;
  a1=(a56*a57);
  a1=(a1*a37);
  a7=(a7+a1);
  a7=(a35?a7:0);
  a3=(a3+a7);
  a49=(a49*a51);
  a56=(a56*a8);
  a56=(a56*a4);
  a49=(a49+a56);
  a56=arg[3]? arg[3][1] : 0;
  a56=(a56*a10);
  a49=(a49+a56);
  a49=(a42?a49:0);
  a3=(a3+a49);
  if (res[0]!=0) res[0][1]=a3;
  a3=arg[2]? arg[2][2] : 0;
  a3=(a3*a6);
  a6=arg[1]? arg[1][150] : 0;
  a11=(a6*a11);
  a3=(a3+a11);
  a11=arg[1]? arg[1][153] : 0;
  a13=(a11*a13);
  a13=(a13*a2);
  a3=(a3+a13);
  a0=(a0?a3:0);
  a6=(a6*a16);
  a11=(a11*a17);
  a11=(a11*a18);
  a6=(a6+a11);
  a11=arg[1]? arg[1][156] : 0;
  a19=(a11*a19);
  a6=(a6+a19);
  a19=arg[1]? arg[1][159] : 0;
  a21=(a19*a21);
  a21=(a21*a22);
  a6=(a6+a21);
  a5=(a5?a6:0);
  a0=(a0+a5);
  a11=(a11*a24);
  a19=(a19*a25);
  a19=(a19*a26);
  a11=(a11+a19);
  a19=arg[1]? arg[1][162] : 0;
  a27=(a19*a27);
  a11=(a11+a27);
  a27=arg[1]? arg[1][165] : 0;
  a29=(a27*a29);
  a29=(a29*a14);
  a11=(a11+a29);
  a9=(a9?a11:0);
  a0=(a0+a9);
  a19=(a19*a31);
  a27=(a27*a32);
  a27=(a27*a33);
  a19=(a19+a27);
  a27=arg[1]? arg[1][168] : 0;
  a34=(a27*a34);
  a19=(a19+a34);
  a34=arg[1]? arg[1][171] : 0;
  a36=(a34*a36);
  a36=(a36*a15);
  a19=(a19+a36);
  a12=(a12?a19:0);
  a0=(a0+a12);
  a27=(a27*a38);
  a34=(a34*a39);
  a34=(a34*a40);
  a27=(a27+a34);
  a34=arg[1]? arg[1][174] : 0;
  a41=(a34*a41);
  a27=(a27+a41);
  a41=arg[1]? arg[1][177] : 0;
  a43=(a41*a43);
  a43=(a43*a23);
  a27=(a27+a43);
  a20=(a20?a27:0);
  a0=(a0+a20);
  a34=(a34*a45);
  a41=(a41*a46);
  a41=(a41*a47);
  a34=(a34+a41);
  a41=arg[1]? arg[1][180] : 0;
  a48=(a41*a48);
  a34=(a34+a48);
  a48=arg[1]? arg[1][183] : 0;
  a50=(a48*a50);
  a50=(a50*a30);
  a34=(a34+a50);
  a28=(a28?a34:0);
  a0=(a0+a28);
  a41=(a41*a52);
  a48=(a48*a53);
  a48=(a48*a54);
  a41=(a41+a48);
  a48=arg[1]? arg[1][186] : 0;
  a55=(a48*a55);
  a41=(a41+a55);
  a55=arg[1]? arg[1][189] : 0;
  a57=(a55*a57);
  a57=(a57*a37);
  a41=(a41+a57);
  a35=(a35?a41:0);
  a0=(a0+a35);
  a48=(a48*a51);
  a55=(a55*a8);
  a55=(a55*a4);
  a48=(a48+a55);
  a55=arg[3]? arg[3][2] : 0;
  a55=(a55*a10);
  a48=(a48+a55);
  a42=(a42?a48:0);
  a0=(a0+a42);
  if (res[0]!=0) res[0][2]=a0;
  return 0;
}

CASADI_SYMBOL_EXPORT int com_angle(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int com_angle_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int com_angle_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void com_angle_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int com_angle_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void com_angle_release(int mem) {
}

CASADI_SYMBOL_EXPORT void com_angle_incref(void) {
}

CASADI_SYMBOL_EXPORT void com_angle_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int com_angle_n_in(void) { return 4;}

CASADI_SYMBOL_EXPORT casadi_int com_angle_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real com_angle_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* com_angle_name_in(casadi_int i){
  switch (i) {
    case 0: return "cur_t";
    case 1: return "state";
    case 2: return "com_angle0";
    case 3: return "com_angleT";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* com_angle_name_out(casadi_int i){
  switch (i) {
    case 0: return "com_ang";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* com_angle_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    case 2: return casadi_s2;
    case 3: return casadi_s2;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* com_angle_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s2;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int com_angle_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 4;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
