#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "stm32f7xx_hal.h"
#include "GLCD_Config.h"
#include "Board_GLCD.h"
#include "Board_Touch.h"

#include "game.h"
#include "display.h"
#include "sensor.h"


int main(void){
    init_display();
    SensorInit();
    while(1){
        
        play_game();
    }
}
