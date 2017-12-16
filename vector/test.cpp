#include <iostream>
#include "vector.hpp"

int main () {
	vec::vector <int> vec1;
	std::cout << "HELLO WORLD" << std::endl;
	vec1.push_back (1);
	std::cout << vec1[0] << std::endl;
}