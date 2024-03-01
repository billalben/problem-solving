// write a program that takes a number and prints if it is prime or not

#include <iostream>

using namespace std;

int readPositiveNumber(string message)
{
  int n;
  do
  {
    cout << message;
    cin >> n;
  } while (n <= 0);

  return n;
}

bool isPrime(int number)
{
  if (number <= 1) return false;

  int M = round(number / 2);

  for (int i = 2; i <= M; i++)
  {
    if (number % i == 0) return false;
  }

  return true;
}

void printNumType(int number)
{
  cout << "The number is: " << (isPrime(number) ? "PRIME" : "Not PRIME") << endl;
}

int main()
{
  int number = readPositiveNumber("Enter a number: ");
  printNumType(number);

  return 0;
}