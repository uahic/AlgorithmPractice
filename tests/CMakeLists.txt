INCLUDE_DIRECTORIES( ${CMAKE_SOURCE_DIR}/src/ )
add_executable(tests tests.cpp)
target_link_libraries(tests gtest gtest_main gmock gmock_main)
