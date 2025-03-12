
include(FetchContent)

#----------------------------------------------------------------------------


FetchContent_Declare(
  oatpp-starter
  GIT_REPOSITORY https://github.com/oatpp/oatpp-starter.git
  GIT_TAG        1.3.0-latest
  # GIT_TAG        1.4.0
  )
  
  FetchContent_GetProperties(oatpp-starter)
  
  
  if (NOT oatpp-starter_POPULATED)
    FetchContent_Populate(oatpp-starter)
    add_subdirectory(${oatpp-starter_SOURCE_DIR} ${oatpp-starter_BINARY_DIR})
  endif()
  
  

#----------------------------------------------------------------------------
# find_package(oatpp-starter REQUIRED)

#----------------------------------------------------------------------------