#include <assert.h>
#include <iostream>
#include <string>
#include <fstream>

#include "test_all.hpp"

int main()
{
	//test_warpPerspective_uchar();
	//test_warpPerspective_float();

	run_all_test();
	std::cout << "ok" << std::endl;
	return 0;
}

