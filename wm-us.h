/****************************** Module Header ******************************\
* Module Name: wm-us.H
*
* keyboard layout header
*
* Copyright (c) 1985-2001, Microsoft Corporation
*
* Various defines for use by keyboard input code.
*
* History:
*
* created by KBDTOOL v3.40 Tue Sep 17 21:25:20 2024
*
\***************************************************************************/

/*
 * kbd type should be controlled by cl command-line argument
 */
#define KBD_TYPE 4

/*
* Include the basis of all keyboard table values
*/
#include "kbd.h"
/***************************************************************************\
* The table below defines the virtual keys for various keyboard types where
* the keyboard differ from the US keyboard.
*
* _EQ() : all keyboard types have the same virtual key for this scancode
* _NE() : different virtual keys for this scancode, depending on kbd type
*
*     +------+ +----------+----------+----------+----------+----------+----------+
*     | Scan | |    kbd   |    kbd   |    kbd   |    kbd   |    kbd   |    kbd   |
*     | code | |   type 1 |   type 2 |   type 3 |   type 4 |   type 5 |   type 6 |
\****+-------+_+----------+----------+----------+----------+----------+----------+*/

#undef  T11
 #define T11 _EQ(                                        'D'                      )
#undef  T12
 #define T12 _EQ(                                        'R'                      )
#undef  T13
 #define T13 _EQ(                                        'W'                      )
#undef  T14
 #define T14 _EQ(                                        'B'                      )
#undef  T15
 #define T15 _EQ(                                        'J'                      )
#undef  T16
 #define T16 _EQ(                                        'F'                      )
#undef  T17
 #define T17 _EQ(                                        'U'                      )
#undef  T18
 #define T18 _EQ(                                        'P'                      )
#undef  T19
 #define T19 _EQ(                                      OEM_1                      )
#undef  T20
 #define T20 _EQ(                                        'H'                      )
#undef  T21
 #define T21 _EQ(                                        'T'                      )
#undef  T23
 #define T23 _EQ(                                        'Y'                      )
#undef  T24
 #define T24 _EQ(                                        'N'                      )
#undef  T25
 #define T25 _EQ(                                        'E'                      )
#undef  T26
 #define T26 _EQ(                                        'O'                      )
#undef  T27
 #define T27 _EQ(                                        'I'                      )
#undef  T2E
 #define T2E _EQ(                                        'M'                      )
#undef  T2F
 #define T2F _EQ(                                        'C'                      )
#undef  T30
 #define T30 _EQ(                                        'V'                      )
#undef  T31
 #define T31 _EQ(                                        'K'                      )
#undef  T32
 #define T32 _EQ(                                        'L'                      )

