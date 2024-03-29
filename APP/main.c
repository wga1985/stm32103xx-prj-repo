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
	//usart1_rx_callback_register(Usart1_RxCallback_Func);
	//usart1_dma_test();
	pingpong_buf_test();
	
	while(1)
	{
		if(IS_TIMEOUT_NMS(TimerEvId_ID0, 500))
		{
			LED1_TOGGLE;
			LED2_TOGGLE;
		}

		if(IS_TIMEOUT_NMS(TimerEvId_ID1, 3000))
		{
			//printf("------delay 3s------\r\n");
		}

		//delay_ms(100);
		//printf("------main_loop------\r\n");
	}
	
	return 0;
}
