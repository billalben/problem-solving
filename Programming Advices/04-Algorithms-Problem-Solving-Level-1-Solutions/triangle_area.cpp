/*
  Problem:
  Write a program to calculate triangle area then print it on the screen.
  The use should enter:
  a
  h
  Example Inputs:
  10
  8
  Outputs →
  40

  area = (1/2) * a * h
*/

#include <iostream>

using namespace std;

void readNumbers(float &a, float &h)
{
  cout << "Enter Triangle Base A: ";
  cin >> a;

  cout << "Enter Triangle Height H: ";
  cin >> h;
}

float calculateTriangleArea(float a, float h)
{
  float area = ((1.0/2) * a) * h;
  return area;
}

void printResult(float area)
{
  cout << "Triangle Area is: " << area << endl;
}

int main()
{
  float a, h;
  readNumbers(a, h);
  printResult(calculateTriangleArea(a, h));
}