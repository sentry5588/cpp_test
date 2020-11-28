#include <iostream>
#include <vector>
#include <iterator>

int main(void) {
	std::vector<double> v = {1.0, 2.0, 3};
	double a[4] = {1.0, 2.0, 3.0, 4.0};
	for (auto i : v) {
		std::cout << i*2.0 << std::endl;
	}

	for (auto i = std::begin(a); i != std::end(a); i++) {
		std::cout << "i=" << i << ", *i=" << *i << std::endl;
	}
	return 0;
}
