// Write a program to read a number and print inverted pattern

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

void printInvertedNumberPattern(int num)
{
  for (int i = num; i > 0; i--)
  {
    for (int j = 1; j <= i; j++) cout << i << " ";

    cout << endl;
  }
}

int main()
{
  printInvertedNumberPattern(readPositiveNumber("Enter a positive number: "));
}

/*
  Enter a positive number: 5
  5 5 5 5 5 
  4 4 4 4 
  3 3 3 
  2 2 
  1 
*/
