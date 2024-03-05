// Write a program to fill array with max size 100 with random numbers from
// 1 to 100, copy it to another array in reverse order and print it.

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

void reverseOrderOfArray(int arr1[], int arr2[], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    arr2[i] = arr1[arrLength - i - 1];
  }
}

int main()
{
  int arrLength = readPositiveNumber("Enter the length of the array: ");
  int arr1[arrLength];
  int arr2[arrLength];

  fillArray(arr1, arrLength);
  cout << "Array 1: ";
  printArray(arr1, arrLength);

  reverseOrderOfArray(arr1, arr2, arrLength);
  cout << "Array 2 After copying array 1 in reversed order:\n";
  printArray(arr2, arrLength);
}

/*
  Enter the length of the array: 10
  Array 1: 8 50 74 59 31 73 45 79 24 10
  Array 2 After copying array 1 in reversed order:
  10 24 79 45 73 31 59 74 50 8
*/
