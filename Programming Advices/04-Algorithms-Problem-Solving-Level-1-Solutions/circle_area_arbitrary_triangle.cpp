/*
Problem:
Write a program to calculate circle area circle described around an arbitrary triangle,
then print it on the screen.
The use should enter:
a
b
c
Example Inputs:
5
6
7
Outputs →
40.088
*/

#include <iostream>

using namespace std;

void readTriangleData(float &a, float &b, float &c)
{
  cout << "Enter triangle side a: ";
  cin >> a;
  cout << "Enter triangle base b: ";
  cin >> b;
  cout << "Enter triangle base c: ";
  cin >> c;
}

float circleAreaByATriangle(float a, float b, float c)
{
  const float PI = 3.14159265359;
  const float p = (a + b + c) / 2;
  const float t = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
  return PI * pow(t, 2);
}

void printResult(float area)
{
  cout << "Circle Area: " << area << endl;
}

int main()
{
  float a, b, c;
  readTriangleData(a, b, c);
  printResult(circleAreaByATriangle(a, b, c));
}
