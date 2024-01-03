/*
Problem:
Write a program to ask the user to enter :
• Age
If age is between 18 and 45 print "Valid Age" otherwise print
"Invalid Age" and re-ask user to enter a valid age.
Note: You should keep asking user to enter a valid age until
s/she enters it.
*/
#include <iostream>

using namespace std;

int readAge()
{
  int age;
  cout << "Enter your age between 18 - 45: ";
  cin >> age;
  return age;
}

bool validateNumberInRange(int number, int from, int to)
{
  return (number >= from && number <= to);
}

int readUntilAgeBetween(int from, int to)
{
  int age = 0;
  do
  {
    age = readAge();
  } while (!validateNumberInRange(age, 18, 45));

  return age;
}

void printResult(int age)
{
  cout << "Your age is: " << age << endl;
}

int main()
{
  printResult(readUntilAgeBetween(18, 45));
}