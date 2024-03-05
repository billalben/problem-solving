// Write a program to read how many keys to generate and fill
// them in array then print them on the screen.

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

void fillArrayWithKeys(string arr[], int arrLength)
{
  for (int i = 0; i < arrLength; i++)
  {
    arr[i] = generateKey(CapitalLetter, 4);
  }
}

void printArray(string arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << "Array[" << i << "]: " << arr[i] << endl;
  }
}

int main()
{
  // seeds the random number generate in c++
  srand((unsigned)time(NULL));

  int arrLength = readPositiveNumber("Enter the number of keys to generate: ");
  string arr[arrLength];

  fillArrayWithKeys(arr, arrLength);
  cout << "Array of keys:\n";
  printArray(arr, arrLength);
}

/*
  Enter the number of keys to generate: 5
  Array of keys:
  Array[0]: JVOI-POKI-KJPQ-SRVI
  Array[1]: UBJV-UEMC-OPAF-SEWR
  Array[2]: ULLM-AYSN-KAWL-DSSU
  Array[3]: CRSK-QTWC-JLEI-ZFTL
  Array[4]: GEDS-MWQS-ASKG-ZNOS
*/
