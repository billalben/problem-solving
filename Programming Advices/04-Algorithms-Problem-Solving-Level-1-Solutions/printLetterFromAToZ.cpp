// write a program to print all the letters from A to Z

#include <iostream>

using namespace std;

void printLettersFromAToZ()
{
  for (char letter = 'A'; letter <= 'Z'; letter++)
  {
    cout << letter << " ";
  }

  cout << endl;

  // for (int i = 65; i <= 90; i++)
  // {
  //   cout << (char)i << " ";
  //   cout << char(i) << " ";
  // }

  // cout << endl;
}

int main()
{
  printLettersFromAToZ();
}
