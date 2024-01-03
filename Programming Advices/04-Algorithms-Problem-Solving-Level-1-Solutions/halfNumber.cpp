// Half number

#include <iostream>

using namespace std;

int readNumber()
{
  int num;

  cout << "Enter a number: ";
  cin >> num;
  return num;
}

float calculateHalfNumber(int num)
{
  return (float)num / 2;
}

void PrintResult(int num)
{
  cout << "half of " << num << " is: " << calculateHalfNumber(num) << endl;
}

int main()
{
  PrintResult(readNumber());
}