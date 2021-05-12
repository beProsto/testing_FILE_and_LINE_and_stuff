#include "dev.hpp"

#include "test.hpp"
#include "test/test.hpp"

int main() {
	DEV(LOG, "Application Started!");

	print_test();
	print_test_test();
	
	return 0;
}