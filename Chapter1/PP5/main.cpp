#include <iostream>
using namespace std;

int main() {
	double truckCapacity(0); int numberOfBoxes(0), averageWeight(0);
	
	cout << "Enter the truck's maximum load capacity in metric tons: ";
	cin >> truckCapacity;
	cout << "Enter the number of boxes: ";
	cin >> numberOfBoxes;
	cout << "Enter the average weight of the boxes in KG: ";
	cin >> averageWeight;

	double capacityKG = truckCapacity * 1000;
	int weightOfBoxes = numberOfBoxes * averageWeight;
	int maxBoxes = capacityKG / averageWeight;
	int additionalBoxes = maxBoxes - numberOfBoxes;
	int removeBoxes = numberOfBoxes - maxBoxes;

	cout << "The truck can carry this many boxes: " << maxBoxes << endl;
	
	if (weightOfBoxes <= capacityKG) {
		cout << "The truck can carry all boxes.\n";
		cout << "You can add this many boxes: " << additionalBoxes;
	}
	else {
		cout << "The truck is overloaded.\n";
		cout << "You need to remove this many boxes: " << removeBoxes;
	}

	return 0;
}