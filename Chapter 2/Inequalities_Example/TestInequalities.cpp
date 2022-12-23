#include <iostream>
#include "Inequalities.hpp"



int main() {
	double d1, d2;
	std::cout << "Give the first number: ";
	std::cin >> d1;
	std::cout << "Give the second number: ";
	std::cin >> d2;

	char c;
	std::cout << "Which function a) Max() or b) Min()?";
	std::cin >> c;
	if (c == 'a') {
		std::cout << "Max value is: " << Max(d1, d2) << "\n";
	}
	else {
		std:: cout << "Min value is: " << Min(d1, d2) << "\n";
	}
	double dA = 1.0; double dB = 2.0; double dC = 3.0;
	std::cout << "Max and Min of three numbers: " << "\n";
	std::cout << "Max value is: " << Max(dA, dB, dC) << std::endl;
	std::cout << "Min value is: " << Min(dA, dB, dC) << std::endl;

	return 0;
}
