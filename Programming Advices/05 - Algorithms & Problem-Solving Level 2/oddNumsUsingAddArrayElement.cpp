// Write a program to fill array with max size 100 with random numbers from
// and print copy only odd numbers to another array using AddArrayElement,

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int readNumber()
{
  int Number;

  cout << "\nPlease enter a number? ";
  cin >> Number;

  return Number;
}

int readPositiveNumber(string Message)
{
  int Num;

  do
  {
    cout << Message;
    cin >> Num;

  } while (Num < 0);

  return Num;
}

int randomNumber(int From, int To)
{
  int RandNum = rand() % (To - From + 1) + From;
  return RandNum;
}

void fillArrayWithRandomNumber(int Arr[], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    Arr[i] = randomNumber(1, 100);
  }
}

void printArray(int Arr[], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    cout << Arr[i] << " ";
  }
  cout << endl;
}

void addArrayElement(int Number, int Arr[], int &arrLength)
{
  // it is a new element so we need to add the length by 1
  arrLength++;
  Arr[arrLength - 1] = Number;
}

void copyOddNumbers(int ArrSource[], int ArrDestination[], int arrLength, int &ArrDestinationLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    if (ArrSource[i] % 2 != 0)
    {
      addArrayElement(ArrSource[i], ArrDestination, ArrDestinationLength);
    }
  }
}

int main()
{
  srand((unsigned)time(NULL));

  int arrLength = readPositiveNumber("\nEnter number of elements:\n");
  int Arr[arrLength], arr2Length = 0;

  fillArrayWithRandomNumber(Arr, arrLength);

  int Arr2[arrLength];
  copyOddNumbers(Arr, Arr2, arrLength, arr2Length);

  cout << "\nArray 1 elements:\n";
  printArray(Arr, arrLength);

  cout << "\nArray 2 odd numbers:\n";
  printArray(Arr2, arr2Length);

  cout << endl;
}
