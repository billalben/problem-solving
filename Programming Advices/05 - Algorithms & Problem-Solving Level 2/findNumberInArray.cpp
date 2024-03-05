// Write a program to fill array with max size 100 with random numbers from
// problem, read number and print if it's found or not (reuse code in prev

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

void fillArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    arr[i] = randomNumber(1, 100);
  }
}

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int findNumberPositionInArray(int Number, int Arr[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    if (Arr[i] == Number)
      return i;
  }

  return -1;
}

bool isNumberInArray(int arr[],int number,  int arrLength)
{
  return findNumberPositionInArray(number, arr, arrLength) != -1;
}

int main()
{
  // seeds the random number generate in c++
  srand((unsigned)time(NULL));

  int size = readPositiveNumber("Enter the size of the array: ");
  int arr[size];
  fillArray(arr, size);
  printArray(arr, size);

  int number = readPositiveNumber("Please enter a number to search for: ");
  cout << "Number you are looking for: " << number << endl;

  if (isNumberInArray(arr, size, number))
    cout << "The number " << number << " is found in the array." << endl;
  else
    cout << "The number " << number << " is not found in the array." << endl;
}

/*
  Enter the size of the array: 10
  44 94 22 100 92 25 54 34 12 72
  Please enter a number to search for: 100
  Number you are looking for: 100
  The number 100 is found in the array.
*/
