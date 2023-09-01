#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "sdkconfig.h"

#define BLINK_GPIO GPIO_NUM_2

void light_io_init(void)
{
    // TODO fazer lógica de inicialização
} 

void light_io_set_light_on(void){
 // TODO fazer lógica de ligar led
}

void light_io_set_light_off(void){
    // TODO fazer lógica de desligar led
}
