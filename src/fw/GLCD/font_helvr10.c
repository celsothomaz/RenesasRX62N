/******************************************************************************
* DISCLAIMER
* This software is supplied by Renesas Electronics Corporation and is only
* intended for use with Renesas products. No other uses are authorized.
* This software is owned by Renesas Electronics Corporation and is protected under
* all applicable laws, including copyright laws.
* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES
* REGARDING THIS SOFTWARE, WHETHER EXPRESS, IMPLIED OR STATUTORY,
* INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
* PARTICULAR PURPOSE AND NON-INFRINGEMENT. ALL SUCH WARRANTIES ARE EXPRESSLY
* DISCLAIMED.
* TO THE MAXIMUM EXTENT PERMITTED NOT PROHIBITED BY LAW, NEITHER RENESAS
* ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES SHALL BE LIABLE
* FOR ANY DIRECT, INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES
* FOR ANY REASON RELATED TO THIS SOFTWARE, EVEN IF RENESAS OR ITS
* AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
* Renesas reserves the right, without notice, to make changes to this
* software and to discontinue the availability of this software.
* By using this software, you agree to the additional terms and
* conditions found by accessing the following link:
* http://www.renesas.com/disclaimer
******************************************************************************/
/* Copyright (C) 2010 Renesas Electronics Corporation. All rights reserved. */
/* Code written for Renesas by Future Designs, Inc. www.teamfdi.com */

/******************************************************************************
* File Name : font_helvr10.c
* Version : 1.00
* Tool-Chain : Glyph - The Generic API for Graphics LCD API
* H/W Platform : RX62N Group
* Description : An 10 point Font.
******************************************************************************
* History :
* : 21.07.2010 1.00 First Release
******************************************************************************/

/******************************************************************************
Includes �Glyph config Include�
******************************************************************************/


