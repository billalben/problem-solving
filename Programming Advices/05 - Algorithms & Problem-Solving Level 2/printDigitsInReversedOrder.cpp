// Write a program to read a number and print it in a reversed order.

#include <iostream>

using namespace std;

int readPositiveNumber(string message)
{
  int num;

  do
  {
    cout << message;
    cin >> num;
  } while (num <= 0);

  return num;
}

void printReverseNumber(int num)
{
  while (num > 0)
  {
    cout << num % 10 << endl;
    num /= 10;
  }
}

int main()
{
  printReverseNumber(readPositiveNumber("Enter a number: "));
}
