// Max Of Three Numbers

#include <iostream>

using namespace std;

void readNumbers(int &num1, int &num2, int &num3)
{
  cout << "Enter a number: ";
  cin >> num1;

  cout << "Enter a number: ";
  cin >> num2;

  cout << "Enter a number: ";
  cin >> num3;
}

int maxOf3Numbers(int num1, int num2, int num3)
{
  return num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
}

void printResult(int max)
{
  cout << "The max number is: " << max << endl;
}

int main()
{
  int num1, num2, num3;
  readNumbers(num1, num2, num3);
  printResult(maxOf3Numbers(num1, num2, num3));
}