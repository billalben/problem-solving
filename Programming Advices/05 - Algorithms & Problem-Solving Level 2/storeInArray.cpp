// Write a program to read N elements and store them in array
// then print all array elements and ask for a number to check,
// then print how many number a certain element repeated in that array.

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

void ReadArray(int Arr[], int ArrLength)
{
  cout << "\nEnter Array Elements:\n";

  for (int i = 0; i < ArrLength; i++)
  {
    cout << "Element [" << i + 1 << "]: ";
    cin >> Arr[i];
  }
  cout << endl;
}

int TimeRepeated(int arr[], int arrLength, int numberToCheck)
{
  int count = 0;

  for (int i = 0; i < arrLength; i++)
  {
    if (arr[i] == numberToCheck)
      count++;
  }
  return count;
}

void printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{
  int numberOfElements = readPositiveNumber("Enter the number of elements: ");

  int arr[numberOfElements];
  ReadArray(arr, numberOfElements);

  int numberToCheck = readPositiveNumber("Enter the number to check: ");

  cout << "Original array: ";
  printArray(arr, numberOfElements);

  cout << "The number " << numberToCheck << " repeated "
      << TimeRepeated(arr, numberOfElements, numberToCheck)
      << " time(s)." << endl;
}

/*
  Enter the number of elements: 5

  Enter Array Elements:
  Element [1]: 1
  Element [2]: 1
  Element [3]: 1
  Element [4]: 2
  Element [5]: 3

  Enter the number to check: 1
  Original array: 1 1 1 2 3 
  The number 1 repeated 3 time(s).
*/
