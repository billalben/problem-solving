/*
  Problem:
  Write a program to calculate rectangle area through diagonal and side area of
  rectangle and print it on the screen.
  The use should enter:
  Example Inputs:
  5
  40
  Outputs→
  198.431

  Area = a *  (d2 - a2)
*/

#include <iostream>

using namespace std;

void readNumbers(float &a, float &b)
{
  cout << "Enter side area A: ";
  cin >> a;

  cout << "Enter diagonal D: ";
  cin >> b;
}

float calculateTriangleArea(float a, float d)
{
  float area = a * sqrt(pow(d, 2) - pow(a, 2));
  return area;
}

void printResult(float area)
{
  cout << "Rectangle Area is: " << area << endl;
}

int main()
{
  float a, d;
  readNumbers(a, d);
  printResult(calculateTriangleArea(a, d));
}