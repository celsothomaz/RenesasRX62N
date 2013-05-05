/*
 * fw_ad.h
 *
 *  Created on: 22/04/2013
 *      Author: celso
 */

#ifndef FW_AD_H_
#define FW_AD_H_

void fw_ad_init(void);
void  fw_ad_handle(void) __attribute__ ((interrupt));

#endif /* FW_AD_H_ */
