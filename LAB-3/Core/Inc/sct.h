/*
 * sct.h
 *
 *  Created on: Oct 8, 2025
 *      Author: 246894
 */

#ifndef SCT_H_
#define SCT_H_

#include <stdint.h>

void sct_init(void);

void sct_led(uint32_t value);

void sct_value(uint16_t value);

#endif /* SCT_H_ */
