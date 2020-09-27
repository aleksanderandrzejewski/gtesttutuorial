cmake_minimum_required(VERSION 3.1)
project(cmaketutorial)

add_subdirectory(lib44) #to look for header files
add_executable(exec main.cpp) #binarka
target_link_libraries(exec PUBLIC lib44)
target_include_directories(exec PUBLIC "${PROJECT_BINARY_DIR}")

add_subdirectory(googletest)

file(GLOB_RECURSE MY_APP_TEST_SRC ${CMAKE_CURRENT_SOURCE_DIR}/utest/*.cpp)
add_executable(tests ${MY_APP_TEST_SRC})
target_link_libraries(tests PUBLIC lib44 gtest)
