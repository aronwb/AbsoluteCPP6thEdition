#include <iostream>
using namespace std;

int main() {
	int x(0), y(0), z(0);
	
	cout << "Give x a value: " << endl;
	cin >> x;
	cout << "Give y a value: " << endl;
	cin >> y;
	cout << "Give z a value: " << endl;
	cin >> z;

	// 1st
	int expression1 = 3 * x;
	cout << "Value of mathematical expression is: " << expression1 << endl;

	// 2nd
	int expression2 = 3 * x + y;
	cout << "Value of mathematical expression is: " << expression2 << endl;

	// 3rd
	// Note: Dividing two ints performs integer division, so the fractional part is discarded.
	// Note: Using 7.0 makes one operand a double, causing floating-point division.
	// 5 / 2 = 2
	// 5 / 2.5 = 2.5
	double expression3 = (x + y) / 7.0;
	cout << "Value of mathematical expression is: " << expression3 << endl;

	// 4th
	double expression4 = (3 * x + y) / (z + 2.0);
	cout << "Value of mathematical expression is: " << expression4 << endl;

	return 0;
}