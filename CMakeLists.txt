project(AlgorithmPractice)

set(CMAKE_INCLUDE_CURRENT_DIR OFF)

list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/CMake)
include(gtest)
enable_testing()

# Including all the subfolders
add_subdirectory(include)
add_subdirectory(src)
add_subdirectory(tests)
