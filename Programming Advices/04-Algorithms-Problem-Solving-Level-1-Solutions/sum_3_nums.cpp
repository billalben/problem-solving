// Sum OF 3 Numbers

#include <iostream>

using namespace std;

void readNumbers(int &num1, int &num2, int &num3)
{
  cout << "==============\n";

  cout << "Enter First Number: ";
  cin >> num1;

  cout << "Enter Second Number: ";
  cin >> num2;

  cout << "Enter Third Number: ";
  cin >> num3;
}

int sumOf3Numbers(int num1, int num2, int num3) {
  return num1 + num2 + num3;
}

void printResult(int total) {
  cout << "\n==============\n";
  cout << "The total sum of numbers is: " << total << endl;
  cout << "==============\n";
}

int main()
{
  int num1, num2, num3;
  readNumbers(num1, num2, num3);
  printResult(sumOf3Numbers(num1, num2, num3));
}