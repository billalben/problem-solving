/*
  Write a program to calculate rectangle area and print it on the screen.
  Example Inputs:
  10
  20
  Outputs→
  200

  area = a * b
*/

#include <iostream>

using namespace std;

void readNumbers(float &a, float &b)
{
  cout << "Enter rectangle width A: ";
  cin >> a;

  cout << "Enter rectangle length B: ";
  cin >> b;
}

float calculateRectangleArea(float a, float b) {
  return a * b;
}

void printResult(float area) {
  cout << "Rectangle Area is: " << area << endl;
}

int main() {
  float a, b;
  readNumbers(a, b);
  printResult(calculateRectangleArea(a, b));
}