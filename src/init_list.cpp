#include <initializer_list>
#include <iostream>

double sum(std::initializer_list<double> initlist) {
	double all = 0.0;
	for (auto p = initlist.begin(); p != initlist.end(); ++p) {
		all += *p;
	}
	return all;
}


int main(int argc, char const *argv[]) {
	double all = sum({1.1, 2.2, 3.5, 4});
	std::cout << all << std::endl;
	return 0;
}