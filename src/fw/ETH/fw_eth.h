/*
 * fw_eth.h
 *
 *  Created on: 25/04/2013
 *      Author: celso
 */

#ifndef FW_ETH_H_
#define FW_ETH_H_

void fw_eth_init(void);
void fw_eth_handle(void) __attribute__ ((interrupt));

#endif /* FW_ETH_H_ */
