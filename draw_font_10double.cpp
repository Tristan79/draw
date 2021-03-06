/*

Copyright (c) 2016, Embedded Adventures, www.embeddedadventures.com
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

- Redistributions of source code must retain the above copyright notice,
  this list of conditions and the following disclaimer.

- Redistributions in binary form must reproduce the above copyright
  notice, this list of conditions and the following disclaimer in the
  documentation and/or other materials provided with the distribution.

- Neither the name of Embedded Adventures nor the names of its contributors
  may be used to endorse or promote products derived from this software
  without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
THE POSSIBILITY OF SUCH DAMAGE.

Contact us at admin [at] embeddedadventures.com
*/

#include "draw_font_10double.h"

uns16  const font_10double_index[]  = {

    0, // 32 -
    3, // 33 - !
    5, // 34 - "
    10, // 35 - #
    17, // 36 - $
    24, // 37 - %
    31, // 38 - &
    38, // 39 - '
    41, // 40 - (
    45, // 41 - )
    49, // 42 - *
    56, // 43 - +
    62, // 44 - ,
    65, // 45 - -
    69, // 46 - .
    71, // 47 - /
    78, // 48 - 0
    84, // 49 - 1
    90, // 50 - 2
    96, // 51 - 3
    102, // 52 - 4
    109, // 53 - 5
    115, // 54 - 6
    121, // 55 - 7
    127, // 56 - 8
    133, // 57 - 9
    139, // 58 - :
    141, // 59 - ;
    144, // 60 - <
    150, // 61 - =
    155, // 62 - >
    161, // 63 - ?
    167, // 64 - @
    173, // 65 - A
    179, // 66 - B
    185, // 67 - C
    191, // 68 - D
    197, // 69 - E
    203, // 70 - F
    209, // 71 - G
    215, // 72 - H
    221, // 73 - I
    225, // 74 - J
    232, // 75 - K
    238, // 76 - L
    244, // 77 - M
    251, // 78 - N
    257, // 79 - O
    263, // 80 - P
    269, // 81 - Q
    275, // 82 - R
    281, // 83 - S
    287, // 84 - T
    293, // 85 - U
    299, // 86 - V
    306, // 87 - W
    313, // 88 - X
    320, // 89 - Y
    326, // 90 - Z
    333, // 91 - [
    337, // 92 - backslash
    344, // 93 - ]
    348, // 94 - ^
    348, // 95 - _
    353, // 96 - `

};

