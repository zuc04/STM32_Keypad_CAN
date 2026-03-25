/*
 * pmst_can.h
 *
 *  Created on: Apr 19, 2024
 *      Author: davidebattisti
 */

#ifndef INC_PMST_CAN_H_
#define INC_PMST_CAN_H_

#include <stdint.h>
#include "stm32f1xx_hal.h"
#include "stm32f1xx_hal_can.h"
#include <pmst_identifiers.h>

				      //1122334455667788
#define FIRST_BYTE    0xFF00000000000000
#define	SECOND_BYTE   0x00FF000000000000
#define THIRD_BYTE    0x0000FF0000000000
#define FOURTH_BYTE   0x000000FF00000000
#define FIFTH_BYTE    0x00000000FF000000
#define	SIXTH_BYTE    0x0000000000FF0000
#define SEVENTH_BYTE  0x000000000000FF00
#define EIGHTH_BYTE   0x00000000000000FF

void CAN_Tx(CAN_HandleTypeDef *hcan,uint32_t identifier, uint8_t data_buff[]);
void CAN_Rx(CAN_HandleTypeDef *hcan,uint8_t received_buff[]);

void int64_to_can_message(int64_t *input, uint8_t can_message[]);
int64_t can_message_to_int64(uint8_t can_message[]);
void int16_to_can_message(int16_t *input, uint8_t can_message[]);
int16_t can_message_to_int16(uint8_t can_message[]);

#endif /* INC_PMST_CAN_H_ */
