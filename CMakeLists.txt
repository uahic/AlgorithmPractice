project(AlgorithmPractice)
cmake_minimum_required(VERSION 2.8)

list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/CMake)
include(gtest)
include(config)

# include_directories( ${CMAKE_CURRENT_BINARY_DIR} )

# Including all the subfolders
enable_testing()
add_subdirectory(src)
add_subdirectory(tests)
