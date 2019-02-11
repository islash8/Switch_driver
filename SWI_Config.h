/*
 * SWI_Config.h
 *
 *  Created on: Feb 8, 2019
 *      Author: islash8
 */

#ifndef SWI_CONFIG_H_
#define SWI_CONFIG_H_

#define SWI_NO_OF_SWI	1

#define SWI_NO1_TYPE	SWI_PULL_DOWN

u8 SWI_Au8SwConnection[SWI_NO_OF_SWI] = {DIO_PIN24};

u8 SWI_Au8SwType[SWI_NO_OF_SWI] = {SWI_NO1_TYPE};

#endif /* SWI_CONFIG_H_ */
