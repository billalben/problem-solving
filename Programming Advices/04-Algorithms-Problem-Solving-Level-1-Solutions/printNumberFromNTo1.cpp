#include <iostream>

using namespace std;

int readPositiveNumber()
{
  int num;
  cout << "Enter A Number: ";
  cin >> num;
  return num;
}

void printFromNTo1ByForLoop(int n)
{
  for (n = n; n >= 1; n--)
  {
    cout << n << " ";
  }

  cout << endl;
}
void printFromNTo1ByWhile(int n)
{
  cout << "From " << n << " To 1" << " Using While Loop:\n";

  while (n >= 1)
  {
    cout << n << " ";
    n--;
  }

  cout << endl;
}
void printFromNTo1ByDoWhile(int n)
{
  cout << "From " << n << " To 1" << " Using Do While Loop:\n";

  do
  {
    cout << n << " ";
    n--;
  } while (n >= 1);
  

  cout << endl;
}

int main()
{
  int n = readPositiveNumber();

  printFromNTo1ByForLoop(n);
  printFromNTo1ByWhile(n);
  printFromNTo1ByDoWhile(n);
}