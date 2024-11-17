/*
	Ryan Bachman
	University of Advancing Technology
	MS549 - Data Structures and Testing
	Fall 2024, Grad 2

	Assignment 3.1 - Data Structures and Testing
	functions.cpp
*/

#include "functions.h"

// Allows you to use iostream statements without the use of std::.
using namespace std;

// Create a way to swap two numbers in an array.
void swap(int* xp, int* yp)
{
	int temp = *xp; // Create a temp integer to store x number.
	*xp = *yp; // Set x number to y number.
	*yp = temp; // Set y number to the temporarily stored original x number.
}

// Create a function that fills the vectors that are input to save having to rewrite the for loop 8 times.
vector<int> fillVectors(vector<int>& vctr)
{
	for (int i = 0; i < vctr.size(); i++)
	{
		vctr[i] = rand() % 100000;
	}

	return vctr;
}

// Creates a partition to use for the quick sort algorithm.
int partition(vector<int>& vctr, int low, int high)
{
	int pivot = vctr[high]; // Select the last element (high) as the pivot for the partition.
	int i = (low - 1); // Index of the element just before the last element which is going to be used for swapping.

	for (int j = low; j <= high - 1; j++)
	{
		// If the current element is smaller or equal to the pivot...
		if (vctr[j] <= pivot)
		{
			i++;
			swap(&vctr[i], &vctr[j]);
		}
	}

	swap(&vctr[i + 1], &vctr[high]); // Swap the pivot to its new position.

	return (i + 1); // Return the partition point for use with the quickSort function.
}

// Creates a function to quick sort an integer array created in the main function.
void quickSort(vector<int>& vctr, int low, int high)
{
	if (low < high) // This is the base case and will execute until the low is less than the ending high index.
	{
		int prtnIndex = partition(vctr, low, high); // Create a partitioning index.

		// Recursively call quickSort to sort the elements before and after the partition index.
		quickSort(vctr, low, prtnIndex - 1);
		quickSort(vctr, prtnIndex + 1, high);
	}
}

// Creates a function to selection sort an integer array created in the main function.
void selectionSort(vector<int>& vctr)
{
	int n = vctr.size();

	// Create the outer for loop.
	for (int i = 0; i < n - 1; i++)
	{
		int minIndex = i; // Set a minimum index to go through. Checks the level each time and swaps the biggest value from the iterator onwards, leaving alone all iterations before it.

		// Create the inner for loop.
		for (int j = i; j < n; j++)
		{
			if (vctr[j] < vctr[minIndex])
			{
				minIndex = j;
			}
		}

		swap(&vctr[i], &vctr[minIndex]); // Swap the biggest number it can find with the current minimum index (selection).
	}
}

// Creates a function to bubble sort an integer array created in the main function.
void printArray(vector<int>& vctr, int n)
{
	// Create the outer for loop.
	for (int i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			cout << "Array[" << i << "] = " << vctr[i] << ", ";
		}
		else
		{
			cout << "Array[" << i << "] = " << vctr[i] << "." << endl;
		}
	}
}

// Get the time when the function is called for start time.
chrono::high_resolution_clock::time_point getStartTime()
{
	// Code for a HIGH RESOLUTION timing.
	auto startHigh = chrono::high_resolution_clock::now();

	return startHigh;
}

// Get the time when the function is called for end time.
chrono::high_resolution_clock::time_point getEndTime()
{
	// Code for a HIGH RESOLUTION timing.
	auto endHigh = chrono::high_resolution_clock::now();

	return endHigh;
}

// Calculate the time elapsed between getStartTime() and getEndTime() so this can be reused anywhere.
chrono::duration<double> elapsedTime(chrono::high_resolution_clock::time_point startHigh, chrono::high_resolution_clock::time_point endHigh)
{
	chrono::duration<double> elapsedHighRes = endHigh - startHigh;

	cout << fixed << setprecision(5) << "The operation took " << elapsedHighRes.count() << " seconds.\n" << endl;

	return elapsedHighRes;
}