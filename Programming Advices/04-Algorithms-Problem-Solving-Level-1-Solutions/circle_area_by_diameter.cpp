/*
Problem:
Write a program to calculate circle area through diameter, then print it on the screen.
The use should enter:
D
Example Inputs:
10
Outputs →
78.54

area = (pi * d2) / 4
*/

#include <iostream>

using namespace std;

float readDiameter()
{
  float d;
  cout << "Enter Diameter D: ";
  cin >> d;

  return d;
}

float circleArea(float d)
{
  const float PI = 3.14159265359;
  return (PI * pow(d, 2)) / 4;
}

void printResult(float r)
{
  cout << "Circle Area: " << r << endl;
}

int main()
{
  printResult(circleArea(readDiameter()));
}