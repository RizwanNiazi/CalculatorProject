cmake_minimum_required(VERSION 3.10)

project(Calculator)

set(CMAKE_CXX_STANDARD 17)

# Include directories
include_directories(include)

# Source files
file(GLOB SOURCES "src/*.cpp")

# Create executable for the calculator
add_executable(Calculator ${SOURCES})

# Include Google Test
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
  DOWNLOAD_EXTRACT_TIMESTAMP TRUE  # Set the timestamp option to TRUE to avoid warning
)
FetchContent_MakeAvailable(googletest)

enable_testing()

# Create executable for the tests
add_executable(tests tests/test_Calculator.cpp src/Calculator.cpp)

# Link Google Test to the test executable
target_link_libraries(tests gtest gtest_main)

# Add tests
include(GoogleTest)
gtest_discover_tests(tests)

