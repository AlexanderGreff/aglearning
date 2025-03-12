cmake_minimum_required(VERSION 3.16)


project(practice03 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)


# add_library(Sample  Sample.cpp)

# target_include_directories(Sample  PUBLIC include)

add_executable(list main.cpp)
# target_link_libraries(first PUBLIC Sample)

enable_testing()

# include(FetchContent)

# FetchContent_Declare(
#   googletest
#   GIT_REPOSITORY https://github.com/google/googletest.git
#   GIT_TAG        release-1.11.0
# )
# FetchContent_MakeAvailable(googletest)

# add_library(GTest::GTest INTERFACE IMPORTED)
# target_link_libraries(GTest::GTest INTERFACE gtest_main)

# add_executable(Sample_test Sample_unittest.cpp)

# target_link_libraries(Sample_test
#  PRIVATE
#   GTest::GTest)
#   # Sample )

# add_test(Sample_gtests Sample_test)
