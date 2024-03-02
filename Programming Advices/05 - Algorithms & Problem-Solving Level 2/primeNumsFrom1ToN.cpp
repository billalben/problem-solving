// Write a program print all prime numbers from 1 to N.

#include <iostream>

using namespace std;

int readPositiveNumber()
{
  int num;

  do
  {
    cout << "Enter a positive number: ";
    cin >> num;
  } while (num <= 0);

  return num;
}

bool isPrime(int num)
{
  if (num == 1) return false;

  for (int i = 2; i <= num / 2; i++) if (num % i == 0) return false;

  return true;
}

void printPrimeNumbers(int num)
{
  cout << "Prime numbers from 1 to " << num << " are:\n";

  for (int i = 1; i <= num; i++)
  {
    if (isPrime(i)) cout << i << " ";
  }

  cout << endl;
}

int main()
{
  int number = readPositiveNumber();
  printPrimeNumbers(number);
}