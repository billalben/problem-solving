// Write a program to read how many keys to generate and print
// them on the screen.

#include <iostream>

using namespace std;

enum enCharType
{
  SmallLetter = 1,
  CapitalLetter = 2,
  SpecialCharacter = 3,
  Digit = 4
};

int readPositiveNumber(string message = "Enter a positive number: ")
{
  int number;
  do
  {
    cout << message;
    cin >> number;
  } while (number <= 0);

  return number;
}

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

string generateWord(enCharType charType, short length = 4)
{
  string word = "";

  for (int i = 1; i <= length; i++)
  {
    word += getRandomCharacter(charType);
  }
  return word;
}

string generateKey(enCharType charType, short lengthWord = 4)
{
  string key = "";

  key += generateWord(charType, lengthWord) + "-";
  key += generateWord(charType, lengthWord) + "-";
  key += generateWord(charType, lengthWord) + "-";
  key += generateWord(charType, lengthWord);

  return key;
}

void printKeys(short numberOfKeys, enCharType charType = CapitalLetter, short lengthWord = 4)
{
  for (int i = 1; i <= numberOfKeys; i++)
  {
    cout << "Key [" << i << "]: " << generateKey(charType, lengthWord) << endl;
  }
}

int main()
{
  int count = readPositiveNumber("Enter How Many Keys To Generate: ");
  printKeys(count);
}

/*
  Enter How Many Keys To Generate: 5
  Key [1]: LRFK-QYUQ-FJKX-YQVN
  Key [2]: RTYS-FRZR-MZLY-GFVE
  Key [3]: ULQF-PDBH-LQDQ-RRCR
  Key [4]: WDNX-EUOQ-QEKL-AITG
  Key [5]: DPHC-SPIJ-THBS-FYFV
*/
