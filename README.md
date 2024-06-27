# C++ Calculator Project

This project implements a simple calculator with basic arithmetic operations, undo functionality, and the ability to return the result of the last operation. It uses modern C++ features and CMake for building and testing.

## Features

- **Arithmetic Operations**: Supports addition, subtraction, multiplication, and division of integers.
- **Undo Functionality**: Allows undoing the last `n` operations.
- **Result Functionality**: Retrieves the result of the last performed operation.
- **Modern C++**: Utilizes features from C++17.
- **Testing**: Includes unit tests using Google Test.

## Getting Started

### Prerequisites

Ensure you have the following installed on your system:
- C++ compiler supporting C++17 or later (e.g., `g++`, `clang++`)
- CMake (version 3.10 or later)
- Make (or any other build system supported by CMake)
- Git (optional, for cloning the project)

### Build and Run

Follow these steps to build and run the project:

1. **Clone the Repository** (if you haven't already):
    ```bash
    git clone https://github.com/RizwanNiazi/CalculatorProject.git
    cd CalculatorProject
    ```

2. **Make the Build Script Executable**:
    ```bash
    chmod +x build_and_run.sh
    ```

3. **Execute the Build Script**:
    ```bash
    rm -rf build
    ./build_and_run.sh
    ```

### Running the Calculator

After executing the `build_and_run.sh` script, the calculator program will run. You can input arithmetic expressions or commands like `undo n` and `result`. For example:
- `2 + 3`
- `5 - 1`
- `undo 1`
- `result`

### Running the Tests

The `build_and_run.sh` script also runs the tests automatically. However, you can run them manually by executing the following command from the `build` directory:
```bash
./tests
```

### Project Structure

    `include/Calculator.h`: Header file for the Calculator class.
    `src/Calculator.cpp`: Implementation of the Calculator class.
    `src/Main.cpp`: Command-line interface for the calculator.
    `tests/test_Calculator.cpp`: Unit tests for the Calculator class.
    `CMakeLists.txt`: CMake configuration for building the project.
    `build_and_run.sh`: Bash script to automate the build and run process.
    `README.md`: Documentation and instructions.

# External Dependencies

The project uses Google Test for unit testing. CMake will automatically download and build Google Test during the build process.
License

# License

This project is licensed under the MIT License - see the LICENSE file for details.
Acknowledgements

    Google Test: Google Test GitHub
