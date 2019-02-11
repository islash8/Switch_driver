/*
 * SWI_Prog.c
 *
 *  Created on: Feb 11, 2019
 *      Author: islash8
 */


#include "STD_Types.h"
#include "LIB_Bit_Operations.h"

#include "DIO_Interface.h"

#include "SWI_Interface.h"
#include "SWI_Private.h"
#include "SWI_Config.h"


u8 SWI_u8GetSwitch (u8 copy_u8SwitchNum, u8 *copy_pu8SwtichState)
{
	/*Local Variables*/
	u8 Local_u8Error = STD_ERROR_OK;
	u8 Local_u8SwiSt;

	if ((copy_u8SwitchNum >= SWI_NO_OF_SWI) || (copy_pu8SwtichState == NULL))
	{
		Local_u8Error = STD_ERROR_NOK;
	}
	else
	{
		Local_u8Error = DIO_u8ReadPinValue(SWI_Au8SwConnection[copy_u8SwitchNum], &Local_u8SwiSt);
		switch (SWI_Au8SwType[copy_u8SwitchNum])
		{
		/* in case the SWI is connected with pull-up resistor */
		case (SWI_PULL_UP):
				{
			if (Local_u8SwiSt == SWI_INPUT_HIGH)
				*copy_pu8SwtichState = SWI_RELEASED;  /* Released */
			else
				*copy_pu8SwtichState = SWI_PRESSED;   /* Pressed */
			break;
				}
		/* in case the SWI is connected with pull-down resistor */
		case (SWI_PULL_DOWN):
				{
			if (Local_u8SwiSt == SWI_INPUT_LOW)
				*copy_pu8SwtichState = SWI_RELEASED;   /* Released */
			else
				*copy_pu8SwtichState = SWI_PRESSED;    /* Pressed */
			break;
				}
		}
	}
	/*Function return*/
	return Local_u8Error;
}
