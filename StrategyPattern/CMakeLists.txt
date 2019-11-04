cmake_minimum_required(VERSION 2.4)

project(StrategyPattern)

add_library (duckstrategy Duck.cpp)
add_executable(teststrategy Main.cpp)

target_include_directories (duckstrategy PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories (teststrategy PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries (teststrategy LINK_PUBLIC duckstrategy)