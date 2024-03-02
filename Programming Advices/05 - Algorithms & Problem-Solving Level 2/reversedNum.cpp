// Write a program to read a number and print it reversed.

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

string reverseNumber(int num)
{
  string reversed = "";

  while (num > 0)
  {
    // reversed = reversed * 10 + num % 10;
    reversed += to_string(num % 10);
    num /= 10;
  }

  return reversed;
}

int main()
{
  int number = readPositiveNumber("Enter a number: ");
  cout << "The reversed number is: " << reverseNumber(number) << endl;
}

/*
  Enter a number: 12345
  The reversed number is: 54321
*/

/*
  Enter a number: 1230
  The reversed number is: 0321
*/
