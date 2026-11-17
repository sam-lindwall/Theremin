/*
 * main.c — theremin firmware entry point
 *
 * Target: Raspberry Pi Pico 2 W (RP2350)
 *
 * test to make sure toolchain works. project firmware coming soon!
 */

#include <stdio.h>
#include "pico/stdlib.h"

int main(void) {
    stdio_init_all();

    unsigned int tick = 0;
    while (true) {
        printf("theremin alive: %u\n", tick++);
        sleep_ms(1000);
    }
}
