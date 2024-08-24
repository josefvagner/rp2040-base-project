// Pico SDK library imports
#include <stdio.h>
#include "pico/stdlib.h"

// Custom header files
#include "config.h"

/**
 * @brief Main function of the program.
 *
 * Initializes standard I/O, waits for 500 milliseconds, and then enters an infinite loop
 * where it prints "Hello, World!" every second.
 *
 * @return int Returns 0 upon successful completion.
 */
int main() {
    // Initialize all standard I/O
    stdio_init_all();

    // Wait for 500 milliseconds
    sleep_ms(500);

    // Infinite loop
    while (1) {
        // Print "Hello, World!" to the console
        puts("Hello, World!\n");

        // Wait for 1000 milliseconds (1 second)
        sleep_ms(1000);
    }

    // Return 0 upon successful completion
    return 0;
}