
include(FetchContent)

#----------------------------------------------------------------------------


FetchContent_Declare(
  fmt
  GIT_REPOSITORY https://github.com/fmtlib/fmt.git
  GIT_TAG        11.0.0
)

FetchContent_GetProperties(fmt)

if (NOT fmt_POPULATED)
  FetchContent_Populate(fmt)
  add_subdirectory(${fmt_SOURCE_DIR} ${fmt_BINARY_DIR})
endif()


#----------------------------------------------------------------------------
# find_package(fmt REQUIRED)

#----------------------------------------------------------------------------
# add_executable(fmt_logger_demo fmt_logger_demo.cpp)

# target_link_libraries(fmt_logger_demo
# PRIVATE
# fmt::fmt
# # prf_core
# )


#----------------------------------------------------------------------------