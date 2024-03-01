// write a program that takes numbers until -99 is entered and prints the sum of the numbers

#include <iostream>

using namespace std;

int readNumber(string message)
{
  int n;
  cout << message;
  cin >> n;

  return n;
}

int sumNumbers()
{
  int sum = 0, number = 0, counter = 1;

  // do
  // {
  //   number = readNumber("Enter a number " + to_string(counter++) + ": ");
  //   if (number == -99) break;

  //   sum += number;

  // } while (number != -99);

  while (number != -99)
  {
    number = readNumber("Enter a number " + to_string(counter++) + ": ");
    if (number != -99) sum += number;
  };

  return sum;
}

int main()
{
  int result = sumNumbers();
  cout << "The sum is: " << result << endl;

  return 0;
}
