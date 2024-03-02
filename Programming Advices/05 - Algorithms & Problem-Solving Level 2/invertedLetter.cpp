// Write a program to read a number and print inverted letter pattern

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
  for (int i = num; i > 0; i--)
  {
    for (int j = 1; j <= i; j++) cout << char(i + 64) << " ";

    cout << endl;
  }
}

int main() {
  printInvertedLetterPattern(readPositiveNumber("Enter a positive number: "));
}

/*
  Enter a positive number: 5
  E E E E E 
  D D D D 
  C C C 
  B B 
  A 
*/
