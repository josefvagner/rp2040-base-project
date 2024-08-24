cmake_minimum_required(VERSION 3.13)

include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)

# Set the name
set(PROJECT_NAME base-project)

project(${PROJECT_NAME} C CXX ASM)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

# Add the main executable
add_executable(${PROJECT_NAME}
        src/main.c
        include/config.h
)

# Add the standard library and hardware libraries to the build
target_link_libraries(${PROJECT_NAME}
        pico_stdlib
        )

# Include directories
include_directories(${CMAKE_CURRENT_LIST_DIR}/include)

# Enable USB output, disable UART output
pico_enable_stdio_usb(${PROJECT_NAME} 1)
pico_enable_stdio_uart(${PROJECT_NAME} 0)

# Create map/bin/hex/uf2 files
pico_add_extra_outputs(${PROJECT_NAME})
