// Write a program to print round of numbers, don't use built in round function

#include <iostream>

using namespace std;

float readNumber(string message)
{
  float number;

  cout << message;
  cin >> number;

  return number;
}

float getFractionPart(float number)
{
  return number - int(number);
}

int myRound(float number)
{
  int intPart = number;

  float fractionPart = getFractionPart(number);

  if (abs(fractionPart) >= 0.5)
  {
    if (number > 0)
      return ++intPart;
    else
      return --intPart;
  }
  else
  {
    return intPart;
  }
}

int main()
{
  float number = readNumber("Enter a number: ");

  cout << "My round Result: " << myRound(number) << endl;
  cout << "C++ round Result: " << round(number) << endl;
}

/*
  Enter a number: 10.5
  My round Result: 11
  C++ round Result: 11
*/

/*
  Enter a number: 10.4
  My round Result: 10
  C++ round Result: 10
*/
