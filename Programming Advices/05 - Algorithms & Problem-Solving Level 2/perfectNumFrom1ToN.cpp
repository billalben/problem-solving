// Write a program to print all perfect numbers from 1 to N

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

bool isPerfectNumber(int num)
{
  int sum = 0;

  for (int i = 1; i <= num / 2; i++)
  {
    if (num % i == 0) sum += i;
  }

  return sum == num;
}

void printPerfectNumbers(int n)
{
  cout << "Perfect numbers from 1 to " << n << ":\n";

  for (int i = 1; i <= n; i++)
  {
    if (isPerfectNumber(i)) cout << i << endl;
  }
}

int main()
{
  printPerfectNumbers(readPositiveNumber("Enter a positive number: "));
}
