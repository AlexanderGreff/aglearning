
include(FetchContent)

#----------------------------------------------------------------------------

option(OATPP_LINK_ATOMIC OFF)
option(BUILD_SHARED_LIBS OFF)

FetchContent_Declare(
  oatpp
  GIT_REPOSITORY https://github.com/oatpp/oatpp.git
  GIT_TAG        1.3.0-latest
  # GIT_TAG        1.4.0
  )
  
  FetchContent_GetProperties(oatpp)
  
  
  if (NOT oatpp_POPULATED)
    FetchContent_Populate(oatpp)
    add_subdirectory(${oatpp_SOURCE_DIR} ${oatpp_BINARY_DIR})
  endif()
  
  
add_library(oatpp::oatpp ALIAS oatpp)

#----------------------------------------------------------------------------
# find_package(oatpp REQUIRED)

#----------------------------------------------------------------------------
# https://oatpp.io/docs/installation/unix-linux/#install-oat

add_executable(oatpp_demo oatpp_demo.cpp)

target_link_libraries(oatpp_demo
PRIVATE
oatpp::oatpp
# prf_core
)


#----------------------------------------------------------------------------