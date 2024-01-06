// Check Odd or Even
#include <iostream>

using namespace std;

enum enNumberType {odd = 1, even = 2};

int readPositiveNumber() {
  int number;

  cout << "Enter a Number: ";
  cin >> number;
  return number;
}
enNumberType checkNumberType(int number) {
  return number % 2 == 0 ? enNumberType::even : enNumberType::odd;
}

void printNumberType(enNumberType numberType) {
  numberType == enNumberType::even ? 
  cout << "Number is: even" : cout << "Number is: odd";
  cout << endl;
}

int main() {
  printNumberType(checkNumberType(readPositiveNumber()));
}
