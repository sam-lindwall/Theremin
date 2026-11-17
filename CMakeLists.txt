cmake_minimum_required(VERSION 3.13)

# Raspberry Pi Pico 2 W (RP2350). Must be set before the SDK is imported.
set(PICO_BOARD pico2_w CACHE STRING "Board type")

# Finds the Pico SDK via the PICO_SDK_PATH environment variable.
include(pico_sdk_import.cmake)

project(theremin C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

add_executable(theremin
    src/main.c
)

target_link_libraries(theremin
    pico_stdlib
    hardware_pwm
)

# printf() goes out over USB serial, not the UART pins.
pico_enable_stdio_usb(theremin 1)
pico_enable_stdio_uart(theremin 0)

# Produce the .uf2 file you drag onto the board.
pico_add_extra_outputs(theremin)
