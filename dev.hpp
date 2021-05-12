#ifndef __DEV_HPP
#define __DEV_HPP

#include <iostream>
#include <string>
#include <cstdlib>

#define DEV(t, x) std::cout << "[" << #t << "] <\"" << __FILE__ << "\", " << __LINE__ << "> \"" << x << "\"\n"

enum {
	LOG = 0,
	ERR = 1,
	WARN = 2,
};

#endif