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

void printInvertedNumberPattern(int num) {
  for (int i = 1; i <= num; i++)
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
  1 
  2 2 
  3 3 3 
  4 4 4 4 
  5 5 5 5 5
*/
