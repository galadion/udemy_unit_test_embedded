#ifndef GPIO_H
#define GPIO_H

#include <stdint.h>

#define GPIO_OK                         0
#define GPIO_FAIL                       -1

int GPIO_SetPinAsOutput (uint8_t pin);
int GPIO_SetPinAsInput  (uint8_t pin);

#endif //GPIO_H
