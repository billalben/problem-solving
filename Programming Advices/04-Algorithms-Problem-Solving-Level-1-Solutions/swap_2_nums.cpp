// Swap Two Numbers

#include <iostream>

using namespace std;

void readNumbers(int &num1, int &num2)
{
  cout << "Enter X number: ";
  cin >> num1;

  cout << "Enter Y number: ";
  cin >> num2;
}

void swapNumbers(int& x, int& y) {
  int plate = x;
  x = y;
  y = plate;
}

void printResult(int x, int y) {
  cout << "X is: " << x << endl;
  cout << "Y is: " << y << endl;
}

int main()
{
  int num1, num2;

  readNumbers(num1, num2);

  cout << "before swapping:\n";
  printResult(num1, num2);

  cout << "===============\n";

  swapNumbers(num1, num2);
  cout << "after swapping:\n";
  printResult(num1, num2);
}