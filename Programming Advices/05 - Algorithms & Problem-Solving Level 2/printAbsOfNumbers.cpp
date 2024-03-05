// Write a program to print abs of numbers, don't use built in abs function

#include <iostream>

using namespace std;

int readNumber(string message)
{
  int number;

  cout << message;
  cin >> number;

  return number;
}

int myAbs(int number)
{
  // return number < 0 ? -number : number;
  return number < 0 ? number * -1 : number;
}

int main()
{
  int number = readNumber("Enter a number: ");

  cout << "My abs Result: " << myAbs(number) << endl;
  cout << "C++ abs Result: " << abs(number) << endl;
}

/*
  Enter a number: -10
  My abs Result: 10
  C++ abs Result: 10
*/
