/*
 * SSD_Config.h
 *
 *  Created on: Feb 9, 2019
 *      Author: islash8
 */

#ifndef SSD_CONFIG_H_
#define SSD_CONFIG_H_

#define SSD_NO_OF_SSDs 2


#define SSD_u8_MODULE1_SEGMENTA DIO_PIN25
#define SSD_u8_MODULE1_SEGMENTB DIO_PIN24
#define SSD_u8_MODULE1_SEGMENTC DIO_PIN28
#define SSD_u8_MODULE1_SEGMENTD DIO_PIN30
#define SSD_u8_MODULE1_SEGMENTE DIO_PIN31
#define SSD_u8_MODULE1_SEGMENTF DIO_PIN26
#define SSD_u8_MODULE1_SEGMENTG DIO_PIN27

#define SSD_u8_MODULE1_ENABLE 	DIO_PIN29
#define SSD_u8_MODULE1_TYPE 	SSD_COMMON_CATHODE
#define SSD_u8_MODULE1_INIT_VAL SSD_u8_NUMBER_ZERO

#define SSD_u8_MODULE2_SEGMENTB DIO_PIN0
#define SSD_u8_MODULE2_SEGMENTA DIO_PIN1
#define SSD_u8_MODULE2_SEGMENTC DIO_PIN4
#define SSD_u8_MODULE2_SEGMENTD DIO_PIN6
#define SSD_u8_MODULE2_SEGMENTE DIO_PIN7
#define SSD_u8_MODULE2_SEGMENTF DIO_PIN2
#define SSD_u8_MODULE2_SEGMENTG DIO_PIN3

#define SSD_u8_MODULE2_ENABLE 	DIO_PIN5
#define SSD_u8_MODULE2_TYPE 	SSD_COMMON_CATHODE
#define SSD_u8_MODULE2_INIT_VAL SSD_u8_NUMBER_SIX


#define SSD_u8_MODULE3_SEGMENTA DIO_PIN9
#define SSD_u8_MODULE3_SEGMENTB DIO_PIN8
#define SSD_u8_MODULE3_SEGMENTC DIO_PIN12
#define SSD_u8_MODULE3_SEGMENTD DIO_PIN14
#define SSD_u8_MODULE3_SEGMENTE DIO_PIN15
#define SSD_u8_MODULE3_SEGMENTF DIO_PIN10
#define SSD_u8_MODULE3_SEGMENTG DIO_PIN11

#define SSD_u8_MODULE3_ENABLE 	DIO_PIN13
#define SSD_u8_MODULE3_TYPE 	SSD_COMMON_CATHODE
#define SSD_u8_MODULE3_INIT_VAL SSD_u8_NUMBER_SIX

u8 SSD_Au8Segments[SSD_NO_OF_SSDs][SSD_NUMBER_OF_SEGMENTS] \
= { {SSD_u8_MODULE1_SEGMENTA, SSD_u8_MODULE1_SEGMENTB,
		SSD_u8_MODULE1_SEGMENTC, SSD_u8_MODULE1_SEGMENTD,
		SSD_u8_MODULE1_SEGMENTE, SSD_u8_MODULE1_SEGMENTF,
		SSD_u8_MODULE1_SEGMENTG},
		{SSD_u8_MODULE2_SEGMENTA, SSD_u8_MODULE2_SEGMENTB,
				SSD_u8_MODULE2_SEGMENTC, SSD_u8_MODULE2_SEGMENTD,
				SSD_u8_MODULE2_SEGMENTE, SSD_u8_MODULE2_SEGMENTF,
				SSD_u8_MODULE2_SEGMENTG}, {SSD_u8_MODULE3_SEGMENTA, SSD_u8_MODULE3_SEGMENTB,
						SSD_u8_MODULE3_SEGMENTC, SSD_u8_MODULE3_SEGMENTD,
						SSD_u8_MODULE3_SEGMENTE, SSD_u8_MODULE3_SEGMENTF,
						SSD_u8_MODULE3_SEGMENTG}};

u8 SSD_Au8ModuleType[SSD_NO_OF_SSDs] \
={SSD_u8_MODULE1_TYPE , SSD_u8_MODULE2_TYPE,  SSD_u8_MODULE3_TYPE};

u8 SSD_Au8ModuleEnable[SSD_NO_OF_SSDs] \
={SSD_u8_MODULE1_ENABLE , SSD_u8_MODULE2_ENABLE, SSD_u8_MODULE3_ENABLE};

u8 SSD_Au8ModuleInitValue[SSD_NO_OF_SSDs] \
={SSD_u8_MODULE1_INIT_VAL , SSD_u8_MODULE2_INIT_VAL, SSD_u8_MODULE3_INIT_VAL};


#endif /* SSD_CONFIG_H_ */
