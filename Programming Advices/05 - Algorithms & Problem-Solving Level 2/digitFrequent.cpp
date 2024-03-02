// Write a program read a number, then print all digit
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
    if (num % 10 == digit)
      freqCount++;

    num /= 10;
  }

  return freqCount;
}

void printAllDigitFrequency(int num)
{
  for (int i = 0; i < 10; i++)
  {
    short digitFrequency = countDigitFrequency(i, num);

    if (digitFrequency > 0)
    {
      cout << "Digit " << i << " Frequency is: "
          << digitFrequency << " Time(s)\n";
    }
  }
}

int main()
{
  int number = readPositiveNumber("Enter a number: ");
  printAllDigitFrequency(number);
}

/*
  Enter a number: 1122331
  Digit 1 Frequency is: 3 Time(s)
  Digit 2 Frequency is: 2 Time(s)
  Digit 3 Frequency is: 2 Time(s)
*/
