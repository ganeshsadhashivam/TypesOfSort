// TypesOfSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Selection Sort
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


//Bubble Sort

void bubbleSort(int bubblearr[], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0 ; j < n-i-1; j++) {
			if (bubblearr[j] > bubblearr[j+1]) {
				//cout << i<< " " << j << endl;;
				//cout << bubblearr[i] << " " << bubblearr[j] << endl;;
				int temp = bubblearr[j];
				bubblearr[j] = bubblearr[j+1];
				bubblearr[j+1] = temp;
			}
		}

	}

	

}


//insertion sort
void insertionSort(int insertionarr[], int n) {

	for (int i = 1; i < n; i++) {
		int current = insertionarr[i];
		int j = i - 1;
		while (j >= 0 && insertionarr[j] > current) {

			insertionarr[j + 1] = insertionarr[j];
			j--;

		}
		insertionarr[j + 1] = current;
	}

}

int main()
{
	cout << "Types Of Sorts\n";
	cout << "                " << endl;
	cout << "Selection Sort \n";
	cout << "____________________\n";
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
	cout << endl;
	cout << endl;

	cout << "Bubble Sort \n";
	cout << "____________________\n";
	//cout << "                "<< endl;
	int bubblearr[] = { 20,1,44,233,55,3 };
	int lengthofbubarray = (sizeof(bubblearr) / sizeof(int));
	//cout << lengthofbubarray << endl;
	cout << "Before Sorting" << endl;
	cout << "                " << endl;
	for (int kk = 0; kk < size(bubblearr); kk++) {
		cout << bubblearr[kk] << " ";
	}
	cout << endl;
	cout << "                " << endl;
	bubbleSort(bubblearr, lengthofbubarray);

	cout << "After Sorting" << endl;
	
	//cout << "                " << endl;


	for (int kkk = 0; kkk < size(bubblearr); kkk++) {
		cout << bubblearr[kkk] << " ";
	}
	cout << endl;
	cout << endl;


	cout << "Insertion Sort \n";
	cout << "____________________\n";
	cout << "                " << endl;
	int insertionarr[] = {10,5,2 };
	int insertionArrayLength = (sizeof(insertionarr) / sizeof(int));
	//cout << insertionArrayLength << endl;
	cout << "Before Sorting" << endl;
	//cout << "                " << endl;
	for (int j = 0; j < size(insertionarr); j++) {
		cout << insertionarr[j] << " ";
	}
	cout << endl;
	cout << "                " << endl;
	insertionSort(insertionarr, insertionArrayLength);

	cout << "After Sorting" << endl;
	
	cout << "                " << endl;


	for (int jj = 0; jj < size(insertionarr);jj++) {
		cout << insertionarr[jj] << " ";
	}
	cout << endl;

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
