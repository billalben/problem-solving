// Write a program to fill array with max size 100 with random
// numbers from 1 to 100, then print Max

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

int maxNumberInArray(int arr[], int arrLength)
{
  int max = arr[0];

  for (int i = 0; i < arrLength; i++)
  {
    if (max < arr[i]) max = arr[i];
  }

  return max;
}

int main()
{
  srand((unsigned)time(NULL));

  int numberOfElements = readPositiveNumber("Enter the number of elements: ");
  int arr[numberOfElements];

  fillArray(arr, numberOfElements);

  cout << "Array elements: ";
  printArray(arr, numberOfElements);

  cout << "Max Number is: " << maxNumberInArray(arr, numberOfElements) << endl;
}

/*
  Enter the number of elements: 10
  Array elements: 93 83 99 99 32 49 67 62 20 41
  Max Number is: 99
*/
