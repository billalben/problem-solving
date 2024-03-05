// Write a program to fill array with max size 100 with random
// numbers from 1 to 100, then print the count of Odd numbers.

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

int countOddNumbers(int Arr[], int arrLength)
{
  int OddCount = 0;

  for (int i = 0; i < arrLength; i++)
  {
    if (Arr[i] % 2 != 0)
      OddCount++;
  }

  return OddCount;
}

int main()
{
  srand(time(0));

  int arrLength = readPositiveNumber("Enter array length? ");
  int Arr[arrLength];

  fillArrayWithRandomNumber(Arr, arrLength);

  cout << "Array elements: ";
  printArray(Arr, arrLength);

  cout << "Odd numbers count: " << countOddNumbers(Arr, arrLength) << endl;
}

/*
  Enter array length? 10
  Array elements: 8 50 74 59 31 73 45 79 24 10
  Odd numbers count: 5
*/
