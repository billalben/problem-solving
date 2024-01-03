/*
Problem:
  Write a program to ask the user to enter his/her:
  • Age
  • Driver license

  Then Print "Hired" if his ther age is grater than 21 and s/he
  has a driver license, otherwise Print "Rejected"
*/

#include <iostream>

using namespace std;

struct stInfo
{
  short int age;
  bool hasDrivingLicense;
};

stInfo readInfo()
{
  stInfo info;

  cout << "Enter Your Age: ";
  cin >> info.age;

  cout << "Do You Have Driven License (1- 0): ";
  cin >> info.hasDrivingLicense;

  return info;
}

bool isAccepted(stInfo info)
{
  return (info.age >= 21 && info.hasDrivingLicense);
}

void printResult(stInfo info)
{
  isAccepted(info) ? cout << "Hired\n" : cout << "Rejected\n";
}

int main()
{
  printResult(readInfo());
}
