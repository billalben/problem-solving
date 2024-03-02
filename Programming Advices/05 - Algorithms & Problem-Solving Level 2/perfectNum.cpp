// Write a program to check if the number is Prefect or not?
// Note: Perfect Number = Sum (all divisors)
// 28 = 1+2+4+7+14
// 6=1+2+3

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

bool isPerfect(int num)
{
  int sum = 0;

  for (int i = 1; i < num; i++)
  {
    if (num % i == 0) sum += i;
  }

  return sum == num;
}

void printResult(int num)
{
  if (isPerfect(num)) cout << num << " is a perfect number.\n";
  else cout << num << " is \033[1;31mNOT\033[0m a perfect number.\n";
}

int main()
{
  int number = readPositiveNumber("Enter a positive number: ");
  printResult(number);
}
