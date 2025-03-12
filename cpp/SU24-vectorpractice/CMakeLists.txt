cmake_minimum_required(VERSION 3.16)


project(VectorPractice LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# add_executable(VectorPractice_test VectorPractice_unittest.cpp)
# set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
# set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
# # set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)


# add_library(VectorPractice  VectorPractice.cpp)

# target_include_directories(VectorPractice  PUBLIC include)

# add_executable(first main.cpp)
# target_link_libraries(first PUBLIC VectorPractice)

# enable_testing()

# include(FetchContent)

# FetchContent_Declare(
#   googletest
#   GIT_REPOSITORY https://github.com/google/googletest.git
#   GIT_TAG        release-1.11.0
# )
# FetchContent_MakeAvailable(googletest)

# add_library(GTest::GTest INTERFACE IMPORTED)
# target_link_libraries(GTest::GTest INTERFACE gtest_main)


# target_link_libraries(VectorPractice_test
#  PRIVATE
#   GTest::GTest
#   VectorPractice )

# add_test(VectorPractice_gtests VectorPractice_test)
