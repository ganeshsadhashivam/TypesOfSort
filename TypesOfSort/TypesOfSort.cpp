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


/*

class Solution {
public:
//merge
void merge(int mergearr[], int left, int mid, int lengthofarray) {

	cout << "hii";
	int lefthalf = left;
	int righthalf = mid + 1;
	int index = left;
	int temp[1000] = { 0 };//storing elements in a temp array


	while (left <= mid && righthalf <= lengthofarray) {

		if (mergearr[left] < mergearr[righthalf]) {
			temp[index] = mergearr[left];
			left++;
		}
		else {
			temp[index] = mergearr[righthalf];
			righthalf++;

		}
		index++;
	}


	if (lefthalf > mid) {

		while (righthalf <= lengthofarray) {
			temp[index] = mergearr[righthalf];
			index++;
			righthalf++;
		}
	}
	else {
		while (lefthalf <= mid) {
			temp[index] = mergearr[lefthalf];
			index++;
			lefthalf++;
		}
	}

	for (int index = lefthalf; index <= righthalf; index++) {
		mergearr[index] = temp[index];
	}
}

//mergesort
void mergeSort(int mergearr[], int left, int lengthofarray) {

	cout << "ji";
	if (left < lengthofarray) {
		int mid = (left + lengthofarray) / 2; //midpoint 
		mergeSort(mergearr, left, mid); //left half 
		mergeSort(mergearr, mid + 1, lengthofarray); //right half
		merge(mergearr, left, mid, lengthofarray);
	}
}

};
*/

class Solution {
public:
	void merge(int arr[], int l, int mid, int r)
	{
		cout << l << mid << r << endl;;
		int i = l;        // starting index of left half of arr
		int j = mid + 1;   // starting index of right half of arr
		int f = l;        // index used to transfer elements in temporary array
		int temp[1000]; // temporary array

		//storing elements in the temporary array in a sorted manner//

		while (i <= mid && j <= r) {
			if (arr[i] < arr[j]) {
				temp[f] = arr[i];
				i++;
			}
			else {
				temp[f] = arr[j];
				j++;
			}
			f++;
		}

		// if elements on the left half are still left //

		if (i > mid) {
			while (j <= r) {
				temp[f] = arr[j];
				f++; j++;
			}
		}
		else {
			//  if elements on the right half are still left //
			while (i <= mid) {
				temp[f] = arr[i];
				f++; i++;
			}
		}

		// transfering all elements from temporary to arr //
		for (int f = l; f <= r; f++) {
			arr[f] = temp[f];
		}
	}
	void mergeSort(int arr[], int l, int r)
	{
		if (l < r) {
			int mid = (l + r) / 2;
			mergeSort(arr, l, mid);  // left half
			mergeSort(arr, mid + 1, r); // right half
			merge(arr, l, mid, r);  // merging sorted halves
		}
	}
};

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

	//merge sort

	cout << "Merge Sort \n";
	cout << "____________________\n";
	cout << "                " << endl;
	int mergearr[] = {100, 10,5,2,50 };
	int mergeArrayLength = (sizeof(mergearr) / sizeof(int));
	//cout << insertionArrayLength << endl;
	cout << "Before Sorting" << endl;
	//cout << "                " << endl;
	for (int j = 0; j < size(mergearr); j++) {
		cout << mergearr[j] << " ";
	}
	cout << endl;
	cout << "                " << endl;
	int left = 0;
	Solution obj;
	obj.mergeSort(mergearr,left, insertionArrayLength);

	cout << "After Sorting" << endl;

	cout << "                " << endl;


	for (int jj = 0; jj < size(mergearr); jj++) {
		cout << mergearr[jj] << " ";
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
