// Write a program print the multiplication table from 1 to 10.

#include <iostream>
#include <iomanip>

using namespace std;

void printTableHeader()
{
  cout << "\t\t\t Multiplication Table From 1 To 10 \n\n";

  for (short int i = 1; i <= 10; i++)
  {
    cout << "\t" << i;
  }
  
  cout << "\n-----------------------------------------";
  cout << "-------------------------------------------\n";
}

// string columnSeparator(int i)
// {
//   if (i < 10) return "   |";
//   else return "  |";
// }

void printMultiplicationTable()
{
  printTableHeader();

  for (int i = 1; i <= 10; i++)
  {
    // cout << setw(2) << setfill('0') << i << "  |";
    cout << setw(3) << i << "  |";

    for (int j = 1; j <= 10; j++) cout << "\t" << i * j;

    cout << endl;
  }
}

int main()
{
  printMultiplicationTable();
}
