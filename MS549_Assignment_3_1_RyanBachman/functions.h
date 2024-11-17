/*
	Ryan Bachman
	University of Advancing Technology
	MS549 - Data Structures and Testing
	Fall 2024, Grad 2

	Assignment 3.1 - Data Structures and Testing
	functions.h
*/

#pragma once
#include <string>
#include <chrono>
#include <iostream>
#include <memory>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <Windows.h>
#include <time.h>

using namespace std;

void swap(int* xp, int* yp);

vector<int> fillVectors(vector<int>& vctr);

int partition(vector<int>& vctr, int low, int high);

void quickSort(vector<int>& vctr, int low, int high);

void selectionSort(vector<int>& vctr);

void printArray(vector<int>& arr, int n);

chrono::high_resolution_clock::time_point getStartTime();

chrono::high_resolution_clock::time_point getEndTime();

chrono::duration<double> elapsedTime(chrono::high_resolution_clock::time_point startHigh, chrono::high_resolution_clock::time_point endHigh);