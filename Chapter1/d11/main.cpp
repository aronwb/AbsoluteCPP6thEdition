// Display 1.1 (page 33)

#include <iostream>
using namespace std;

int main() {
	int numberOfLanguages;

	cout << "How many languages do you speak?\n";
	cin >> numberOfLanguages;

	if (numberOfLanguages < 1)
		cout << "Read the preface.\n";
	else
		cout << "Enjoy the book!\n";

	return 0;
}