// const unsigned char FontHelvr10_char_0[] = {};
// const unsigned char FontHelvr10_char_1[] = {};
// const unsigned char FontHelvr10_char_2[] = {};
// const unsigned char FontHelvr10_char_3[] = {};
// const unsigned char FontHelvr10_char_4[] = {};
// const unsigned char FontHelvr10_char_5[] = {};
// const unsigned char FontHelvr10_char_6[] = {};
// const unsigned char FontHelvr10_char_7[] = {};
// const unsigned char FontHelvr10_char_8[] = {};
// const unsigned char FontHelvr10_char_9[] = {};
// const unsigned char FontHelvr10_char_10[] = {};
// const unsigned char FontHelvr10_char_11[] = {};
// const unsigned char FontHelvr10_char_12[] = {};
// const unsigned char FontHelvr10_char_13[] = {};
// const unsigned char FontHelvr10_char_14[] = {};
// const unsigned char FontHelvr10_char_15[] = {};
// const unsigned char FontHelvr10_char_16[] = {};
// const unsigned char FontHelvr10_char_17[] = {};
// const unsigned char FontHelvr10_char_18[] = {};
// const unsigned char FontHelvr10_char_19[] = {};
// const unsigned char FontHelvr10_char_20[] = {};
// const unsigned char FontHelvr10_char_21[] = {};
// const unsigned char FontHelvr10_char_22[] = {};
// const unsigned char FontHelvr10_char_23[] = {};
// const unsigned char FontHelvr10_char_24[] = {};
// const unsigned char FontHelvr10_char_25[] = {};
// const unsigned char FontHelvr10_char_26[] = {};
// const unsigned char FontHelvr10_char_27[] = {};
// const unsigned char FontHelvr10_char_28[] = {};
// const unsigned char FontHelvr10_char_29[] = {};
// const unsigned char FontHelvr10_char_30[] = {};
// const unsigned char FontHelvr10_char_31[] = {};
const unsigned char FontHelvr10_char_32[] = {
    0x03, 0x0E, // width=3, height=14
    0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 
};
const unsigned char FontHelvr10_char_33[] = {
    0x03, 0x0E, // width=3, height=14
    0x00, 0xF0, 0x00, 
    0x00, 0x0B, 0x00, 
};
const unsigned char FontHelvr10_char_34[] = {
    0x04, 0x0E, // width=4, height=14
    0x00, 0x30, 0x00, 0x30, 
    0x00, 0x00, 0x00, 0x00, 
};
const unsigned char FontHelvr10_char_35[] = {
    0x06, 0x0E, // width=6, height=14
    0x00, 0x80, 0xE0, 0x80, 0xE0, 0x80, 
    0x02, 0x0E, 0x03, 0x0E, 0x03, 0x00, 
};
const unsigned char FontHelvr10_char_36[] = {
    0x06, 0x0E, // width=6, height=14
    0xC0, 0x20, 0xF0, 0x20, 0x40, 0x00, 
    0x04, 0x09, 0x1F, 0x09, 0x06, 0x00, 
};
const unsigned char FontHelvr10_char_37[] = {
    0x09, 0x0E, // width=9, height=14
    0x20, 0x50, 0x50, 0x20, 0xC0, 0x30, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x0C, 0x03, 0x04, 0x0A, 0x0A, 0x04, 0x00, 
};
const unsigned char FontHelvr10_char_38[] = {
    0x08, 0x0E, // width=8, height=14
    0x00, 0x00, 0xE0, 0x90, 0x60, 0x00, 0x00, 0x00, 
    0x00, 0x07, 0x08, 0x09, 0x06, 0x06, 0x09, 0x00, 
};
const unsigned char FontHelvr10_char_39[] = {
    0x03, 0x0E, // width=3, height=14
    0x00, 0x40, 0x30, 
    0x00, 0x00, 0x00, 
};
const unsigned char FontHelvr10_char_40[] = {
    0x04, 0x0E, // width=4, height=14
    0x80, 0x60, 0x10, 0x00, 
    0x07, 0x18, 0x20, 0x00, 
};
const unsigned char FontHelvr10_char_41[] = {
    0x04, 0x0E, // width=4, height=14
    0x00, 0x10, 0x60, 0x80, 
    0x00, 0x20, 0x18, 0x07, 
};
const unsigned char FontHelvr10_char_42[] = {
    0x04, 0x0E, // width=4, height=14
    0x50, 0x20, 0x50, 0x00, 
    0x00, 0x00, 0x00, 0x00, 
};
const unsigned char FontHelvr10_char_43[] = {
    0x06, 0x0E, // width=6, height=14
    0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 
    0x01, 0x01, 0x07, 0x01, 0x01, 0x00, 
};
const unsigned char FontHelvr10_char_44[] = {
    0x03, 0x0E, // width=3, height=14
    0x00, 0x00, 0x00, 
    0x20, 0x18, 0x00, 
};
const unsigned char FontHelvr10_char_45[] = {
    0x07, 0x0E, // width=7, height=14
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 
};
const unsigned char FontHelvr10_char_46[] = {
    0x03, 0x0E, // width=3, height=14
    0x00, 0x00, 0x00, 
    0x00, 0x08, 0x00, 
};
const unsigned char FontHelvr10_char_47[] = {
    0x03, 0x0E, // width=3, height=14
    0x00, 0xC0, 0x30, 
    0x0C, 0x03, 0x00, 
};
const unsigned char FontHelvr10_char_48[] = {
    0x06, 0x0E, // width=6, height=14
    0xE0, 0x10, 0x10, 0x10, 0xE0, 0x00, 
    0x07, 0x08, 0x08, 0x08, 0x07, 0x00, 
};
const unsigned char FontHelvr10_char_49[] = {
    0x06, 0x0E, // width=6, height=14
    0x00, 0x20, 0xF0, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 
};
const unsigned char FontHelvr10_char_50[] = {
    0x06, 0x0E, // width=6, height=14
    0x20, 0x10, 0x10, 0x10, 0xE0, 0x00, 
    0x0C, 0x0A, 0x09, 0x09, 0x08, 0x00, 
};
const unsigned char FontHelvr10_char_51[] = {
    0x06, 0x0E, // width=6, height=14
    0x20, 0x10, 0x90, 0x90, 0x60, 0x00, 
    0x04, 0x08, 0x08, 0x08, 0x07, 0x00, 
};
const unsigned char FontHelvr10_char_52[] = {
    0x06, 0x0E, // width=6, height=14
    0x00, 0xC0, 0x20, 0xF0, 0x00, 0x00, 
    0x03, 0x02, 0x02, 0x0F, 0x02, 0x00, 
};
const unsigned char FontHelvr10_char_53[] = {
    0x06, 0x0E, // width=6, height=14
    0xF0, 0x90, 0x90, 0x90, 0x10, 0x00, 
    0x04, 0x08, 0x08, 0x08, 0x07, 0x00, 
};
const unsigned char FontHelvr10_char_54[] = {
    0x06, 0x0E, // width=6, height=14
    0xE0, 0x10, 0x90, 0x90, 0x20, 0x00, 
    0x07, 0x09, 0x08, 0x08, 0x07, 0x00, 
};
const unsigned char FontHelvr10_char_55[] = {
    0x06, 0x0E, // width=6, height=14
    0x10, 0x10, 0x10, 0xD0, 0x30, 0x00, 
    0x00, 0x0C, 0x03, 0x00, 0x00, 0x00, 
};
const unsigned char FontHelvr10_char_56[] = {
    0x06, 0x0E, // width=6, height=14
    0x60, 0x90, 0x90, 0x90, 0x60, 0x00, 
    0x07, 0x08, 0x08, 0x08, 0x07, 0x00, 
};
const unsigned char FontHelvr10_char_57[] = {
    0x06, 0x0E, // width=6, height=14
    0xE0, 0x10, 0x10, 0x90, 0xE0, 0x00, 
    0x04, 0x09, 0x09, 0x08, 0x07, 0x00, 
};
const unsigned char FontHelvr10_char_58[] = {
    0x03, 0x0E, // width=3, height=14
    0x00, 0x40, 0x00, 
    0x00, 0x08, 0x00, 
};
const unsigned char FontHelvr10_char_59[] = {
    0x03, 0x0E, // width=3, height=14
    0x00, 0x40, 0x00, 
    0x20, 0x18, 0x00, 
};
const unsigned char FontHelvr10_char_60[] = {
    0x06, 0x0E, // width=6, height=14
    0x00, 0x00, 0x80, 0x40, 0x00, 0x00, 
    0x00, 0x01, 0x02, 0x04, 0x00, 0x00, 
};
const unsigned char FontHelvr10_char_61[] = {
    0x05, 0x0E, // width=5, height=14
    0x80, 0x80, 0x80, 0x80, 0x00, 
    0x02, 0x02, 0x02, 0x02, 0x00, 
};
const unsigned char FontHelvr10_char_62[] = {
    0x06, 0x0E, // width=6, height=14
    0x00, 0x40, 0x80, 0x00, 0x00, 0x00, 
    0x00, 0x04, 0x02, 0x01, 0x00, 0x00, 
};
const unsigned char FontHelvr10_char_63[] = {
    0x06, 0x0E, // width=6, height=14
    0x00, 0x20, 0x10, 0x90, 0x60, 0x00, 
    0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 
};
const unsigned char FontHelvr10_char_64[] = {
    0x0B, 0x0E, // width=11, height=14
    0x80, 0x40, 0x20, 0x90, 0x50, 0x50, 0x90, 0x50, 0x20, 0xC0, 0x00, 
    0x0F, 0x10, 0x27, 0x28, 0x28, 0x26, 0x29, 0x08, 0x06, 0x01, 0x00, 
};
const unsigned char FontHelvr10_char_65[] = {
    0x07, 0x0E, // width=7, height=14
    0x00, 0x00, 0xC0, 0x30, 0xC0, 0x00, 0x00, 
    0x0C, 0x03, 0x02, 0x02, 0x02, 0x03, 0x0C, 
};
const unsigned char FontHelvr10_char_66[] = {
    0x07, 0x0E, // width=7, height=14
    0x00, 0xF0, 0x90, 0x90, 0x90, 0x60, 0x00, 
    0x00, 0x0F, 0x08, 0x08, 0x08, 0x07, 0x00, 
};
const unsigned char FontHelvr10_char_67[] = {
    0x08, 0x0E, // width=8, height=14
    0x00, 0xE0, 0x10, 0x10, 0x10, 0x10, 0x20, 0x00, 
    0x00, 0x07, 0x08, 0x08, 0x08, 0x08, 0x04, 0x00, 
};
const unsigned char FontHelvr10_char_68[] = {
    0x08, 0x0E, // width=8, height=14
    0x00, 0xF0, 0x10, 0x10, 0x10, 0x20, 0xC0, 0x00, 
    0x00, 0x0F, 0x08, 0x08, 0x08, 0x04, 0x03, 0x00, 
};
const unsigned char FontHelvr10_char_69[] = {
    0x07, 0x0E, // width=7, height=14
    0x00, 0xF0, 0x90, 0x90, 0x90, 0x90, 0x00, 
    0x00, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x00, 
};
const unsigned char FontHelvr10_char_70[] = {
    0x06, 0x0E, // width=6, height=14
    0x00, 0xF0, 0x90, 0x90, 0x90, 0x10, 
    0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 
};
const unsigned char FontHelvr10_char_71[] = {
    0x08, 0x0E, // width=8, height=14
    0x00, 0xE0, 0x10, 0x10, 0x10, 0x10, 0x20, 0x00, 
    0x00, 0x07, 0x08, 0x08, 0x08, 0x05, 0x0F, 0x00, 
};
const unsigned char FontHelvr10_char_72[] = {
    0x08, 0x0E, // width=8, height=14
    0x00, 0xF0, 0x80, 0x80, 0x80, 0x80, 0xF0, 0x00, 
    0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 
};
const unsigned char FontHelvr10_char_73[] = {
    0x03, 0x0E, // width=3, height=14
    0x00, 0xF0, 0x00, 
    0x00, 0x0F, 0x00, 
};
const unsigned char FontHelvr10_char_74[] = {
    0x05, 0x0E, // width=5, height=14
    0x00, 0x00, 0x00, 0xF0, 0x00, 
    0x04, 0x08, 0x08, 0x07, 0x00, 
};
const unsigned char FontHelvr10_char_75[] = {
    0x07, 0x0E, // width=7, height=14
    0x00, 0xF0, 0x80, 0xC0, 0x20, 0x10, 0x00, 
    0x00, 0x0F, 0x00, 0x00, 0x03, 0x0C, 0x00, 
};
const unsigned char FontHelvr10_char_76[] = {
    0x06, 0x0E, // width=6, height=14
    0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x0F, 0x08, 0x08, 0x08, 0x00, 
};
const unsigned char FontHelvr10_char_77[] = {
    0x09, 0x0E, // width=9, height=14
    0x00, 0xF0, 0x60, 0x80, 0x00, 0x80, 0x60, 0xF0, 0x00, 
    0x00, 0x0F, 0x00, 0x01, 0x0E, 0x01, 0x00, 0x0F, 0x00, 
};
const unsigned char FontHelvr10_char_78[] = {
    0x08, 0x0E, // width=8, height=14
    0x00, 0xF0, 0x30, 0xC0, 0x00, 0x00, 0xF0, 0x00, 
    0x00, 0x0F, 0x00, 0x00, 0x03, 0x0C, 0x0F, 0x00, 
};
const unsigned char FontHelvr10_char_79[] = {
    0x08, 0x0E, // width=8, height=14
    0x00, 0xE0, 0x10, 0x10, 0x10, 0x10, 0xE0, 0x00, 
    0x00, 0x07, 0x08, 0x08, 0x08, 0x08, 0x07, 0x00, 
};
const unsigned char FontHelvr10_char_80[] = {
    0x07, 0x0E, // width=7, height=14
    0x00, 0xF0, 0x90, 0x90, 0x90, 0x60, 0x00, 
    0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 
};
const unsigned char FontHelvr10_char_81[] = {
    0x08, 0x0E, // width=8, height=14
    0x00, 0xE0, 0x10, 0x10, 0x10, 0x10, 0xE0, 0x00, 
    0x00, 0x07, 0x08, 0x08, 0x0A, 0x0C, 0x0F, 0x10, 
};
const unsigned char FontHelvr10_char_82[] = {
    0x07, 0x0E, // width=7, height=14
    0x00, 0xF0, 0x90, 0x90, 0x90, 0x60, 0x00, 
    0x00, 0x0F, 0x00, 0x00, 0x00, 0x0F, 0x00, 
};
const unsigned char FontHelvr10_char_83[] = {
    0x07, 0x0E, // width=7, height=14
    0x00, 0x60, 0x90, 0x90, 0x90, 0x20, 0x00, 
    0x00, 0x06, 0x08, 0x08, 0x08, 0x07, 0x00, 
};
const unsigned char FontHelvr10_char_84[] = {
    0x05, 0x0E, // width=5, height=14
    0x10, 0x10, 0xF0, 0x10, 0x10, 
    0x00, 0x00, 0x0F, 0x00, 0x00, 
};
const unsigned char FontHelvr10_char_85[] = {
    0x08, 0x0E, // width=8, height=14
    0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 
    0x00, 0x07, 0x08, 0x08, 0x08, 0x08, 0x07, 0x00, 
};
const unsigned char FontHelvr10_char_86[] = {
    0x07, 0x0E, // width=7, height=14
    0x30, 0xC0, 0x00, 0x00, 0x00, 0xC0, 0x30, 
    0x00, 0x01, 0x06, 0x08, 0x06, 0x01, 0x00, 
};
const unsigned char FontHelvr10_char_87[] = {
    0x09, 0x0E, // width=9, height=14
    0x30, 0xC0, 0x00, 0x00, 0xF0, 0x00, 0x00, 0xC0, 0x30, 
    0x00, 0x01, 0x0E, 0x01, 0x00, 0x01, 0x0E, 0x01, 0x00, 
};
const unsigned char FontHelvr10_char_88[] = {
    0x07, 0x0E, // width=7, height=14
    0x00, 0x30, 0x40, 0x80, 0x40, 0x30, 0x00, 
    0x00, 0x0C, 0x03, 0x00, 0x03, 0x0C, 0x00, 
};
const unsigned char FontHelvr10_char_89[] = {
    0x07, 0x0E, // width=7, height=14
    0x10, 0x60, 0x80, 0x00, 0x80, 0x60, 0x10, 
    0x00, 0x00, 0x01, 0x0E, 0x01, 0x00, 0x00, 
};
const unsigned char FontHelvr10_char_90[] = {
    0x07, 0x0E, // width=7, height=14
    0x00, 0x10, 0x10, 0x90, 0x50, 0x30, 0x00, 
    0x00, 0x0C, 0x0A, 0x09, 0x08, 0x08, 0x00, 
};
const unsigned char FontHelvr10_char_91[] = {
    0x03, 0x0E, // width=3, height=14
    0x00, 0xF0, 0x10, 
    0x00, 0x3F, 0x20, 
};
const unsigned char FontHelvr10_char_92[] = {
    0x03, 0x0E, // width=3, height=14
    0x30, 0xC0, 0x00, 
    0x00, 0x03, 0x0C, 
};
const unsigned char FontHelvr10_char_93[] = {
    0x03, 0x0E, // width=3, height=14
    0x10, 0xF0, 0x00, 
    0x20, 0x3F, 0x00, 
};
const unsigned char FontHelvr10_char_94[] = {
    0x06, 0x0E, // width=6, height=14
    0x00, 0xC0, 0x30, 0xC0, 0x00, 0x00, 
    0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 
};
const unsigned char FontHelvr10_char_95[] = {
    0x06, 0x0E, // width=6, height=14
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
};
const unsigned char FontHelvr10_char_96[] = {
    0x03, 0x0E, // width=3, height=14
    0x60, 0x10, 0x00, 
    0x00, 0x00, 0x00, 
};
const unsigned char FontHelvr10_char_97[] = {
    0x05, 0x0E, // width=5, height=14
    0x40, 0x40, 0x40, 0x80, 0x00, 
    0x06, 0x09, 0x09, 0x07, 0x08, 
};
const unsigned char FontHelvr10_char_98[] = {
    0x06, 0x0E, // width=6, height=14
    0xF0, 0x80, 0x40, 0x40, 0x80, 0x00, 
    0x0F, 0x04, 0x08, 0x08, 0x07, 0x00, 
};
const unsigned char FontHelvr10_char_99[] = {
    0x05, 0x0E, // width=5, height=14
    0x80, 0x40, 0x40, 0x80, 0x00, 
    0x07, 0x08, 0x08, 0x04, 0x00, 
};
const unsigned char FontHelvr10_char_100[] = {
    0x06, 0x0E, // width=6, height=14
    0x80, 0x40, 0x40, 0x80, 0xF0, 0x00, 
    0x07, 0x08, 0x08, 0x04, 0x0F, 0x00, 
};
const unsigned char FontHelvr10_char_101[] = {
    0x05, 0x0E, // width=5, height=14
    0x80, 0x40, 0x40, 0x80, 0x00, 
    0x07, 0x09, 0x09, 0x05, 0x00, 
};
const unsigned char FontHelvr10_char_102[] = {
    0x04, 0x0E, // width=4, height=14
    0x40, 0xE0, 0x50, 0x10, 
    0x00, 0x0F, 0x00, 0x00, 
};
const unsigned char FontHelvr10_char_103[] = {
    0x06, 0x0E, // width=6, height=14
    0x80, 0x40, 0x40, 0x80, 0xC0, 0x00, 
    0x07, 0x28, 0x28, 0x24, 0x1F, 0x00, 
};
const unsigned char FontHelvr10_char_104[] = {
    0x06, 0x0E, // width=6, height=14
    0xF0, 0x80, 0x40, 0x40, 0x80, 0x00, 
    0x0F, 0x00, 0x00, 0x00, 0x0F, 0x00, 
};
const unsigned char FontHelvr10_char_105[] = {
    0x02, 0x0E, // width=2, height=14
    0xD0, 0x00, 
    0x0F, 0x00, 
};
const unsigned char FontHelvr10_char_106[] = {
    0x02, 0x0E, // width=2, height=14
    0xD0, 0x00, 
    0x1F, 0x00, 
};
const unsigned char FontHelvr10_char_107[] = {
    0x05, 0x0E, // width=5, height=14
    0xF0, 0x00, 0x80, 0x40, 0x00, 
    0x0F, 0x01, 0x02, 0x0C, 0x00, 
};
const unsigned char FontHelvr10_char_108[] = {
    0x02, 0x0E, // width=2, height=14
    0xF0, 0x00, 
    0x0F, 0x00, 
};
const unsigned char FontHelvr10_char_109[] = {
    0x08, 0x0E, // width=8, height=14
    0xC0, 0x40, 0x40, 0x80, 0x40, 0x40, 0x80, 0x00, 
    0x0F, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x0F, 0x00, 
};
const unsigned char FontHelvr10_char_110[] = {
    0x06, 0x0E, // width=6, height=14
    0xC0, 0x80, 0x40, 0x40, 0x80, 0x00, 
    0x0F, 0x00, 0x00, 0x00, 0x0F, 0x00, 
};
const unsigned char FontHelvr10_char_111[] = {
    0x06, 0x0E, // width=6, height=14
    0x80, 0x40, 0x40, 0x40, 0x80, 0x00, 
    0x07, 0x08, 0x08, 0x08, 0x07, 0x00, 
};
const unsigned char FontHelvr10_char_112[] = {
    0x06, 0x0E, // width=6, height=14
    0xC0, 0x80, 0x40, 0x40, 0x80, 0x00, 
    0x3F, 0x04, 0x08, 0x08, 0x07, 0x00, 
};
const unsigned char FontHelvr10_char_113[] = {
    0x06, 0x0E, // width=6, height=14
    0x80, 0x40, 0x40, 0x80, 0xC0, 0x00, 
    0x07, 0x08, 0x08, 0x04, 0x3F, 0x00, 
};
const unsigned char FontHelvr10_char_114[] = {
    0x04, 0x0E, // width=4, height=14
    0xC0, 0x80, 0x40, 0x00, 
    0x0F, 0x00, 0x00, 0x00, 
};
const unsigned char FontHelvr10_char_115[] = {
    0x05, 0x0E, // width=5, height=14
    0x80, 0x40, 0x40, 0x80, 0x00, 
    0x04, 0x09, 0x09, 0x06, 0x00, 
};
const unsigned char FontHelvr10_char_116[] = {
    0x04, 0x0E, // width=4, height=14
    0x40, 0xF0, 0x40, 0x00, 
    0x00, 0x0F, 0x08, 0x00, 
};
const unsigned char FontHelvr10_char_117[] = {
    0x05, 0x0E, // width=5, height=14
    0xC0, 0x00, 0x00, 0xC0, 0x00, 
    0x07, 0x08, 0x08, 0x0F, 0x00, 
};
const unsigned char FontHelvr10_char_118[] = {
    0x06, 0x0E, // width=6, height=14
    0xC0, 0x00, 0x00, 0x00, 0xC0, 0x00, 
    0x00, 0x03, 0x0C, 0x03, 0x00, 0x00, 
};
const unsigned char FontHelvr10_char_119[] = {
    0x08, 0x0E, // width=8, height=14
    0xC0, 0x00, 0x00, 0xC0, 0x00, 0x00, 0xC0, 0x00, 
    0x00, 0x03, 0x0C, 0x03, 0x0C, 0x03, 0x00, 0x00, 
};
const unsigned char FontHelvr10_char_120[] = {
    0x06, 0x0E, // width=6, height=14
    0x40, 0x80, 0x00, 0x80, 0x40, 0x00, 
    0x0C, 0x02, 0x01, 0x02, 0x0C, 0x00, 
};
const unsigned char FontHelvr10_char_121[] = {
    0x05, 0x0E, // width=5, height=14
    0xC0, 0x00, 0x00, 0xC0, 0x00, 
    0x23, 0x1C, 0x07, 0x00, 0x00, 
};
const unsigned char FontHelvr10_char_122[] = {
    0x05, 0x0E, // width=5, height=14
    0x40, 0x40, 0x40, 0xC0, 0x00, 
    0x0C, 0x0A, 0x09, 0x08, 0x00, 
};
const unsigned char FontHelvr10_char_123[] = {
    0x03, 0x0E, // width=3, height=14
    0x00, 0xE0, 0x10, 
    0x01, 0x1E, 0x20, 
};
const unsigned char FontHelvr10_char_124[] = {
    0x03, 0x0E, // width=3, height=14
    0x00, 0xF0, 0x00, 
    0x00, 0x3F, 0x00, 
};
const unsigned char FontHelvr10_char_125[] = {
    0x03, 0x0E, // width=3, height=14
    0x10, 0xE0, 0x00, 
    0x20, 0x1E, 0x01, 
};
const unsigned char FontHelvr10_char_126[] = {
    0x07, 0x0E, // width=7, height=14
    0x00, 0x80, 0x80, 0x00, 0x00, 0x80, 0x00, 
    0x01, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 
};
// const unsigned char FontHelvr10_char_127[] = {};
// const unsigned char FontHelvr10_char_128[] = {};
// const unsigned char FontHelvr10_char_129[] = {};
// const unsigned char FontHelvr10_char_130[] = {};
// const unsigned char FontHelvr10_char_131[] = {};
// const unsigned char FontHelvr10_char_132[] = {};
// const unsigned char FontHelvr10_char_133[] = {};
// const unsigned char FontHelvr10_char_134[] = {};
// const unsigned char FontHelvr10_char_135[] = {};
// const unsigned char FontHelvr10_char_136[] = {};
// const unsigned char FontHelvr10_char_137[] = {};
// const unsigned char FontHelvr10_char_138[] = {};
// const unsigned char FontHelvr10_char_139[] = {};
// const unsigned char FontHelvr10_char_140[] = {};
// const unsigned char FontHelvr10_char_141[] = {};
// const unsigned char FontHelvr10_char_142[] = {};
// const unsigned char FontHelvr10_char_143[] = {};
// const unsigned char FontHelvr10_char_144[] = {};
// const unsigned char FontHelvr10_char_145[] = {};
// const unsigned char FontHelvr10_char_146[] = {};
// const unsigned char FontHelvr10_char_147[] = {};
// const unsigned char FontHelvr10_char_148[] = {};
// const unsigned char FontHelvr10_char_149[] = {};
// const unsigned char FontHelvr10_char_150[] = {};
// const unsigned char FontHelvr10_char_151[] = {};
// const unsigned char FontHelvr10_char_152[] = {};
// const unsigned char FontHelvr10_char_153[] = {};
// const unsigned char FontHelvr10_char_154[] = {};
// const unsigned char FontHelvr10_char_155[] = {};
// const unsigned char FontHelvr10_char_156[] = {};
// const unsigned char FontHelvr10_char_157[] = {};
// const unsigned char FontHelvr10_char_158[] = {};
// const unsigned char FontHelvr10_char_159[] = {};
// const unsigned char FontHelvr10_char_160[] = {};
// const unsigned char FontHelvr10_char_161[] = {};
// const unsigned char FontHelvr10_char_162[] = {};
// const unsigned char FontHelvr10_char_163[] = {};
// const unsigned char FontHelvr10_char_164[] = {};
// const unsigned char FontHelvr10_char_165[] = {};
// const unsigned char FontHelvr10_char_166[] = {};
// const unsigned char FontHelvr10_char_167[] = {};
// const unsigned char FontHelvr10_char_168[] = {};
// const unsigned char FontHelvr10_char_169[] = {};
// const unsigned char FontHelvr10_char_170[] = {};
// const unsigned char FontHelvr10_char_171[] = {};
// const unsigned char FontHelvr10_char_172[] = {};
// const unsigned char FontHelvr10_char_173[] = {};
// const unsigned char FontHelvr10_char_174[] = {};
// const unsigned char FontHelvr10_char_175[] = {};
// const unsigned char FontHelvr10_char_176[] = {};
// const unsigned char FontHelvr10_char_177[] = {};
// const unsigned char FontHelvr10_char_178[] = {};
// const unsigned char FontHelvr10_char_179[] = {};
// const unsigned char FontHelvr10_char_180[] = {};
// const unsigned char FontHelvr10_char_181[] = {};
// const unsigned char FontHelvr10_char_182[] = {};
// const unsigned char FontHelvr10_char_183[] = {};
// const unsigned char FontHelvr10_char_184[] = {};
// const unsigned char FontHelvr10_char_185[] = {};
// const unsigned char FontHelvr10_char_186[] = {};
// const unsigned char FontHelvr10_char_187[] = {};
// const unsigned char FontHelvr10_char_188[] = {};
// const unsigned char FontHelvr10_char_189[] = {};
// const unsigned char FontHelvr10_char_190[] = {};
// const unsigned char FontHelvr10_char_191[] = {};
// const unsigned char FontHelvr10_char_192[] = {};
// const unsigned char FontHelvr10_char_193[] = {};
// const unsigned char FontHelvr10_char_194[] = {};
// const unsigned char FontHelvr10_char_195[] = {};
// const unsigned char FontHelvr10_char_196[] = {};
// const unsigned char FontHelvr10_char_197[] = {};
// const unsigned char FontHelvr10_char_198[] = {};
// const unsigned char FontHelvr10_char_199[] = {};
// const unsigned char FontHelvr10_char_200[] = {};
// const unsigned char FontHelvr10_char_201[] = {};
// const unsigned char FontHelvr10_char_202[] = {};
// const unsigned char FontHelvr10_char_203[] = {};
// const unsigned char FontHelvr10_char_204[] = {};
// const unsigned char FontHelvr10_char_205[] = {};
// const unsigned char FontHelvr10_char_206[] = {};
// const unsigned char FontHelvr10_char_207[] = {};
// const unsigned char FontHelvr10_char_208[] = {};
// const unsigned char FontHelvr10_char_209[] = {};
// const unsigned char FontHelvr10_char_210[] = {};
// const unsigned char FontHelvr10_char_211[] = {};
// const unsigned char FontHelvr10_char_212[] = {};
// const unsigned char FontHelvr10_char_213[] = {};
// const unsigned char FontHelvr10_char_214[] = {};
// const unsigned char FontHelvr10_char_215[] = {};
// const unsigned char FontHelvr10_char_216[] = {};
// const unsigned char FontHelvr10_char_217[] = {};
// const unsigned char FontHelvr10_char_218[] = {};
// const unsigned char FontHelvr10_char_219[] = {};
// const unsigned char FontHelvr10_char_220[] = {};
// const unsigned char FontHelvr10_char_221[] = {};
// const unsigned char FontHelvr10_char_222[] = {};
// const unsigned char FontHelvr10_char_223[] = {};
// const unsigned char FontHelvr10_char_224[] = {};
// const unsigned char FontHelvr10_char_225[] = {};
// const unsigned char FontHelvr10_char_226[] = {};
// const unsigned char FontHelvr10_char_227[] = {};
// const unsigned char FontHelvr10_char_228[] = {};
// const unsigned char FontHelvr10_char_229[] = {};
// const unsigned char FontHelvr10_char_230[] = {};
// const unsigned char FontHelvr10_char_231[] = {};
// const unsigned char FontHelvr10_char_232[] = {};
// const unsigned char FontHelvr10_char_233[] = {};
// const unsigned char FontHelvr10_char_234[] = {};
// const unsigned char FontHelvr10_char_235[] = {};
// const unsigned char FontHelvr10_char_236[] = {};
// const unsigned char FontHelvr10_char_237[] = {};
// const unsigned char FontHelvr10_char_238[] = {};
// const unsigned char FontHelvr10_char_239[] = {};
// const unsigned char FontHelvr10_char_240[] = {};
// const unsigned char FontHelvr10_char_241[] = {};
// const unsigned char FontHelvr10_char_242[] = {};
// const unsigned char FontHelvr10_char_243[] = {};
// const unsigned char FontHelvr10_char_244[] = {};
// const unsigned char FontHelvr10_char_245[] = {};
// const unsigned char FontHelvr10_char_246[] = {};
// const unsigned char FontHelvr10_char_247[] = {};
// const unsigned char FontHelvr10_char_248[] = {};
// const unsigned char FontHelvr10_char_249[] = {};
// const unsigned char FontHelvr10_char_250[] = {};
// const unsigned char FontHelvr10_char_251[] = {};
// const unsigned char FontHelvr10_char_252[] = {};
// const unsigned char FontHelvr10_char_253[] = {};
// const unsigned char FontHelvr10_char_254[] = {};
// const unsigned char FontHelvr10_char_255[] = {};

