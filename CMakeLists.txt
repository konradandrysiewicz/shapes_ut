cmake_minimum_required (VERSION 2.6)

option(test "Build all tests." OFF)

# executable
project (UT)
add_executable(Program main.cpp menu.cpp square.cpp rectangle.cpp triangle.cpp circle.cpp trapezium.cpp)
add_definitions(-std=c++11)

# UT
# to enable please use 
# cmake -Dtest=ON

if (test)
	enable_testing()
	find_package(GTest REQUIRED)
	include_directories(${GTEST_INCLUDE_DIRS})
	add_executable(runTests test.cpp square.cpp rectangle.cpp)
	target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)
endif()
