#include <stdio.h>
#include "pico/stdlib.h"
#include "stdbool.h"

const uint ON_DEVICE_LED_PIN_GPIO = 25;

void turn_signal_on() {
    gpio_init(ON_DEVICE_LED_PIN_GPIO);
    gpio_set_dir(ON_DEVICE_LED_PIN_GPIO, GPIO_OUT);
    gpio_put(ON_DEVICE_LED_PIN_GPIO, 1);
}

int main()
{
	stdio_init_all();
    turn_signal_on();
    while(true) {
        printf("Hello World!\n");
        sleep_ms(1000);
    }

    return 0;
} 