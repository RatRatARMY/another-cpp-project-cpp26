add_library(somethingc++ SHARED
        0.cpp
        0.hpp
)
add_library(randomc++ SHARED
        1.cpp
        1.hpp
)
target_include_directories(somethingc++ PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(randomc++ PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})