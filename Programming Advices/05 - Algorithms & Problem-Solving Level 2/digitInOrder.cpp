// Write a program to read a number and print it in order from left
// to right.

#include <iostream>

using namespace std;

int readPositiveNumber(string message)
{
  int number;
  do
  {
    cout << message;
    cin >> number;
  } while (number <= 0);

  return number;
}

int reverseNumber(int number)
{
  int reversedNumber = 0;
  while (number > 0)
  {
    reversedNumber = reversedNumber * 10 + number % 10;
    number /= 10;
  }

  return reversedNumber;
}

void printDigits(int number)
{
  while (number > 0)
  {
    cout << number % 10 << endl;
    number /= 10;
  }
}

int main() {
  // int number = readPositiveNumber("Enter a positive number: ");
  // int reversedNumber = reverseNumber(number);
  // printDigits(reversedNumber);

  printDigits(reverseNumber(readPositiveNumber("Enter a positive number: ")));
}

/*
  Enter a positive number: 1234
  1
  2
  3
  4
*/
