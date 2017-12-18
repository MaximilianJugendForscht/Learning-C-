#include <iostream>
#include "vector.hpp"

int main () {
	vec::vector <int> vec1{};
	std::cout << "HELLO WORLD" << std::endl;
	std::cout << sizeof(int) << std::endl;
	vec1.push_back (120);
	vec1.push_back (31);
	vec1.push_back (65);
	std::cout << vec1[0] << " " << vec1[1] << " " << vec1[2] << std::endl;
	vec1.assign (1, 15);
	vec1[0] = 1;
	std::cout << vec1[0] << " " << vec1.at(1) << " " << vec1[2] << std::endl;
}