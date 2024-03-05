// Write a program to fill array with numbers, then check if it is Palindrome
// array or not, Note: Palindrome array can be read the same from right to
// left and from left to right.

#include <iostream>

using namespace std;

void fillArray(int Arr[], int &arrLength)
{
  // Hard Coding
  arrLength = 5;

  Arr[0] = 10;
  Arr[1] = 20;
  Arr[2] = 30;
  Arr[3] = 20;
  Arr[4] = 10;
}

bool isPalindromeArray(int Arr[], int arrLength)
{
  for (int i = 0; i < arrLength / 2; i++)
  {
    if (Arr[i] != Arr[arrLength - i - 1])
      return false;
  }
  return true;
}

void printArray(int Arr[], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    cout << Arr[i] << " ";
  }
  cout << endl;
}

int main()
{
  int Arr[10], arrLength = 0;
  fillArray(Arr, arrLength);

  cout << "Array elements: ";
  printArray(Arr, arrLength);

  if (isPalindromeArray(Arr, arrLength))
    cout << "Array is Palindrome." << endl;
  else
    cout << "Array is not Palindrome." << endl;
}
