// Write a program to fill array with max size 100 with random numbers from
// 1 to 100, copy it to another array using AddArrayElement, and print it.

#include <iostream>

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

void fillArrayWithRandomNumber(int Arr[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    Arr[i] = randomNumber(1, 100);
  }
}

void addArrayElement(int Number, int Arr[100], int &arrLength)
{
  // it is a new element so we need to add the length by 1
  arrLength++;
  Arr[arrLength - 1] = Number;
}

void printArray(int Arr[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    cout << Arr[i] << " ";
  }
  cout << endl;
}

void copyArrayUsingAddElement(int ArrSource[100], int ArrDestination[100], int arrLength, int &ArrDestinationLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    addArrayElement(ArrSource[i], ArrDestination, ArrDestinationLength);
  }
}

int main()
{
  srand((unsigned)time(NULL));

  int Arr[100], arrLength, arr2Length = 0;
  arrLength = readPositiveNumber("\nEnter number of elements:\n");

  fillArrayWithRandomNumber(Arr, arrLength);

  int Arr2[100];
  copyArrayUsingAddElement(Arr, Arr2, arrLength, arr2Length);

  cout << "Array 1 elements:\n";
  printArray(Arr, arrLength);

  cout << "Array 2 elements after copy:\n";
  printArray(Arr2, arr2Length);
}
