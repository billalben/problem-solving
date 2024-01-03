/*
Problem:
Write a program to calculate circle area Inscribed in an Isosceles Triangle,
then print it on the screen.
The use should enter:
a
b
Example Inputs:
20
10
Outputs →
47.124

area = pi * (b2/4) * ((2*a-b) / (2*a+b))
*/

#include <iostream>

using namespace std;

void readTriangleData(float &a, float &b)
{
  cout << "Enter triangle side a: ";
  cin >> a;
  cout << "Enter triangle base b: ";
  cin >> b;
}

float circleAreaByITriangle(float a, float b)
{
  const float PI = 3.14159265359;
  return PI * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
}

void printResult(float area)
{
  cout << "Circle Area: " << area << endl;
}

int main()
{
  float a, b;
  readTriangleData(a, b);
  printResult(circleAreaByITriangle(a, b));
}
