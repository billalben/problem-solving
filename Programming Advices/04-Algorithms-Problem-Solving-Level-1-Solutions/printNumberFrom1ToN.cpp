#include <iostream>

using namespace std;

int readPositiveNumber()
{
  int num;
  cout << "Enter A Number: ";
  cin >> num;
  return num;
}

void printFrom1ToNByForLoop(int n)
{
  cout << "From 1 To " << n << " Using For Loop:\n";

  for (int i = 1; i <= n; i++)
  {
    cout << i << " ";
  }

  cout << endl;
}
void printFrom1ToNByWhile(int n)
{
  cout << "From 1 To " << n << " Using While Loop:\n";

  int counter = 0;
  while (n != counter)
  {
    counter++;
    cout << counter << " ";
  }

  cout << endl;
}
void printFrom1ToNByDoWhile(int n)
{
  cout << "From 1 To " << n << " Using Do While Loop:\n";

  int counter = 1;
  do
  {
    cout << counter << " ";
    counter++;
  } while (counter <= n);

  cout << endl;
}

int main()
{
  int n = readPositiveNumber();

  printFrom1ToNByForLoop(n);
  printFrom1ToNByWhile(n);
  printFrom1ToNByDoWhile(n);
}