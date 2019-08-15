cmake_minimum_required(VERSION 3.1)

project(function_caller_thread)

add_executable(function_thread_test
   main.cpp
   test_msg_loop_lib.cpp
   )

target_include_directories(function_thread_test PUBLIC 
	"../"
	)
	
target_link_libraries( function_thread_test 
func_thread_handler
)