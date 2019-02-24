/*
 * SWI_Config.h
 *
 *  Created on: Feb 8, 2019
 *      Author: islash8
 */

#ifndef SWI_CONFIG_H_
#define SWI_CONFIG_H_

#define SWI_NO_OF_SWI	2

#define SWI_NO1_TYPE	SWI_PULL_DOWN
#define SWI_NO2_TYPE	SWI_PULL_DOWN

u8 SWI_Au8SwConnection[SWI_NO_OF_SWI] = {DIO_PIN11, DIO_PIN12};

u8 SWI_Au8SwType[SWI_NO_OF_SWI] = {SWI_NO1_TYPE, SWI_NO2_TYPE};

#endif /* SWI_CONFIG_H_ */
