// Write a program to fill array with ordered numbers from 1 to N,
// then print it, after that shuffle this array and print it after shuffle

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

void Swap(int &A, int &B)
{
  int Temp;

  Temp = A;
  A = B;
  B = Temp;
}

int randomNumber(int min, int max)
{
  return rand() % (max - min + 1) + min;
}

void fulfilArrayFrom1ToN(int arr[], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    arr[i] = i + 1;
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

void shuffleArray(int arr[], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    Swap(arr[randomNumber(1, arrLength) - 1], arr[randomNumber(1, arrLength) - 1]);
  }
}

int main()
{
  srand((unsigned)time(NULL));

  int arrLength = readPositiveNumber("Enter the length of the array: ");
  int arr[arrLength];

  fulfilArrayFrom1ToN(arr, arrLength);

  cout << "Array elements before shuffle: ";
  printArray(arr, arrLength);

  shuffleArray(arr, arrLength);

  cout << "Array elements after shuffle: ";
  printArray(arr, arrLength);
}

/*
  Enter the length of the array: 10
  Array elements before shuffle: 1 2 3 4 5 6 7 8 9 10
  Array elements after shuffle: 5 2 10 6 4 8 3 1 7 9
*/
