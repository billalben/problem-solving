// Write a program to fill array two arrays with max size 100 with random
// numbers from 1 to 100, sum their elements in a third array and print the
// results.

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

void sumTwoArray(int arr1[], int arr2[], int arr3[], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    arr3[i] = arr1[i] + arr2[i];
  }
}

int main()
{
  int arrLength = readPositiveNumber("Enter the length of the arrays: ");
  int arr1[arrLength], arr2[arrLength], arr3[arrLength];

  fillArray(arr1, arrLength);
  fillArray(arr2, arrLength);

  cout << "Array 1: ";
  printArray(arr1, arrLength);

  cout << "Array 2: ";
  printArray(arr2, arrLength);

  sumTwoArray(arr1, arr2, arr3, arrLength);

  cout << "Array 3: ";
  printArray(arr3, arrLength);
}

/**
  Enter the length of the arrays: 10
  Array 1: 8 50 74 59 31 73 45 79 24 10
  Array 2: 41 66 93 43 88 4 28 30 41 13
  Array 3: 49 116 167 102 119 77 73 109 65 23
*/
