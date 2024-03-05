// Write a program to fill array with max size 100 with random
// numbers from -100 to 100, then print the count of Negative numbers.

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
  int negativeCount = 0;

  for (int i = 0; i < arrLength; i++)
  {
    if (Arr[i] <= 0)
      negativeCount++;
  }

  return negativeCount;
}

int main()
{
  srand(time(0));

  int arrLength = readPositiveNumber("Enter array length? ");
  int Arr[arrLength];

  fillArrayWithRandomNumber(Arr, arrLength);

  cout << "Array elements: ";
  printArray(Arr, arrLength);

  cout << "Negative numbers count: " << countNegativeNumbers(Arr, arrLength) << endl;
}

/*
  Array elements: -14 78 22 21 -19 -79 -37 -11 1 -23 
  Negative numbers count: 6
*/
