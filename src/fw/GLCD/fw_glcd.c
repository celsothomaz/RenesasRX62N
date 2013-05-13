/*
 * fw_glcd.c
 *
 *  Created on: 14/04/2013
 *      Author: celso
 */

#include "sw_config.h"

unsigned char fw_glcd_display[96][8];
unsigned char fw_glcd_actual_pos_x = 0;
unsigned char fw_glcd_actual_pos_y = 0;
extern const unsigned char * const Font8x8_table[256];

void fw_glcd_init(void){
	int i = 0;

	fw_glcd_send_command(FW_GLCD_FUNCTION_SET | FW_GLCD_FUNCTION_SET_H01);
	fw_glcd_send_command(FW_GLCD_BIAS_SYSTEM | 6); //values 0 to 7
	fw_glcd_send_command(FW_GLCD_FUNCTION_SET | FW_GLCD_FUNCTION_SET_H11);
	fw_glcd_send_command(FW_GLCD_BOOSTER | FW_GLCD_BOOSTER_EFFICIENCY_2 | FW_GLCD_BOOSTER_STAGE_5);
	fw_glcd_send_command(FW_GLCD_FUNCTION_SET | FW_GLCD_FUNCTION_SET_H00);
	fw_glcd_send_command(FW_GLCD_VLCD_RANGE_LOW);
	fw_glcd_send_command(FW_GLCD_FUNCTION_SET | FW_GLCD_FUNCTION_SET_H01);
	fw_glcd_send_command(FW_GLCD_VOP | 100); //values 0 to 127
	fw_glcd_send_command(FW_GLCD_FUNCTION_SET | FW_GLCD_FUNCTION_SET_H11);
	fw_glcd_send_command(FW_GLCD_FRAME_RATE | 0x07); //values 0 to 7
	for (i=0;i<10000;i++);
	fw_glcd_send_command(FW_GLCD_FUNCTION_SET | FW_GLCD_FUNCTION_SET_H00);
	fw_glcd_send_command(FW_GLCD_DISPLAY_CONTROL | FW_GLCD_DISPLAY_CONTROL_D);
	fw_glcd_send_command(FW_GLCD_FUNCTION_SET | FW_GLCD_FUNCTION_SET_H01);
	fw_glcd_send_command(FW_GLCD_START_LINE | 0); //values 0 to 63
	fw_glcd_send_command(FW_GLCD_START_LINE_S6 | 0); //values 0 to 1
	fw_glcd_send_command(FW_GLCD_FUNCTION_SET | FW_GLCD_FUNCTION_SET_MY | FW_GLCD_FUNCTION_SET_H00);
}

void fw_glcd_send_command(unsigned char cmd){
	unsigned short ret;
	FW_GLCD_RS = 0;
	FW_GLCD_CS = 0;
	ret = fw_spi_send_short((unsigned short)cmd);
	FW_GLCD_CS = 1;
}

void fw_glcd_send_data(unsigned char cmd){
	unsigned short ret;
	FW_GLCD_RS = 1;
	FW_GLCD_CS = 0;
	ret = fw_spi_send_short((unsigned short)cmd);
	FW_GLCD_CS = 1;
}

void fw_glcd_refresh(void){
	unsigned char i, j;
	for(i=0;i<8;i++){
		fw_glcd_set_xy(0,i);
		for(j=0;j<96;j++) fw_glcd_send_data(fw_glcd_display[j][i]);
	}
}

void fw_glcd_set_xy(unsigned char x, unsigned char y){
	if ((y < 0) | (y > 7)) return;
	if ((x < 0) | (x > 96)) return;
	fw_glcd_send_command(FW_GLCD_SETY | y);
	fw_glcd_send_command(FW_GLCD_SETX | x);
}

void fw_glcd_clean(void){
	unsigned char i, j;
	for(i=0;i<8;i++){
		for(j=0;j<96;j++) fw_glcd_display[j][i] = 0x00;
	}
	fw_glcd_actual_pos_x = 0;
	fw_glcd_actual_pos_y = 0;
}
void fw_glcd_input(unsigned char chr){
	unsigned char size_x = Font8x8_table[chr][0];
	unsigned char size_y = Font8x8_table[chr][1];
	unsigned char i;
	if ((fw_glcd_actual_pos_x + size_x) > 96){
		fw_glcd_actual_pos_x = 0;
		fw_glcd_actual_pos_y++;
		if (fw_glcd_actual_pos_y > 7){
			fw_glcd_actual_pos_y = 0;
		}
	}
	for (i=0;i<size_x;i++){
		fw_glcd_display[fw_glcd_actual_pos_x + i][fw_glcd_actual_pos_y] = Font8x8_table[chr][2 + i];
	}
	fw_glcd_actual_pos_x += size_x;

}

void fw_glcd_next_line(void){
	fw_glcd_actual_pos_y++;
	if (fw_glcd_actual_pos_y > 7){
		fw_glcd_actual_pos_y = 0;
		fw_glcd_actual_pos_x = 0;
	}
}

void fw_glcd_line(unsigned char y){
	if ((y >= 0) && (y <= 7)){
		fw_glcd_actual_pos_y = y;
	}
}

void fw_glcd_colun(unsigned char x){
	if ((x >= 0) && (x <= 95)){
		fw_glcd_actual_pos_x = x;
	}
}

void fw_glcd_text(const char *data){
	while (*data != 0){
		fw_glcd_input(*data);
		data++;
	}
}
