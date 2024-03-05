// Write a program to fill array with max size 100 with random
// numbers from 1 to 100, then print average of all number

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

int sumOfAllNumbersInArray(int arr[], int arrLength)
{
  int sum = 0;

  for (int i = 0; i < arrLength; i++)
  {
    sum += arr[i];
  }

  return sum;
}

float arrayAverage(int Arr[], int arrLength)
{
    return (float) sumOfAllNumbersInArray(Arr, arrLength) / arrLength;
}

int main()
{
  srand((unsigned)time(NULL));

  int numberOfElements = readPositiveNumber("Enter the number of elements: ");
  int arr[numberOfElements];

  fillArray(arr, numberOfElements);

  cout << "Array elements: ";
  printArray(arr, numberOfElements);

  cout << "Average of all numbers: " << arrayAverage(arr, numberOfElements) << endl;

}

/*
  Enter the number of elements: 10
  Array elements: 63 36 81 68 18 17 98 86 23 89 
  Average of all numbers: 57.9
*/