uns8  const font_10double_data[]  = {

    // 0,  32 -
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
//
//
//

    // 3,  33 - !
 0x37, 0xf0, 0x37, 0xf0,
//   ** *******
//   ** *******

    // 5,  34 - "
 0x00, 0x70, 0x00, 0x70, 0x00, 0x00, 0x00, 0x70, 0x00, 0x70,
//          ***
//          ***
//
//          ***
//          ***

    // 10,  35 - #
 0x0c, 0xc0, 0x3f, 0xf0, 0x3f, 0xf0, 0x0c, 0xc0, 0x3f, 0xf0, 0x3f, 0xf0, 0x0c, 0xc0,
//     **  **
//   **********
//   **********
//     **  **
//   **********
//   **********
//     **  **

    // 17,  36 - $
 0x09, 0xc0, 0x1b, 0xe0, 0x13, 0x20, 0x3f, 0xf0, 0x13, 0x20, 0x1f, 0x60, 0x0e, 0x40,
//     *  ***
//    ** *****
//    *  **  *
//   **********
//    *  **  *
//    ***** **
//     ***  *

    // 24,  37 - %
 0x08, 0x60, 0x04, 0x90, 0x02, 0x90, 0x19, 0x60, 0x24, 0x80, 0x24, 0x40, 0x18, 0x20,
//     *    **
//      *  *  *
//       * *  *
//    **  * **
//   *  *  *
//   *  *   *
//    **     *

    // 31,  38 - &
 0x1c, 0x00, 0x3e, 0xe0, 0x33, 0xf0, 0x33, 0x10, 0x3f, 0xf0, 0x1c, 0xe0, 0x36, 0x00,
//    ***
//   ***** ***
//   **  ******
//   **  **   *
//   **********
//    ***  ***
//   ** **

    // 38,  39 - '
 0x00, 0x80, 0x00, 0x70, 0x00, 0x30,
//         *
//          ***
//           **

    // 41,  40 - (
 0x0f, 0xc0, 0x1f, 0xe0, 0x30, 0x30, 0x20, 0x10,
//     ******
//    ********
//   **      **
//   *        *

    // 45,  41 - )
 0x20, 0x10, 0x30, 0x30, 0x1f, 0xe0, 0x0f, 0xc0,
//   *        *
//   **      **
//    ********
//     ******

    // 49,  42 - *
 0x12, 0x40, 0x0a, 0x80, 0x07, 0x00, 0x1f, 0xc0, 0x07, 0x00, 0x0a, 0x80, 0x12, 0x40,
//    *  *  *
//     * * *
//      ***
//    *******
//      ***
//     * * *
//    *  *  *

    // 56,  43 - +
 0x03, 0x00, 0x03, 0x00, 0x0f, 0xc0, 0x0f, 0xc0, 0x03, 0x00, 0x03, 0x00,
//       **
//       **
//     ******
//     ******
//       **
//       **

    // 62,  44 - ,
 0x20, 0x00, 0x1c, 0x00, 0x0c, 0x00,
//   *
//    ***
//     **

    // 65,  45 - -
 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00,
//       **
//       **
//       **
//       **

    // 69,  46 - .
 0x30, 0x00, 0x30, 0x00,
//   **
//   **

    // 71,  47 - /
 0x18, 0x00, 0x0c, 0x00, 0x06, 0x00, 0x03, 0x00, 0x01, 0x80, 0x00, 0xc0, 0x00, 0x60,
//    **
//     **
//      **
//       **
//        **
//         **
//          **

    // 78,  48 - 0
 0x1f, 0xe0, 0x3f, 0xf0, 0x30, 0x30, 0x30, 0x30, 0x3f, 0xf0, 0x1f, 0xe0,
//    ********
//   **********
//   **      **
//   **      **
//   **********
//    ********

    // 84,  49 - 1
 0x30, 0x40, 0x30, 0x60, 0x3f, 0xf0, 0x3f, 0xf0, 0x30, 0x00, 0x30, 0x00,
//   **     *
//   **     **
//   **********
//   **********
//   **
//   **

    // 90,  50 - 2
 0x38, 0x60, 0x3c, 0x70, 0x36, 0x30, 0x33, 0x30, 0x31, 0xf0, 0x30, 0xe0,
//   ***    **
//   ****   ***
//   ** **   **
//   **  **  **
//   **   *****
//   **    ***

    // 96,  51 - 3
 0x18, 0x60, 0x38, 0x70, 0x33, 0x30, 0x33, 0x30, 0x3f, 0xf0, 0x1c, 0xe0,
//    **    **
//   ***    ***
//   **  **  **
//   **  **  **
//   **********
//    ***  ***

    // 102,  52 - 4
 0x07, 0x00, 0x07, 0x80, 0x06, 0xc0, 0x06, 0x60, 0x3f, 0xf0, 0x3f, 0xf0, 0x06, 0x00,
//      ***
//      ****
//      ** **
//      **  **
//   **********
//   **********
//      **

    // 109,  53 - 5
 0x1b, 0xf0, 0x3b, 0xf0, 0x33, 0x30, 0x33, 0x30, 0x3f, 0x30, 0x1e, 0x30,
//    ** ******
//   *** ******
//   **  **  **
//   **  **  **
//   ******  **
//    ****   **

    // 115,  54 - 6
 0x1f, 0xe0, 0x3f, 0xf0, 0x33, 0x30, 0x33, 0x30, 0x3f, 0x70, 0x1e, 0x60,
//    ********
//   **********
//   **  **  **
//   **  **  **
//   ****** ***
//    ****  **

    // 121,  55 - 7
 0x00, 0x30, 0x00, 0x30, 0x3e, 0x30, 0x3f, 0x30, 0x01, 0xf0, 0x00, 0xf0,
//           **
//           **
//   *****   **
//   ******  **
//        *****
//         ****

    // 127,  56 - 8
 0x1e, 0xe0, 0x3f, 0xf0, 0x33, 0x30, 0x33, 0x30, 0x3f, 0xf0, 0x1e, 0xe0,
//    **** ***
//   **********
//   **  **  **
//   **  **  **
//   **********
//    **** ***

    // 133,  57 - 9
 0x19, 0xe0, 0x3b, 0xf0, 0x33, 0x30, 0x33, 0x30, 0x3f, 0xf0, 0x1f, 0xe0,
//    **  ****
//   *** ******
//   **  **  **
//   **  **  **
//   **********
//    ********

    // 139,  58 - :
 0x0c, 0xc0, 0x0c, 0xc0,
//     **  **
//     **  **

    // 141,  59 - ;
 0x20, 0x00, 0x1d, 0x80, 0x0d, 0x80,
//   *
//    *** **
//     ** **

    // 144,  60 - <
 0x03, 0x00, 0x07, 0x80, 0x0c, 0xc0, 0x18, 0x60, 0x30, 0x30, 0x20, 0x10,
//       **
//      ****
//     **  **
//    **    **
//   **      **
//   *        *

    // 150,  61 - =
 0x06, 0xc0, 0x06, 0xc0, 0x06, 0xc0, 0x06, 0xc0, 0x06, 0xc0,
//      ** **
//      ** **
//      ** **
//      ** **
//      ** **

    // 155,  62 - >
 0x20, 0x10, 0x30, 0x30, 0x18, 0x60, 0x0c, 0xc0, 0x07, 0x80, 0x03, 0x00,
//   *        *
//   **      **
//    **    **
//     **  **
//      ****
//       **

    // 161,  63 - ?
 0x00, 0x60, 0x00, 0x70, 0x36, 0x30, 0x37, 0x30, 0x01, 0xf0, 0x00, 0xe0,
//          **
//          ***
//   ** **   **
//   ** ***  **
//        *****
//         ***

    // 167,  64 - @
 0x0f, 0xc0, 0x10, 0x20, 0x17, 0xa0, 0x14, 0xa0, 0x15, 0xa0, 0x07, 0xc0,
//     ******
//    *      *
//    * **** *
//    * *  * *
//    * * ** *
//      *****

    // 173,  65 - A
 0x3f, 0xe0, 0x3f, 0xf0, 0x03, 0x30, 0x03, 0x30, 0x3f, 0xf0, 0x3f, 0xe0,
//   *********
//   **********
//       **  **
//       **  **
//   **********
//   *********

    // 179,  66 - B
 0x3f, 0xf0, 0x3f, 0xf0, 0x33, 0x30, 0x33, 0x30, 0x3f, 0xf0, 0x1c, 0xe0,
//   **********
//   **********
//   **  **  **
//   **  **  **
//   **********
//    ***  ***

    // 185,  67 - C
 0x1f, 0xe0, 0x3f, 0xf0, 0x30, 0x30, 0x30, 0x30, 0x38, 0x70, 0x18, 0x60,
//    ********
//   **********
//   **      **
//   **      **
//   ***    ***
//    **    **

    // 191,  68 - D
 0x3f, 0xf0, 0x3f, 0xf0, 0x30, 0x30, 0x30, 0x30, 0x3f, 0xf0, 0x1f, 0xe0,
//   **********
//   **********
//   **      **
//   **      **
//   **********
//    ********

    // 197,  69 - E
 0x3f, 0xf0, 0x3f, 0xf0, 0x33, 0x30, 0x33, 0x30, 0x33, 0x30, 0x30, 0x30,
//   **********
//   **********
//   **  **  **
//   **  **  **
//   **  **  **
//   **      **

    // 203,  70 - F
 0x3f, 0xf0, 0x3f, 0xf0, 0x03, 0x30, 0x03, 0x30, 0x03, 0x30, 0x00, 0x30,
//   **********
//   **********
//       **  **
//       **  **
//       **  **
//           **

    // 209,  71 - G
 0x1f, 0xe0, 0x3f, 0xf0, 0x30, 0x30, 0x36, 0x30, 0x3e, 0x70, 0x3e, 0x60,
//    ********
//   **********
//   **      **
//   ** **   **
//   *****  ***
//   *****  **

    // 215,  72 - H
 0x3f, 0xf0, 0x3f, 0xf0, 0x03, 0x00, 0x03, 0x00, 0x3f, 0xf0, 0x3f, 0xf0,
//   **********
//   **********
//       **
//       **
//   **********
//   **********

    // 221,  73 - I
 0x30, 0x30, 0x3f, 0xf0, 0x3f, 0xf0, 0x30, 0x30,
//   **      **
//   **********
//   **********
//   **      **

    // 225,  74 - J
 0x18, 0x00, 0x38, 0x00, 0x30, 0x00, 0x30, 0x30, 0x3f, 0xf0, 0x1f, 0xf0, 0x00, 0x30,
//    **
//   ***
//   **
//   **      **
//   **********
//    *********
//           **

    // 232,  75 - K
 0x3f, 0xf0, 0x3f, 0xf0, 0x03, 0x00, 0x07, 0x80, 0x3c, 0xf0, 0x38, 0x70,
//   **********
//   **********
//       **
//      ****
//   ****  ****
//   ***    ***

    // 238,  76 - L
 0x3f, 0xf0, 0x3f, 0xf0, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00,
//   **********
//   **********
//   **
//   **
//   **
//   **

    // 244,  77 - M
 0x3f, 0xf0, 0x3f, 0xf0, 0x00, 0xe0, 0x01, 0xc0, 0x00, 0xe0, 0x3f, 0xf0, 0x3f, 0xf0,
//   **********
//   **********
//         ***
//        ***
//         ***
//   **********
//   **********

    // 251,  78 - N
 0x3f, 0xf0, 0x3f, 0xf0, 0x01, 0xc0, 0x07, 0x00, 0x3f, 0xf0, 0x3f, 0xf0,
//   **********
//   **********
//        ***
//      ***
//   **********
//   **********

    // 257,  79 - O
 0x1f, 0xe0, 0x3f, 0xf0, 0x30, 0x30, 0x30, 0x30, 0x3f, 0xf0, 0x1f, 0xe0,
//    ********
//   **********
//   **      **
//   **      **
//   **********
//    ********

    // 263,  80 - P
 0x3f, 0xf0, 0x3f, 0xf0, 0x03, 0x30, 0x03, 0x30, 0x03, 0xf0, 0x01, 0xe0,
//   **********
//   **********
//       **  **
//       **  **
//       ******
//        ****

    // 269,  81 - Q
 0x1f, 0xe0, 0x3f, 0xf0, 0x30, 0x30, 0x38, 0x30, 0x1f, 0xf0, 0x2f, 0xe0,
//    ********
//   **********
//   **      **
//   ***     **
//    *********
//   * *******

    // 275,  82 - R
 0x3f, 0xf0, 0x3f, 0xf0, 0x07, 0x30, 0x0f, 0x30, 0x3b, 0xf0, 0x31, 0xe0,
//   **********
//   **********
//      ***  **
//     ****  **
//   *** ******
//   **   ****

    // 281,  83 - S
 0x18, 0xe0, 0x39, 0xf0, 0x33, 0xb0, 0x37, 0x30, 0x3e, 0x70, 0x1c, 0x60,
//    **   ***
//   ***  *****
//   **  *** **
//   ** ***  **
//   *****  ***
//    ***   **

    // 287,  84 - T
 0x00, 0x30, 0x00, 0x30, 0x3f, 0xf0, 0x3f, 0xf0, 0x00, 0x30, 0x00, 0x30,
//           **
//           **
//   **********
//   **********
//           **
//           **

    // 293,  85 - U
 0x1f, 0xf0, 0x3f, 0xf0, 0x30, 0x00, 0x30, 0x00, 0x3f, 0xf0, 0x1f, 0xf0,
//    *********
//   **********
//   **
//   **
//   **********
//    *********

    // 299,  86 - V
 0x07, 0xf0, 0x0f, 0xf0, 0x18, 0x00, 0x30, 0x00, 0x18, 0x00, 0x0f, 0xf0, 0x07, 0xf0,
//      *******
//     ********
//    **
//   **
//    **
//     ********
//      *******

    // 306,  87 - W
 0x3f, 0xf0, 0x3f, 0xf0, 0x1c, 0x00, 0x0e, 0x00, 0x1c, 0x00, 0x3f, 0xf0, 0x3f, 0xf0,
//   **********
//   **********
//    ***
//     ***
//    ***
//   **********
//   **********

    // 313,  88 - X
 0x38, 0x70, 0x3c, 0xf0, 0x07, 0x80, 0x03, 0x00, 0x07, 0x80, 0x3c, 0xf0, 0x38, 0x70,
//   ***    ***
//   ****  ****
//      ****
//       **
//      ****
//   ****  ****
//   ***    ***

    // 320,  89 - Y
 0x01, 0xf0, 0x03, 0xf0, 0x3f, 0x00, 0x3f, 0x00, 0x03, 0xf0, 0x01, 0xf0,
//        *****
//       ******
//   ******
//   ******
//       ******
//        *****

    // 326,  90 - Z
 0x38, 0x30, 0x3c, 0x30, 0x36, 0x30, 0x33, 0x30, 0x31, 0xb0, 0x30, 0xf0, 0x30, 0x70,
//   ***     **
//   ****    **
//   ** **   **
//   **  **  **
//   **   ** **
//   **    ****
//   **     ***

    // 333,  91 - [
 0x3f, 0xf0, 0x3f, 0xf0, 0x30, 0x30, 0x30, 0x30,
//   **********
//   **********
//   **      **
//   **      **

    // 337,  92 - backslash
 0x00, 0x60, 0x00, 0xc0, 0x01, 0x80, 0x03, 0x00, 0x06, 0x00, 0x0c, 0x00, 0x18, 0x00,
//          **
//         **
//        **
//       **
//      **
//     **
//    **

    // 344,  93 - ]
 0x30, 0x30, 0x30, 0x30, 0x3f, 0xf0, 0x3f, 0xf0,
//   **      **
//   **      **
//   **********
//   **********

    // 348,  94 - ^


    // 348,  95 - _
 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00,
//   **
//   **
//   **
//   **
//   **

};
