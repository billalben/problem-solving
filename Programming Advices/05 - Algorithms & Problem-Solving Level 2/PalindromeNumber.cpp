// Write a program to read a number and check if it is Palindrome?
// Palindrome is a number that reads the same from right to left.

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

bool isPalindrome(int number)
{
  return number == reverseNumber(number);
}

void printResult(int number)
{
  if(isPalindrome(number)) cout << "Yes, it is a Palindrome number." << endl;
  else cout << "No, it is NOT a Palindrome number." << endl;
}

int main() {
  printResult(readPositiveNumber("Enter a positive number: "));
}

/*
  Enter a positive number: 12321
  Yes, it is a Palindrome number.
*/

/*
  Enter a positive number: 1234
  No, it is NOT a Palindrome number.
*/
