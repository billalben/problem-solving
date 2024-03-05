// Write a program to fill array with max size 100 with random
// numbers from 1 to 100, copy it to another array and print it.

#include <iostream>

using namespace std;

int readPositiveNumber(string message = "Enter a positive number: ")
{
  int number;
  do
  {
    cout << message;
    cin >> number;
  } while (number <= 0);

  return number;
}

int randomNumber(int min, int max)
{
  return rand() % (max - min + 1) + min;
}

void fillArray(int arr[], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    arr[i] = randomNumber(1, 100);
  }
}

void printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void copyArray(int arr[], int arrLength, int arr2[])
{
  for (int i = 0; i < arrLength; i++)
  {
    arr2[i] = arr[i];
  }
}

int main()
{
  srand((unsigned)time(NULL));

  int numberOfElements = readPositiveNumber("Enter the number of elements: ");
  int arr[numberOfElements];

  fillArray(arr, numberOfElements);

  int arr2[numberOfElements];
  copyArray(arr, numberOfElements, arr2);

  cout << "Array 1 elements: ";
  printArray(arr, numberOfElements);

  cout << "Array 2 elements after copy: ";
  printArray(arr2, numberOfElements);

  return 0;
}

/*
  Enter the number of elements: 10
  Array 1 elements: 100 9 31 95 63 61 44 25 57 24 
  Array 2 elements after copy: 100 9 31 95 63 61 44 25 57 24 
*/
