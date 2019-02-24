

#include "STD_Types.h"

#include "Lib_Delay.h"

#include "DIO_Interface.h"
#include "SSD_Interface.h"
#include "SWI_Interface.h"


void main (void)
{

	u8 switchValue=66;
	DIO_vInit();
	u8 i=0 , j =0;
//    SSD_u8SetOn(0);
	while(1)
	{
		SWI_u8GetSwitch(0, &switchValue);

		if(switchValue == SWI_PRESSED)
		{

				SSD_u8SetValue(0, i);
				Lib_vDelayMs(200);
				i++;
				if(i == 10)
				{
					j++;
				SSD_u8SetValue(1, j);
				i=0;

				}

		}

		else
		{
			SWI_u8GetSwitch(1, &switchValue);
			if(switchValue == SWI_PRESSED)
			{
				i--;
				SSD_u8SetValue(0, i);
				Lib_vDelayMs(200);
				if(i == 0)
				{
					if(j !=0)
					{
						j--;
				SSD_u8SetValue(1, j);
				i=9;
				}
					else
					{
						j=0; i=0;
					}
				}
			}
		}


	}
}
