// Write a program to fill array with max size 100 with random numbers from
// 1 to 100, read number and return its index in array if found otherwise
// return -1.

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

int findIndex(int arr[], int size, int number)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == number)
      return i;
  }

  return -1;
}

int main()
{
  // seeds the random number generate in c++
  srand((unsigned)time(NULL));

  int size = readPositiveNumber("Enter the size of the array: ");
  int arr[size];

  fillArray(arr, size);

  cout << "The array is: ";
  printArray(arr, size);

  int numberToSearch = readPositiveNumber("Enter the number to search: ");

  cout << "\nThe number you are looking for: " << numberToSearch << endl;

  int index = findIndex(arr, size, numberToSearch);

  if (index == -1)
    cout << "The number is not found in the array." << endl;
  else
  {
    cout << "The number is found at position: " << index << endl;
    cout << "The number is found its order:" << index + 1 << endl;
  }
}

/*
  Enter the size of the array: 10
  The array is: 61 69 98 41 81 64 64 49 75 66
  Enter the number to search: 81

  The number you are looking for: 81
  The number is found at position: 4
  The number is found its order:5
*/