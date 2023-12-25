cmake_minimum_required (VERSION 3.7.0) 
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(problem_03)

add_executable(problem_03 main.cpp solution.h)
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT problem_03)

set_target_properties (problem_03 PROPERTIES FOLDER "01.Math")

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  problem_03_test
  problem_03_test.cpp
)
target_link_libraries(
  problem_03_test
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(problem_03_test)