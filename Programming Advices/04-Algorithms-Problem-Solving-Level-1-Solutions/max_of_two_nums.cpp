// Max Of Two Numbers

#include <iostream>

using namespace std;

void readNumbers(int &num1, int &num2)
{
  cout << "Enter a number: ";
  cin >> num1;

  cout << "Enter a number: ";
  cin >> num2;
}

int maxOf3Numbers(int num1, int num2)
{
  return num1 > num2 ? num1 : num2;
}

void printResult(int max)
{
  cout << "The max number is: " << max << endl;
}

int main()
{
  int num1, num2;
  readNumbers(num1, num2);
  printResult(maxOf3Numbers(num1, num2));
}