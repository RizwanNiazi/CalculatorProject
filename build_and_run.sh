#!/bin/bash

# Exit script on any error
set -e

# Set up directories
echo "Setting up project directories..."
mkdir -p build

# Run CMake to generate the build system
echo "Running CMake..."
cd build
cmake ..

# Build the project using Make
echo "Building the project..."
make

# Run the calculator program
echo "Running the calculator program..."
./Calculator

# Run the tests
echo "Running the tests..."
./tests

# Provide feedback to the user
echo "Build and execution complete. If you see any issues, check the output above for details."
