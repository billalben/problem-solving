// Write a program to print floor of numbers, don't use built in floor function

#include <iostream>

using namespace std;

float readNumber(string message)
{
  float number;

  cout << message;
  cin >> number;

  return number;
}

int myFloor(float Number)
{
  if (Number > 0)
    return (int)Number;
  else
    return int(Number) - 1;
}

int main()
{
  float number = readNumber("Enter a number: ");

  cout << "My floor Result: " << myFloor(number) << endl;
  cout << "C++ floor Result: " << floor(number) << endl;
}

/*
  Enter a number: 10.5
  My floor Result: 10
  C++ floor Result: 10
*/

/*
  Enter a number: 10.4
  My floor Result: 10
  C++ floor Result: 10
*/

/*
  Enter a number: -10.5
  My floor Result: -11
  C++ floor Result: -11
*/
