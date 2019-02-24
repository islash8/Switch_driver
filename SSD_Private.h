/*
 * SSD_Private.h
 *
 *  Created on: Feb 9, 2019
 *      Author: islash8
 */

#ifndef SSD_PRIVATE_H_
#define SSD_PRIVATE_H_

#define SSD_COMMON_ANODE  		1
#define SSD_COMMON_CATHODE  	0

#define SSD_NUMBER_OF_SEGMENTS 	(u8)7
#define SSD_NUMBER_OF_PINS 		(u8)8

#define SSD_MAX_DIGIT_FOR_SSD   (u8)9
#define SSD_MAX_NUMBER			(u8)10

u8 SSD_Au8SEG_PATTERN_CATHODE[SSD_MAX_NUMBER][SSD_NUMBER_OF_SEGMENTS] =
{
/*    a                   b               c              d                   e               f                g              */
  {DIO_PIN_HIGH, DIO_PIN_HIGH, DIO_PIN_HIGH, DIO_PIN_HIGH, DIO_PIN_HIGH, DIO_PIN_HIGH, DIO_PIN_LOW},    // 0
  {DIO_PIN_LOW , DIO_PIN_HIGH, DIO_PIN_HIGH, DIO_PIN_LOW , DIO_PIN_LOW , DIO_PIN_LOW , DIO_PIN_LOW},    // 1
  {DIO_PIN_HIGH, DIO_PIN_HIGH, DIO_PIN_LOW , DIO_PIN_HIGH, DIO_PIN_HIGH, DIO_PIN_LOW , DIO_PIN_HIGH},   // 2
  {DIO_PIN_HIGH, DIO_PIN_HIGH, DIO_PIN_HIGH, DIO_PIN_HIGH, DIO_PIN_LOW , DIO_PIN_LOW , DIO_PIN_HIGH},   // 3
  {DIO_PIN_LOW , DIO_PIN_HIGH, DIO_PIN_HIGH, DIO_PIN_LOW , DIO_PIN_LOW , DIO_PIN_HIGH, DIO_PIN_HIGH},   // 4
  {DIO_PIN_HIGH, DIO_PIN_LOW , DIO_PIN_HIGH, DIO_PIN_HIGH, DIO_PIN_LOW , DIO_PIN_HIGH, DIO_PIN_HIGH},   // 5
  {DIO_PIN_HIGH, DIO_PIN_LOW , DIO_PIN_HIGH, DIO_PIN_HIGH, DIO_PIN_HIGH, DIO_PIN_HIGH, DIO_PIN_HIGH},   // 6
  {DIO_PIN_HIGH, DIO_PIN_HIGH, DIO_PIN_HIGH, DIO_PIN_LOW , DIO_PIN_LOW , DIO_PIN_LOW , DIO_PIN_LOW},    // 7
  {DIO_PIN_HIGH, DIO_PIN_HIGH, DIO_PIN_HIGH, DIO_PIN_HIGH, DIO_PIN_HIGH, DIO_PIN_HIGH, DIO_PIN_HIGH},   // 8
  {DIO_PIN_HIGH, DIO_PIN_HIGH, DIO_PIN_HIGH,DIO_PIN_HIGH , DIO_PIN_LOW , DIO_PIN_HIGH, DIO_PIN_HIGH}    // 9
};

u8 SSD_Au8SEG_PATTERN_ANODE[SSD_MAX_NUMBER][SSD_NUMBER_OF_SEGMENTS] =
{
/*    a                   b               c              d                   e               f                g              */
  {DIO_PIN_LOW,  DIO_PIN_LOW,  DIO_PIN_LOW,  DIO_PIN_LOW,  DIO_PIN_LOW,  DIO_PIN_LOW,  DIO_PIN_HIGH},    // 0
  {DIO_PIN_HIGH, DIO_PIN_LOW,  DIO_PIN_LOW,  DIO_PIN_HIGH, DIO_PIN_HIGH, DIO_PIN_HIGH, DIO_PIN_HIGH},    // 1
  {DIO_PIN_LOW,  DIO_PIN_LOW,  DIO_PIN_HIGH, DIO_PIN_LOW,  DIO_PIN_LOW,  DIO_PIN_HIGH, DIO_PIN_LOW},     // 2
  {DIO_PIN_LOW,  DIO_PIN_LOW,  DIO_PIN_LOW,  DIO_PIN_LOW,  DIO_PIN_HIGH, DIO_PIN_HIGH, DIO_PIN_LOW},     // 3
  {DIO_PIN_HIGH, DIO_PIN_LOW,  DIO_PIN_LOW,  DIO_PIN_HIGH, DIO_PIN_HIGH, DIO_PIN_LOW,  DIO_PIN_LOW},     // 4
  {DIO_PIN_LOW,  DIO_PIN_HIGH, DIO_PIN_LOW,  DIO_PIN_LOW,  DIO_PIN_HIGH, DIO_PIN_LOW,  DIO_PIN_LOW},     // 5
  {DIO_PIN_LOW,  DIO_PIN_HIGH, DIO_PIN_LOW,  DIO_PIN_LOW,  DIO_PIN_LOW,  DIO_PIN_LOW,  DIO_PIN_LOW},     // 6
  {DIO_PIN_LOW,  DIO_PIN_LOW,  DIO_PIN_LOW,  DIO_PIN_HIGH, DIO_PIN_HIGH, DIO_PIN_HIGH, DIO_PIN_HIGH},    // 7
  {DIO_PIN_LOW,  DIO_PIN_LOW,  DIO_PIN_LOW,  DIO_PIN_LOW,  DIO_PIN_LOW,  DIO_PIN_LOW,  DIO_PIN_LOW},     // 8
  {DIO_PIN_LOW,  DIO_PIN_LOW,  DIO_PIN_LOW,  DIO_PIN_LOW,  DIO_PIN_HIGH, DIO_PIN_LOW,  DIO_PIN_LOW}      // 9
};


/*Macros for identifying the init flag*/
#define SSD_u8_SSD_INIT_FLAG_ZERO (u8)0
#define SSD_u8_SSD_INIT_FLAG_ONE  (u8)1


/*Macro for identifying the SetOff flag*/
#define SSD_u8_SSD_SET_OFF_FLAG_OFF (u8)0
#define SSD_u8_SSD_SET_OFF_FLAG_ON  (u8)1

/*Macro for identifying the init value of the last digit on each connected SSD*/
#define SSD_u8_SSD_LAST_DIG_INIT_VAL (u8)0

/*Macro for the for loop starting from 0*/
#define SSD_u8_INIT_ITER (u8)0

#endif /* SSD_PRIVATE_H_ */
