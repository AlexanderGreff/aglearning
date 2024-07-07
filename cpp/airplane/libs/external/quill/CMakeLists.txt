
include(FetchContent)

#----------------------------------------------------------------------------

set(QUILL_FMT_EXTERNAL ON CACHE BOOL "Use external fmt library instead of bundled")

FetchContent_Declare(
  quill
  GIT_REPOSITORY https://github.com/odygrd/quill
  GIT_TAG        v3.8.0
)

FetchContent_GetProperties(quill)

if (NOT quill_POPULATED)
  FetchContent_Populate(quill)
  add_subdirectory(${quill_SOURCE_DIR} ${quill_BINARY_DIR})
endif()


#----------------------------------------------------------------------------
# find_package(quill REQUIRED)

#----------------------------------------------------------------------------
add_executable(quill_logger_demo quill_logger_demo.cpp)

target_link_libraries(quill_logger_demo
PRIVATE
quill::quill
# prf_core
)


#----------------------------------------------------------------------------