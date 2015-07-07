#include "includes.h"

/*-------------------------------------------------------------------------------------------------------*/

void Usart1_RxCallback_Func(unsigned char *buf, unsigned int len)
{
	printf("[Usart1_RxCallback_Func] len: %d, buf: %s\r\n", len, buf);
}

/*-------------------------------------------------------------------------------------------------------*/

int main(void)
{	
	BSP_Init();	
	usart1_rx_callback_register(Usart1_RxCallback_Func);
	
	while(1)
	{
		LED1_TOGGLE;
		LED2_TOGGLE;
		delay_ms(100);
		printf("------main_loop------\r\n");
	}
	
	return 0;
}
