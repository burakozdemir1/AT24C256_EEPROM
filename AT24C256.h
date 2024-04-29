/*
 * AT24C256.h
 *
 *  Created on: 29 Nis 2024
 *      Author: burak
 */

#ifndef INC_AT24C256_H_
#define INC_AT24C256_H_


#include "stdint.h"
#include "stm32f0xx_hal.h"


void EEPROM_Write (uint16_t page, uint16_t offset, uint8_t *data, uint16_t size);
void EEPROM_Read (uint16_t page, uint16_t offset, uint8_t *data, uint16_t size);
void EEPROM_PageErase (uint16_t page);
void Scan_I2C_Address();
void EEPROM_Write_NUM (uint16_t page, uint16_t offset, float  fdata);
float EEPROM_Read_NUM (uint16_t page, uint16_t offset);
void removeData(uint8_t* original_data, int original_length, uint8_t* clean_data) ;









#endif /* INC_AT24C256_H_ */
