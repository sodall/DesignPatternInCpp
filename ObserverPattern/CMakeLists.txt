cmake_minimum_required(VERSION 2.4)

project(ObserverPattern)

add_library (weatherobserver Displays.cpp WeatherData.cpp)
add_executable(testobserver Main.cpp)

target_include_directories (weatherobserver PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories (testobserver PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries (testobserver LINK_PUBLIC weatherobserver)