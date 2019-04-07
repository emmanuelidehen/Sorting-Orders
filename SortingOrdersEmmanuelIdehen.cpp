//
//  main.cpp
//  SortingOrdersEmmanuelIdehen
//
//  Created by Emmanuel Idehen on 4/4/19.
//  Copyright © 2019 Emmanuel Idehen. All rights reserved.
//  Submitted to Mr. Marcus Golden(CS2014 Computer programming II)
/*
 Sorting Orders
 Write a program that uses two identical arrays of eight integers. It should
 display the contents of the first array, then call a function to sort the array
 using an ascending order bubble sort modified to print out the array contents
 after each pass of the sort. Next the program should display the contents of the
 second array, then call a function to sort the array using an ascending order
 selection sort modified to print out the array contents after each pass of the
 sort.
 */




#include <iostream>
#include <ctime>

using namespace std;



//display function
void displayArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

//bubble sort
void bubbleSort(int array[], int size)
{
    int temp;
    bool swap;
    
    do
    {    swap = false;
        for (int count = 0; count < (size - 1); count++)
        {
            if (array[count] > array[count + 1])
            {
                temp = array[count];
                array[count] = array[count + 1];
                array[count + 1] = temp;
                swap = true;
            }
            displayArray(array, size);
        }
    } while (swap);
}

//selection sort
void selectionSort(int array[], int size)
{
    int startScan, minIndex, minValue;
    
    for (int startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan;
        minValue = array[startScan];
        for (int index = startScan + 1; index < size; index++)
        {
            if (array[index] < minValue)
            {
                minValue = array[index];
                minIndex = index;
            }
        }
        array[minIndex] = array[startScan];
        array[startScan] = minValue;
        displayArray(array, size);
    }
}



void displayArray(int array[], int size);
int main()
{
    const int SIZE = 8;
    int Array1[SIZE] = {1, 2, 3, 4, 5, 28, 9, 10};
    int Array2[SIZE] = {1, 2, 3, 4, 5, 28, 9, 10};
    
    cout << "Values in first Array " <<endl;
    displayArray(Array1, SIZE);
    
    cout << "\nBubble sort on first array" <<endl;
    bubbleSort(Array1, SIZE);
    
    cout << "\nValues of the second Array" <<endl;
    displayArray(Array2, SIZE);
    
    cout << "\nSelection sort on the second array" <<endl;
    selectionSort(Array2, SIZE);
    
    return 0;
}

/*
 Test cases
 
 
 Values in first Array
 1 2 3 4 5 28 9 10
 
 Bubble sort on first array
 1 2 3 4 5 28 9 10
 1 2 3 4 5 28 9 10
 1 2 3 4 5 28 9 10
 1 2 3 4 5 28 9 10
 1 2 3 4 5 28 9 10
 1 2 3 4 5 9 28 10
 1 2 3 4 5 9 10 28
 1 2 3 4 5 9 10 28
 1 2 3 4 5 9 10 28
 1 2 3 4 5 9 10 28
 1 2 3 4 5 9 10 28
 1 2 3 4 5 9 10 28
 1 2 3 4 5 9 10 28
 1 2 3 4 5 9 10 28
 
 Values of the second Array
 1 2 3 4 5 28 9 10
 
 Selection sort on the second array
 1 2 3 4 5 28 9 10
 1 2 3 4 5 28 9 10
 1 2 3 4 5 28 9 10
 1 2 3 4 5 28 9 10
 1 2 3 4 5 28 9 10
 1 2 3 4 5 9 28 10
 1 2 3 4 5 9 10 28
 Program ended with exit code: 0
 
 */
