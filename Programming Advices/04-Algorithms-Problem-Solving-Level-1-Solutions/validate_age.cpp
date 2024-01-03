/*
Problem:
Write a program to ask the user to enter :
• Age
If age is between 18 and 45 print "Valid Age" otherwise print "Invalid Age"
*/
#include <iostream>

using namespace std;

int readAge()
{
  int age;
  cout << "Enter your age: ";
  cin >> age;
  return age;
}

bool validateNumberInRange(int number, int from, int to)
{
  return (number >= from && number <= to);
}

void printResult(int age)
{
  if (validateNumberInRange(age, 18, 45))
    cout << age << "is a Valid Age\n";
  else
    cout << age << "is an Invalid Age\n";
}

int main()
{
  printResult(readAge());
}