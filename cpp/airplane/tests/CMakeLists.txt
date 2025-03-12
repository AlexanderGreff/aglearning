

# enable_testing()

include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        v1.14.0
)
FetchContent_MakeAvailable(googletest)

add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)

add_executable(sample_test sample_unittest.cpp)

target_link_libraries(sample_test
 PRIVATE
  GTest::GTest
  prf_core)

add_test(sample_gtests sample_test)
