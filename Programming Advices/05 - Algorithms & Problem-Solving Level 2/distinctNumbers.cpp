// Write a program to fill array with numbers, then print distinct
// numbers to another array.

#include <iostream>

using namespace std;

void fillArray(int Arr[], int &arrLength)
{
  // Hard Coding
  arrLength = 10;
  Arr[0] = 10;
  Arr[1] = 10;
  Arr[2] = 10;
  Arr[3] = 50;
  Arr[4] = 50;
  Arr[5] = 70;
  Arr[6] = 70;
  Arr[7] = 70;
  Arr[8] = 70;
  Arr[9] = 90;
}

short findNumberPositionInArray(int Number, int Arr[], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    if (Arr[i] == Number)
      return i;
  }
  return -1;
}

bool IsNumberInArray(int Number, int Arr[], int arrLength)
{
  return findNumberPositionInArray(Number, Arr, arrLength) != -1;
}

void addArrayElement(int Number, int Arr[], int &arrLength)
{
  // it is a new element so we need to add the length by 1
  arrLength++;
  Arr[arrLength - 1] = Number;
}

void copyDistinctNumbersToArray(int ArrSources[], int ArrDestination[], int SourceLength, int &DestinationLength)
{
  for (int i = 0; i < SourceLength; i++)
  {
    if (!IsNumberInArray(ArrSources[i], ArrDestination, DestinationLength))
    {
      addArrayElement(ArrSources[i], ArrDestination, DestinationLength);
    }
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

int main()
{
  int ArrSource[10], SourceLength = 0, ArrDestination[10], DestinationLength = 0;
  fillArray(ArrSource, SourceLength);

  cout << "\nArray 1 elements:\n";
  printArray(ArrSource, SourceLength);

  copyDistinctNumbersToArray(ArrSource, ArrDestination, SourceLength, DestinationLength);

  cout << "\nArray 2 distinct elements:\n";
  printArray(ArrDestination, DestinationLength);
}
