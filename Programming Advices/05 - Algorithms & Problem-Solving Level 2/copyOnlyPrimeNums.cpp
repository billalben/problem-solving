// Write a program to fill array with max size 100 with random
// numbers from 1 to 100, copy only prime numbers to another array and print it.

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

bool isPrime(int number)
{
  if (number <= 1)
    return false;

  for (int i = 2; i <= number / 2; i++)
  {
    if (number % i == 0)
      return false;
  }

  return true;
}

void CopyOnlyPrimeNumbers(int ArrSource[], int ArrDestination[], int arrLength, int &arr2Length)
{
  int counter = 0;
  for (int i = 0; i < arrLength; i++)
  {
    if (isPrime(ArrSource[i]))
    {
      ArrDestination[counter++] = ArrSource[i];
      // counter++;
    }
  }
  arr2Length = --counter;
}

int main()
{
  srand((unsigned)time(NULL));

  int numberOfElements = readPositiveNumber("Enter the number of elements: ");

  int arr[numberOfElements];
  fillArray(arr, numberOfElements);

  cout << "Array elements: ";
  printArray(arr, numberOfElements);

  int arr2[numberOfElements];
  int arr2Length;
  CopyOnlyPrimeNumbers(arr, arr2, numberOfElements, arr2Length);

  cout << "Array 2 elements after copy: ";
  printArray(arr2, arr2Length);
}

/*
  Enter the number of elements: 10
  Array elements: 29 91 50 12 25 57 23 53 53 78
  Array 2 elements after copy: 29 23 53
*/
