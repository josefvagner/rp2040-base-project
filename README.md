# Base Project for RP2040 with C/C++ Pico SDK

This is a base project for programming RP2040 microcontroller chips using the C/C++ Pico SDK.

## Project Structure

- `include/`: Header files
  - `config.h`: Configuration header file
- `src/`: Source files
  - `main.c`: Main source file
- `CMakeLists.txt`: CMake build configuration
- `.gitignore`: Git ignore file

## Getting Started

### Prerequisites

- CMake 3.13 or higher
- Pico SDK

### Downloading the Pico SDK

1. Clone the Pico SDK repository:
   ```sh
   git clone -b master https://github.com/raspberrypi/pico-sdk.git
   ```

2. Set the `PICO_SDK_PATH` environment variable to point to the Pico SDK directory:
   ```sh
   export PICO_SDK_PATH=<path_to_pico_sdk>
   ```

### Setting Up the Development Environment in CLion

1. Open CLion and select "Open" from the welcome screen. Navigate to the root directory of your project and open it.

2. Go to `File` > `Settings` > `Build, Execution, Deployment` > `CMake`.

3. Add a new CMake profile if one does not already exist. Set the CMake executable to the path where CMake is installed.

4. Set the `CMake options` to include the path to the Pico SDK:
   ```sh
   -DPICO_SDK_PATH=<path_to_pico_sdk>
   ```

5. Click `OK` to save the settings.

6. Go to `File` > `Reload CMake Project` to apply the changes.

### Building the Project

1. Clone the repository:
   ```sh
   git clone <repository_url>
   cd <repository_directory>
   ```

2. Initialize the Pico SDK:
   ```sh
   git submodule update --init
   export PICO_SDK_PATH=<path_to_pico_sdk>
   ```

3. Create a build directory and navigate into it:
   ```sh
   mkdir build
   cd build
   ```

4. Configure the project with CMake:
   ```sh
   cmake ..
   ```

5. Build the project:
   ```sh
   make
   ```

### Flashing the Firmware

1. Connect the RP2040 board to your computer.
2. Press and hold the BOOTSEL button while plugging the board into USB.
3. Copy the generated `.uf2` file from the `build` directory to the RP2040 USB mass storage device.

## License

This project is licensed under the MIT License.
```