cmake_minimum_required(VERSION 3.7)

set(LIBWEBRTC_INCLUDE_PATH "D:/webrtcBuild/Sept/webrtc_checkout/src")
set(ABSL_PATH "${LIBWEBRTC_INCLUDE_PATH}/third_party/abseil-cpp")

if(MSVC)
	set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MT")
	set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MTd")
	
endif()

add_library(func_thread_handler
	func_thread_handler.h
	func_thread_handler.cpp
	msg_loop_libraray.h
	)

target_include_directories(func_thread_handler PUBLIC 
	$<BUILD_INTERFACE:${ABSL_PATH}>
	)
	
if(INCLUDE_UNIT_TEST)
add_subdirectory(unit_test)
endif(INCLUDE_UNIT_TEST)