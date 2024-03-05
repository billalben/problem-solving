// Write a program to fill array with max size 100 with random
// numbers from 1 to 100, then print the count of Even numbers.

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

int countEvenNumbers(int Arr[], int arrLength)
{
  int EvenCount = 0;

  for (int i = 0; i < arrLength; i++)
  {
    if (Arr[i] % 2 == 0)
      EvenCount++;
  }

  return EvenCount;
}

int main()
{
  int arrLength = readPositiveNumber("Enter array length? ");
  int Arr[arrLength];

  fillArrayWithRandomNumber(Arr, arrLength);

  cout << "Array elements: ";
  printArray(Arr, arrLength);

  cout << "Count of Even numbers: " << countEvenNumbers(Arr, arrLength) << endl;
}
