// Fullname

#include <iostream>

using namespace std;

struct stFullName
{
  string firstName;
  string lastName;
};

stFullName readInfo()
{
  stFullName fullName;

  cout << "Enter Your first name: ";
  getline(cin, fullName.firstName);

  cout << "Enter Your last name: ";
  getline(cin, fullName.lastName);

  return fullName;
}

string getFullName(stFullName fullName, bool reversed = false)
{
  return reversed ? fullName.lastName + " " + fullName.firstName
                  : fullName.firstName + " " + fullName.lastName;
}

void printFullName(string fullName)
{
  cout << "Your fullname: " << fullName << endl;
}

int main()
{
  printFullName(getFullName(readInfo(), true));
}