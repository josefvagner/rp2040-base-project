#include <stdio.h>
#include "pico/stdlib.h"

#include "config.h"

int main() {
    stdio_init_all();
    sleep_ms(500);

    while (1) {
        puts("Hello, World 123!\n");
        sleep_ms(1000);
    }

    return 0;
}