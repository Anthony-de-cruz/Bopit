#include "game.h"

#include "stm32f7xx_hal.h"
#include "stm32f7xx_hal_gpio.h"
#include "Board_LED.h"

void touch_sensor(void){
    GPIO_InitTypeDef gpio; 
    
    LED_Initialize(); 
	
	__HAL_RCC_GPIOC_CLK_ENABLE();
 

	gpio.Mode = GPIO_MODE_INPUT;
	gpio.Pull = GPIO_PULLDOWN; 
	gpio.Speed = GPIO_SPEED_HIGH; 
    
    gpio.Pin = GPIO_PIN_6;
	HAL_GPIO_Init(GPIOC, &gpio);
    
    while(1){
        
       if( HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_6)  ){
       
            LED_On(0U);
       }
       
       else{
           LED_Off(0U); 
       }
    }
}