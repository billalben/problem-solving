// Write a program to print Sqrt of numbers, don't use built in sqrt function.

#include <iostream>

using namespace std;

float readNumber(string message)
{
  float number;

  cout << message;
  cin >> number;

  return number;
}

float mySqrt(float number)
{
  return pow(number, 0.5);
}

int main()
{
  float number = readNumber("Enter a number: ");

  cout << "My sqrt Result: " << mySqrt(number) << endl;
  cout << "C++ sqrt Result: " << sqrt(number) << endl;
}

/*
  Enter a number: 16
  My sqrt Result: 4
  C++ sqrt Result: 4
*/

/*
  Enter a number: 25
  My sqrt Result: 5
  C++ sqrt Result: 5
*/

/*
  Enter a number: 10
  My sqrt Result: 3.16228
  C++ sqrt Result: 3.16228
*/
