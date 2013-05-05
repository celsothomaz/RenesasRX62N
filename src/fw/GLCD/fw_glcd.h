/*
 * fw_glcd.h
 *
 *  Created on: 14/04/2013
 *      Author: celso
 */

#ifndef FW_GLCD_H_
#define FW_GLCD_H_

#define FW_GLCD_RS PORT5.DR.BIT.B1

#define FW_GLCD_FUNCTION_SET 0x20
#define FW_GLCD_FUNCTION_SET_H00 0x00
#define FW_GLCD_FUNCTION_SET_H01 0x01
#define FW_GLCD_FUNCTION_SET_H10 0x02
#define FW_GLCD_FUNCTION_SET_H11 0x03
#define FW_GLCD_FUNCTION_SET_PD 0x04
#define FW_GLCD_FUNCTION_SET_MY 0x08
#define FW_GLCD_FUNCTION_SET_MX 0x10

#define FW_GLCD_BIAS_SYSTEM 0x10

#define FW_GLCD_BOOSTER 0x90
#define FW_GLCD_BOOSTER_EFFICIENCY_4 0x00
#define FW_GLCD_BOOSTER_EFFICIENCY_3 0x04
#define FW_GLCD_BOOSTER_EFFICIENCY_2 0x08
#define FW_GLCD_BOOSTER_EFFICIENCY_1 0x0C
#define FW_GLCD_BOOSTER_STAGE_2 0x00
#define FW_GLCD_BOOSTER_STAGE_3 0x01
#define FW_GLCD_BOOSTER_STAGE_4 0x02
#define FW_GLCD_BOOSTER_STAGE_5 0x03

#define FW_GLCD_VLCD_RANGE_LOW 0x04
#define FW_GLCD_VLCD_RANGE_HIGH 0x05

#define FW_GLCD_VOP 0x80

#define FW_GLCD_FRAME_RATE 0x08

#define FW_GLCD_SETY 0x40

#define FW_GLCD_SETX 0x80

#define FW_GLCD_DISPLAY_CONTROL 0x08
#define FW_GLCD_DISPLAY_CONTROL_E 0x01
#define FW_GLCD_DISPLAY_CONTROL_D 0x04

#define FW_GLCD_START_LINE 0x40
#define FW_GLCD_START_LINE_S6 0x04


void fw_glcd_init(void);
void fw_glcd_send_command(unsigned char cmd);
void fw_glcd_send_data(unsigned char cmd);
void fw_glcd_refresh(void);
void fw_glcd_set_xy(unsigned char x, unsigned char y);
void fw_glcd_clean(void);
void fw_glcd_input(unsigned char chr);
void fw_glcd_line(unsigned char y);
void fw_glcd_colun(unsigned char x);
void sw_mont_glcd_screen_0 (void);

#endif /* FW_GLCD_H_ */
