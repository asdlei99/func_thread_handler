
#include <functional>
#include <iostream>
//#include "func_thread_handler.h"
////#include "thread_message_loop.h"
//#include "msg_loop_libraray.h"
using namespace std;

struct Foo {
	int result{ 0 };
	Foo(int num) : num_(num) {/* cout << "Foo constructor\n";*/ };
	Foo(const Foo&) = delete;
	~Foo() {/* cout << "destructor\n";*/ }
	void print_add(int i) { 
		result = num_ + i;
		std::cout << num_ + i << '\n'; 
	}
	
	int num_;
};

int gresult{ 0 };

void print_num(int i)
{
	//std::cout << i << '\n';
	gresult = i;
}


#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "../../catch/catch.hpp"

//TEST_CASE("function_caller_thread", "[thread]") {
//	func_thread_handler a;
//	thread t{ &function_caller_thread::start, &a };
//	int result{ 0 };
//	{
//		function<void()> f = bind([&result](int a) {
//			result = a;
//		}, 23);
//		a.add_function(move(f));
//	}
//
//
//	Foo f{ 100 };
//	function<void()> func = bind(&Foo::print_add, &f, 100);
//	a.add_function(move(func));
//
//	{
//		function<void()> f = bind(print_num, 1213);
//		a.add_function(move(f));
//	}
//
//	
//	
//	this_thread::sleep_for(4s);
//	a.exit_thread();
//    t.join();
//	REQUIRE(result == 23);
//	REQUIRE(f.result == 200);
//	REQUIRE(gresult == 1213);
//	
//}


