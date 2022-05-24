/*
 * pins_typedef.h
 *
 *  Created on: 9 de ago de 2019
 *      Author: lpedroso
 */
#include <SI_EFM8BB1_Register_Enums.h>

#ifndef INC_PINS_TYPEDEF_H_
#define INC_PINS_TYPEDEF_H_

SI_SBIT (IN, SFR_P0, 0);
SI_SBIT (BUTTON_IN, SFR_P1, 2);
SI_SBIT (BUTTON_OUT, SFR_P0, 4);
SI_SBIT (ZEROCROSS, SFR_P1, 3);
SI_SBIT (RELAY_IN, SFR_P0, 2);
SI_SBIT (RELAY_OUT, SFR_P0, 1);
#endif /* INC_PINS_TYPEDEF_H_ */
