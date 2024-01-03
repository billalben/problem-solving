// Read Name and Print it
#include <iostream>

using namespace std;

string readName()
{
  string name;

  cout << "Enter Your Name: ";
  getline(cin, name);
  return name;
}

void printName(string name)
{
  cout << "Hello, " << name << endl;
}

int main()
{
  printName(readName());
}
