/*
	Ryan Bachman
	University of Advancing Technology
	MS549 - Data Structures and Testing
	Fall 2024, Grad 2

	Assignment 3.1 - Data Structures and Testing
	main.cpp
*/

#include "functions.h"

using namespace std;

// Sorting Assignment. This assignment will be looking at Quick Sort vs. Selection Sort and doing a performance analysis.
int main()
{
	// Create the testing vectors for both of the sorting algorithms and fill them using the fillVectors() function.
	// Quick Sort vectors.
	vector<int> quickSortVctr1(100, 0);
	vector<int> quickSortVctr2(1000, 0);
	vector<int> quickSortVctr3(10000, 0);
	vector<int> quickSortVctr4(100000, 0);

	// Selection Sort vectors.
	vector<int> selSortVctr1(100, 0);
	vector<int> selSortVctr2(1000, 0);
	vector<int> selSortVctr3(10000, 0);
	vector<int> selSortVctr4(100000, 0);

	// Call the fillVectors() function for each of the above vectors to fill them.
	quickSortVctr1 = fillVectors(quickSortVctr1);
	quickSortVctr2 = fillVectors(quickSortVctr2);
	quickSortVctr3 = fillVectors(quickSortVctr3);
	quickSortVctr4 = fillVectors(quickSortVctr4);

	selSortVctr1 = fillVectors(selSortVctr1);
	selSortVctr2 = fillVectors(selSortVctr2);
	selSortVctr3 = fillVectors(selSortVctr3);
	selSortVctr4 = fillVectors(selSortVctr4);

	// qSize (Quick Sort) and sSize (Selection Sort) are equal to how many elements are in the vectors.
	int qSize1 = quickSortVctr1.size();
	int qSize2 = quickSortVctr2.size();
	int qSize3 = quickSortVctr3.size();
	int qSize4 = quickSortVctr4.size();

	int sSize1 = selSortVctr1.size();
	int sSize2 = selSortVctr1.size();
	int sSize3 = selSortVctr1.size();
	int sSize4 = selSortVctr1.size();

	// START QUICK SORT CODE
	// Quick Sort (100)
	//cout << "Unsorted Array (QUICK SORT 100): " << endl;
	//printArray(quickSortVctr1, qSize1);

	// Get the start time to get algorithm time calculations.
	chrono::high_resolution_clock::time_point startTime = getStartTime();

	// Sort the array using the bubbleSort function. THIS SORT I USED FROM THE PROFESSOR BUT SEEING THE SORTING IS BROKEN???
	quickSort(quickSortVctr1, 0, qSize1 - 1);

	// Get the end time to get algorithm time calculations.
	chrono::high_resolution_clock::time_point endTime = getEndTime();

	// Output the sort time to the user.
	cout << "Quick Sort (100): " << endl;
	elapsedTime(startTime, endTime);

	//cout << "Quick Sorted Array (QUICK SORT 100): " << endl;
	//printArray(quickSortVctr1, qSize1);

	// Quick Sort (1000)
	//cout << "Unsorted Array (QUICK SORT 1,000): " << endl;
	//printArray(quickSortVctr2, qSize2);

	// Get the start time to get algorithm time calculations.
	startTime = getStartTime();

	// Sort the array using the bubbleSort function. THIS SORT I USED FROM THE PROFESSOR BUT SEEING THE SORTING IS BROKEN???
	quickSort(quickSortVctr2, 0, qSize2 - 1);

	// Get the end time to get algorithm time calculations.
	endTime = getEndTime();

	// Output the sort time to the user.
	cout << "Quick Sort (1,000): " << endl;
	elapsedTime(startTime, endTime);

	//cout << "Quick Sorted Array (QUICK SORT 1,000): " << endl;
	//printArray(quickSortVctr2, qSize2);

	// Quick Sort (10000)
	//cout << "Unsorted Array (QUICK SORT 10,000): " << endl;
	//printArray(quickSortVctr3, qSize3);

	// Get the start time to get algorithm time calculations.
	startTime = getStartTime();

	// Sort the array using the bubbleSort function. THIS SORT I USED FROM THE PROFESSOR BUT SEEING THE SORTING IS BROKEN???
	quickSort(quickSortVctr3, 0, qSize3 - 1);

	// Get the end time to get algorithm time calculations.
	endTime = getEndTime();

	// Output the sort time to the user.
	cout << "Quick Sort (10,000): " << endl;
	elapsedTime(startTime, endTime);

	//cout << "Quick Sorted Array (QUICK SORT 10,000): " << endl;
	//printArray(quickSortVctr3, qSize3);

	// Quick Sort (100000)
	//cout << "Unsorted Array (QUICK SORT 100,000): " << endl;
	//printArray(quickSortVctr4, qSize4);

	// Get the start time to get algorithm time calculations.
	startTime = getStartTime();

	// Sort the array using the bubbleSort function. THIS SORT I USED FROM THE PROFESSOR BUT SEEING THE SORTING IS BROKEN???
	quickSort(quickSortVctr4, 0, qSize4 - 1);

	// Get the end time to get algorithm time calculations.
	endTime = getEndTime();

	// Output the sort time to the user.
	cout << "Quick Sort (100,000): " << endl;
	elapsedTime(startTime, endTime);

	//cout << "Quick Sorted Array (QUICK SORT 100,000): " << endl;
	//printArray(quickSortVctr4, qSize4);

	// START SELECTION SORT CODE
	// Selection Sort (100)
	//cout << "Unsorted Array (SELECTION SORT 100): " << endl;
	//printArray(selSortVctr1, sSize1);

	// Get the start time to get algorithm time calculations.
	startTime = getStartTime();

	// Sort the array using the bubbleSort function. THIS SORT I USED FROM THE PROFESSOR BUT SEEING THE SORTING IS BROKEN???
	selectionSort(selSortVctr1);

	// Get the end time to get algorithm time calculations.
	endTime = getEndTime();

	// Output the sort time to the user.
	cout << "Selection Sort (100): " << endl;
	elapsedTime(startTime, endTime);

	//cout << "Selection Sorted Array (SELECTION SORT 100): " << endl;
	//printArray(selSortVctr1, sSize1);

	// Selection Sort (1000)
	//cout << "Unsorted Array (SELECTION SORT 1,000): " << endl;
	//printArray(quickSortVctr2, qSize2);

	// Get the start time to get algorithm time calculations.
	startTime = getStartTime();

	// Sort the array using the bubbleSort function. THIS SORT I USED FROM THE PROFESSOR BUT SEEING THE SORTING IS BROKEN???
	selectionSort(selSortVctr2);

	// Get the end time to get algorithm time calculations.
	endTime = getEndTime();

	// Output the sort time to the user.
	cout << "Selection Sort (1,000): " << endl;
	elapsedTime(startTime, endTime);

	//cout << "Quick Sorted Array (SELECTION SORT 1,000): " << endl;
	//printArray(selSortVctr2, sSize2);

	// Selection Sort (10000)
	//cout << "Unsorted Array (SELECTION SORT 10,000): " << endl;
	//printArray(selSortVctr3, sSize3);

	// Get the start time to get algorithm time calculations.
	startTime = getStartTime();

	// Sort the array using the bubbleSort function. THIS SORT I USED FROM THE PROFESSOR BUT SEEING THE SORTING IS BROKEN???
	selectionSort(selSortVctr3);

	// Get the end time to get algorithm time calculations.
	endTime = getEndTime();

	// Output the sort time to the user.
	cout << "Selection Sort (10,000): " << endl;
	elapsedTime(startTime, endTime);

	//cout << "Quick Sorted Array (SELECTION SORT 10,000): " << endl;
	//printArray(selSortVctr3, sSize3);

	// Selection Sort (100000)
	//cout << "Unsorted Array (SELECTION SORT 100,000): " << endl;
	//printArray(selSortVctr4, sSize4);

	// Get the start time to get algorithm time calculations.
	startTime = getStartTime();

	// Sort the array using the bubbleSort function. THIS SORT I USED FROM THE PROFESSOR BUT SEEING THE SORTING IS BROKEN???
	selectionSort(selSortVctr4);

	// Get the end time to get algorithm time calculations.
	endTime = getEndTime();

	// Output the sort time to the user.
	cout << "Selection Sort (100,000): " << endl;
	elapsedTime(startTime, endTime);

	//cout << "Quick Sorted Array (SELECTION SORT 100,000): " << endl;
	//printArray(selSortVctr4, sSize4);

	cout << "\n" << endl;
	system("pause");
	return 0;
}