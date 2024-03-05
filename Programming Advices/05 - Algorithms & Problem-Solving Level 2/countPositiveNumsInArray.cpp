// Write a program to fill array with max size 100 with random
// numbers from -100 to 100, then print the count of Positive numbers.

#include <iostream>

using namespace std;

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
    Arr[i] = randomNumber(-100, 100);
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

int countNegativeNumbers(int Arr[], int arrLength)
{
  int PositiveCount = 0;

  for (int i = 0; i < arrLength; i++)
  {
    if (Arr[i] > 0)
      PositiveCount++;
  }

  return PositiveCount;
}

int main()
{
  srand(time(0));

  int arrLength = readPositiveNumber("Enter array length? ");
  int Arr[arrLength];

  fillArrayWithRandomNumber(Arr, arrLength);

  cout << "Array elements: ";
  printArray(Arr, arrLength);

  cout << "Positive numbers count: " << countNegativeNumbers(Arr, arrLength) << endl;
}

/*
  Enter array length? 10
  Array elements: -28 77 74 -69 -99 66 72 87 -47 -98
  Positive numbers count: 5
*/
