#include <stdio.h>
#include "pico/stdlib.h"
#include "stdbool.h"

int main()
{
	stdio_init_all();
    while(true) {
        printf("Hello World!\n");
        sleep_ms(1000);
    }

    return 0;
} 