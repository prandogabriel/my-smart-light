#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "sdkconfig.h"

#define BLINK_GPIO GPIO_NUM_2

void duck_io_init(void)
{
    gpio_reset_pin(BLINK_GPIO);
    /* Set the GPIO as a push/pull output */
    gpio_set_direction(BLINK_GPIO, GPIO_MODE_OUTPUT);

} 

void duck_io_set_light_on(void){

   gpio_set_level(BLINK_GPIO, 1);
}

void duck_io_set_light_off(void){
    
    gpio_set_level(BLINK_GPIO, 0);

}
