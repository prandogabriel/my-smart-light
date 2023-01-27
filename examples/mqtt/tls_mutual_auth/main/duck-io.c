#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "sdkconfig.h"

#define GPIO_BUTTON_INPUT 32
#define GPIO_LIGHT_ENABLE 33
#define GPIO_SENSOR_POWER 35

bool light_state = 0;

void duck_io_init(void)
{
    gpio_reset_pin(GPIO_LIGHT_ENABLE);
    /* Set the GPIO as a push/pull output */
    gpio_set_direction(GPIO_LIGHT_ENABLE, GPIO_MODE_OUTPUT);
    gpio_set_level(GPIO_LIGHT_ENABLE, 0);
    light_state = 0;

} 

bool duck_io_get_button_value(void){

    //MPL - Not implemented
    return 0;    
}

uint32_t duck_io_get_sensor_value(void){

    //MPL - Not implemented
    return 0;

}

void duck_io_set_light_on(void){

    gpio_set_level(GPIO_LIGHT_ENABLE, 1);
    light_state = 1;
}

void duck_io_set_light_off(void){
    
    gpio_set_level(GPIO_LIGHT_ENABLE, 0);
    light_state = 0;

}

bool duck_io_get_light_state(void){

    return light_state;

}