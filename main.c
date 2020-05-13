#include "stm32f10x.h"
#include "delay.h"
#include "lcd.h"
#include "led.h"
#include "spi.h"
#include "ADC.h"

int main()
{
	
	//uint16_t numb=0;
	delayinit();
	SPI1_Init();
	LED_Init();
	LCD_Init();
	delay_ms(100);
	LCD_Clear(BLACK);
	adcinit();

while (1)
  {
		ADCConvert();
    //delay_ms(1000);
	}
	
	
	
	
	
	
	
}
