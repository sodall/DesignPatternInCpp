cmake_minimum_required(VERSION 2.4)

project(DecoratorPattern)

add_library (coffeedecorator Coffees.cpp Condiments.cpp)
add_executable(testdecorator Main.cpp)

target_include_directories (coffeedecorator PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories (testdecorator PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries (testdecorator LINK_PUBLIC coffeedecorator)