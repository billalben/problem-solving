// Write a program to read a number and print letter pattern

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

void printInvertedLetterPattern(int num)
{
  for (int i = 1; i <= num; i++)
  {
    for (int j = 1; j <= i; j++) cout << char(i + 64) << " ";

    cout << endl;
  }
}

int main()
{
  printInvertedLetterPattern(readPositiveNumber("Enter a positive number: "));
}

/*
  Enter a positive number: 5
  A 
  B B 
  C C C 
  D D D D 
  E E E E E 
*/
