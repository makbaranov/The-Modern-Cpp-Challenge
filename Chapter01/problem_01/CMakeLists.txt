cmake_minimum_required (VERSION 3.7.0) 
project(problem_01)

add_executable(problem_01 main.cpp solution.h)
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT problem_01)


set_target_properties (problem_01 PROPERTIES FOLDER "01.Math")

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
  problem_01_test
  problem_01_test.cpp
)
target_link_libraries(
  problem_01_test
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(problem_01_test)