const unsigned char * const FontHelvr10_table[256] = {
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    FontHelvr10_char_32,
    FontHelvr10_char_33,
    FontHelvr10_char_34,
    FontHelvr10_char_35,
    FontHelvr10_char_36,
    FontHelvr10_char_37,
    FontHelvr10_char_38,
    FontHelvr10_char_39,
    FontHelvr10_char_40,
    FontHelvr10_char_41,
    FontHelvr10_char_42,
    FontHelvr10_char_43,
    FontHelvr10_char_44,
    FontHelvr10_char_45,
    FontHelvr10_char_46,
    FontHelvr10_char_47,
    FontHelvr10_char_48,
    FontHelvr10_char_49,
    FontHelvr10_char_50,
    FontHelvr10_char_51,
    FontHelvr10_char_52,
    FontHelvr10_char_53,
    FontHelvr10_char_54,
    FontHelvr10_char_55,
    FontHelvr10_char_56,
    FontHelvr10_char_57,
    FontHelvr10_char_58,
    FontHelvr10_char_59,
    FontHelvr10_char_60,
    FontHelvr10_char_61,
    FontHelvr10_char_62,
    FontHelvr10_char_63,
    FontHelvr10_char_64,
    FontHelvr10_char_65,
    FontHelvr10_char_66,
    FontHelvr10_char_67,
    FontHelvr10_char_68,
    FontHelvr10_char_69,
    FontHelvr10_char_70,
    FontHelvr10_char_71,
    FontHelvr10_char_72,
    FontHelvr10_char_73,
    FontHelvr10_char_74,
    FontHelvr10_char_75,
    FontHelvr10_char_76,
    FontHelvr10_char_77,
    FontHelvr10_char_78,
    FontHelvr10_char_79,
    FontHelvr10_char_80,
    FontHelvr10_char_81,
    FontHelvr10_char_82,
    FontHelvr10_char_83,
    FontHelvr10_char_84,
    FontHelvr10_char_85,
    FontHelvr10_char_86,
    FontHelvr10_char_87,
    FontHelvr10_char_88,
    FontHelvr10_char_89,
    FontHelvr10_char_90,
    FontHelvr10_char_91,
    FontHelvr10_char_92,
    FontHelvr10_char_93,
    FontHelvr10_char_94,
    FontHelvr10_char_95,
    FontHelvr10_char_96,
    FontHelvr10_char_97,
    FontHelvr10_char_98,
    FontHelvr10_char_99,
    FontHelvr10_char_100,
    FontHelvr10_char_101,
    FontHelvr10_char_102,
    FontHelvr10_char_103,
    FontHelvr10_char_104,
    FontHelvr10_char_105,
    FontHelvr10_char_106,
    FontHelvr10_char_107,
    FontHelvr10_char_108,
    FontHelvr10_char_109,
    FontHelvr10_char_110,
    FontHelvr10_char_111,
    FontHelvr10_char_112,
    FontHelvr10_char_113,
    FontHelvr10_char_114,
    FontHelvr10_char_115,
    FontHelvr10_char_116,
    FontHelvr10_char_117,
    FontHelvr10_char_118,
    FontHelvr10_char_119,
    FontHelvr10_char_120,
    FontHelvr10_char_121,
    FontHelvr10_char_122,
    FontHelvr10_char_123,
    FontHelvr10_char_124,
    FontHelvr10_char_125,
    FontHelvr10_char_126,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
};
