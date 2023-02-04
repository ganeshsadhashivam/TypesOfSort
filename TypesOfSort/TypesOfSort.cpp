// TypesOfSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void selectionSort(int arr[],int n) {

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[i]) {
				//cout << i<< " " << j << endl;;
				//cout << arr[i] << " " << arr[j] << endl;;
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}

	}


}

int main()
{
	cout << "Types Of Sorts\n";
	cout << "                " << endl;
	cout << "Selection Sort \n";
	cout << "                " << endl;
	int arr[] = { 13,46,24,52,20,9 };
	int lengthofarray = (sizeof(arr) / sizeof(int));
	cout << "Before Sorting" << endl;
	cout << "                " << endl;
	for (int k = 0; k < size(arr); k++) {
		cout << arr[k] << " ";
	}
	cout << endl;
	cout << "                " << endl;
	selectionSort(arr,lengthofarray);

	cout << "After Sorting" << endl;
	cout << "                " << endl;


	for (int k = 0; k < size(arr); k++) {
		cout << arr[k] << " ";
	}


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
