#include <iostream>

using namespace std;

enum enOddOrEven
{
  odd = 1,
  even = 2
};

int readPositiveNumber()
{
  int num;
  cout << "Enter A Number: ";
  cin >> num;
  return num;
}

enOddOrEven checkOddOrEven(int num)
{
  // return num % 2 != 0 ? enOddOrEven::odd : enOddOrEven::even;
  if (num % 2 != 0)
  {
    return enOddOrEven::odd;
  }
  else
  {
    return enOddOrEven::even;
  }
}

int sumEvenNumbersFrom1ToN_usingFor(int n)
{
  int sum = 0;
  for (int i = 1; i <= n; i++)
  {
    if (checkOddOrEven(i) == enOddOrEven::even)
      sum += i;
  }

  return sum;
}

int sumEvenNumbersFrom1ToN_usingWhile(int n)
{
  int counter = 1;
  int sum = 0;

  while (n >= counter)
  {
    if (checkOddOrEven(counter) == enOddOrEven::even)
      sum += counter;
    counter++;
  }

  return sum;
}

int sumEvenNumbersFrom1ToN_usingDoWhile(int n)
{
  int counter = 1;
  int sum = 0;

  do
  {
    if (checkOddOrEven(counter) == enOddOrEven::even)
      sum += counter;
    counter++;
  } while (n >= counter);

  return sum;
}

int main()
{
  int n = readPositiveNumber();

  cout << sumEvenNumbersFrom1ToN_usingFor(n) << endl;
  cout << sumEvenNumbersFrom1ToN_usingWhile(n) << endl;
  cout << sumEvenNumbersFrom1ToN_usingDoWhile(n) << endl;
}