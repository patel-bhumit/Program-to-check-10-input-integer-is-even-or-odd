/**
 * File:    f3.Cpp
 *
 * Programmer:		Patel Bhumitkumar Kalpeshbhai
 * Assignment : Focused Assignment 3
 * First Version : 2023-01-24
 * student number : 8847159
 * Discription:
 *
 *   This file contains code which checks whether the
 *   number is even or odd.
 *
 */

#include<iostream>

using namespace std;

int input(int arr[10]);
int output(int arr[10], int i);

int main()
{
	int arr[10]{}; // initialize array with zeros
	input(arr); // call input function to get 10 different inputs from user and store them in the array
	output(arr, 10); // call output function to determine the lowest value and its index from the array and print the result

	return 0;
}

/*
* Function: input(int arr[10])
* Description: This function will prompt user to enter 10 number
* return 0
* Parameters: int i; for numbers*/
int input(int arr[10]) {
	int i;
	cout << "Enter 10 numbers :";
	for (i = 0; i < 10; i++) 
	{
		cin >> arr[i];
	}

	return 0;
}

/*
* Function: output(int arr[10], int j)
* Description: This function will check all the array valuue and detemiter the lowest value
* and the index of that lowest value
* return 0
* Parameters: int arr[10]; for all 10 numbers
* Returns: 0
*/
int output(int arr[10], int j) {
	int min = arr[0]; // initialize minimum value to the first element of the array
	int index = 0; // initialize index value to 0
	for (int k = 0; k < j; k++)
	{
		if (arr[k] < min) // if the current element is smaller than the minimum value
		{ 
			min = arr[k];  // update minimum value to the current element
			index = k;  // update index of minimum value to the index of current element
		}	
	}
	cout << "The lowest value is " << min << " at index " << index;
	
	return 0;
}