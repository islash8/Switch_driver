#ifndef SWI_INTERFACE_H_
#define SWI_INTERFACE_H_

#define SWI_SWI0	(u8)0
#define SWI_SWI1	(u8)1
#define SWI_SWI2	(u8)2

#define SWI_PRESSED	1
#define SWI_RELEASED	0

u8 SWI_u8GetSwitch(u8 copy_u8SwitchNum, u8 * copy_pu8SwtichState);

#endif /* SWI_INTERFACE_H_ */
