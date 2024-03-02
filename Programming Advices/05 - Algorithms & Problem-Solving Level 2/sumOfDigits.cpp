// Write a program to read a number and print the sum of its
// digits.

#include <iostream>

using namespace std;

int readPositiveNumber(string message)
{
  int number;

  do
  {
    cout << message;
    cin >> number;
  } while (number < 0);

  return number;
}

int sumOfDigits(int number)
{
  int sum = 0;

  while (number > 0)
  {
    sum += number % 10;
    number /= 10;
  }
  return sum;
}

int main()
{
  int number = readPositiveNumber("Enter a number: ");
  cout << "The sum of the digits is: " << sumOfDigits(number) << endl;
}

/*
  Enter a number: 1234
  The sum of the digits is: 10
*/
