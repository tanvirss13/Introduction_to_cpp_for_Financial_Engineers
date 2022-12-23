#include <iostream>

#include "GenericInequality.cpp"

using namespace std;

int main() {

	int d1, d2;
	cout << "Give the first number: ";
	cin >> d1;
	cout << "Give the second number: ";
	cin >> d2;

	char c;
	cout << "Which function a) Max() or b) Min()? ";
	cin >> c;
	if (c == 'a') {
		cout << "Max value is: " << Max<int>(d1, d2) << endl;
	}
	else {
		cout << "Min value is: " << Min<int>(d1, d2) << endl;
	}

	long dA = 12334; long dB = 2; long dC = -3;
	cout << "Max and Min of thre numbers: " << endl;
	cout << "Max value is: " << Max<long>(dA, dB, dC) << endl;
	cout << "Min value is: " << Min<long>(dA, dB, dC) << endl;

	return 0;
}