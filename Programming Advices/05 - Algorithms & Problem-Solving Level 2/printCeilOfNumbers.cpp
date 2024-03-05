// Write a program to print Ceil of numbers, don't use built in Ceil function

#include <iostream>

using namespace std;

float readNumber(string message)
{
  float number;

  cout << message;
  cin >> number;

  return number;
}

int myCeil(float number)
{
  if (number > 0)
    return int(number) + 1;
  else
    return int(number);
}

int main()
{
  float number = readNumber("Enter a number: ");

  cout << "My ceil Result: " << myCeil(number) << endl;
  cout << "C++ ceil Result: " << ceil(number) << endl;
}

/*
  Enter a number: 10.5
  My ceil Result: 11
  C++ ceil Result: 11
*/

/*
  Enter a number: 10.4
  My ceil Result: 11
  C++ ceil Result: 11
*/

/*
  Enter a number: -10.5
  My ceil Result: -10
  C++ ceil Result: -10
*/
