#include <iostream>
using namespace std;

int main() {
	int totalSeconds(0);
	cout << "Enter total seconds: ";
	cin >> totalSeconds;

	int secondsPerHour(3600), secondsPerMinute(60);
	int hours = totalSeconds / secondsPerHour;
	
	cout << hours << " hours, ";
	int newTotal = totalSeconds - hours * secondsPerHour;

	int minutes = newTotal / secondsPerMinute;
	cout << minutes << " minutes, ";

	int finalTotal = newTotal - minutes * secondsPerMinute;
	cout << finalTotal << " seconds.\n";
	
	return 0;
}