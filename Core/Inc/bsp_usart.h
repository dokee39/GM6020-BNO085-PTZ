#ifndef BSP_USART_H
#define BSP_USART_H
#include "struct_typedef.h"

#define USART6_TX_BUF_LEN 128

void usart6_printf(const char *fmt, ...);
#endif
