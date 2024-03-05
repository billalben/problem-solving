// Write a program to dynamically read numbers and save them in an array
// Max size of array is 100, allocate semi-dynamic array length.

#include <iostream>

using namespace std;

int readNumber()
{
  int Number;

  cout << "\nPlease enter a number? ";
  cin >> Number;

  return Number;
}

void addArrayElement(int Number, int Arr[100], int &arrLength)
{
  // it is a new element so we need to add the length by 1
  arrLength++;
  Arr[arrLength - 1] = Number;
}

void inputUserNumberInArray(int Arr[100], int &arrLength)
{
  bool AddMore = true;

  do
  {
    addArrayElement(readNumber(), Arr, arrLength);

    cout << "\nDo you want to add more numbers? [0]:No,[1]:Yes? ";
    cin >> AddMore;

  } while (AddMore);
}

void printArray(int Arr[100], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    cout << Arr[i] << " ";
  }
  cout << endl;
}

int main()
{
  int Arr[100], arrLength = 0;
  inputUserNumberInArray(Arr, arrLength);

  cout << "\nArray length: " << arrLength << endl;
  cout << "Array elements: ";
  printArray(Arr, arrLength);
}
