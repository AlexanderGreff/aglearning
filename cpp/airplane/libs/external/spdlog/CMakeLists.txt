
include(FetchContent)

#----------------------------------------------------------------------------


FetchContent_Declare(
  spdlog
  GIT_REPOSITORY https://github.com/gabime/spdlog.git
  GIT_TAG        v2.x
)

FetchContent_GetProperties(spdlog)

if (NOT spdlog_POPULATED)
  FetchContent_Populate(spdlog)
  add_subdirectory(${spdlog_SOURCE_DIR} ${spdlog_BINARY_DIR})
endif()


#----------------------------------------------------------------------------
# find_package(spdlog REQUIRED)

#----------------------------------------------------------------------------
add_executable(spdlog_logger_demo spdlog_logger_demo.cpp)

target_link_libraries(spdlog_logger_demo
PRIVATE
spdlog::spdlog
# prf_core
)


#----------------------------------------------------------------------------