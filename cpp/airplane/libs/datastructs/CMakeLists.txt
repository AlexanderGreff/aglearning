add_library(datastructs STATIC)

target_include_directories(datastructs PUBLIC include)

target_sources(datastructs PRIVATE 
    src/Database.cpp
    src/Console.cpp
    src/Service.cpp
    )
    
# target_link_libraries(datastructs STATIC datastructs)