// Write a program to print random Small Letter, Capital
// Letter, Special Character, and Digit in order.

#include <iostream>

using namespace std;

enum enCharType
{
  SmallLetter = 1,
  CapitalLetter = 2,
  SpecialCharacter = 3,
  Digit = 4
};

int randomNumber(int min, int max)
{
  return rand() % (max - min + 1) + min;
}

char getRandomCharacter(enCharType charType)
{
  switch (charType)
  {
  case SmallLetter:
    return (char)randomNumber(97, 122);
  case CapitalLetter:
    return (char)randomNumber(65, 90);
  case SpecialCharacter:
    return (char)randomNumber(33, 47);
  case Digit:
    return (char)randomNumber(48, 57);
  default:
    return 0;
  }
}

int main()
{
  // Seeds the random number generator in C++, called only once
  srand((unsigned)time(NULL));

  cout << getRandomCharacter(SmallLetter) << endl;
  cout << getRandomCharacter(CapitalLetter) << endl;
  cout << getRandomCharacter(SpecialCharacter) << endl;
  cout << getRandomCharacter(Digit) << endl;
}
