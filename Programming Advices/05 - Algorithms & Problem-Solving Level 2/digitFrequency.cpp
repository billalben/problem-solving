// Write a program read a digit and a number, then print digit
// frequency in that number

#include <iostream>

using namespace std;

int readPositiveNumber(string message)
{
  int num;

  do
  {
    cout << message;
    cin >> num;
  } while (num <= 0);

  return num;
}

int countDigitFrequency(short digit, int num)
{
  int freqCount = 0;

  while (num > 0)
  {
    if (num % 10 == digit) freqCount++;

    num /= 10;
  }

  return freqCount;
}

int main()
{
  int number = readPositiveNumber("Enter a number: ");
  short digitToCheck = readPositiveNumber("Enter a digit: ");

  cout << "The frequency of " << digitToCheck << " in " << number << " is: " << countDigitFrequency(digitToCheck, number) << endl;
}

/*
  Enter a number: 1222122
  Enter a digit: 2
  The frequency of 2 in 1222122 is: 5
*/

/*
  Enter a number: 123111
  Enter a digit: 1
  The frequency of 1 in 123111 is: 4
*/
