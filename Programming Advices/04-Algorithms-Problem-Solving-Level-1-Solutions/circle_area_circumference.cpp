/*
Problem:
Write a program to calculate circle area along the circumference, then print it on the screen.
The use should enter:
L
Example Inputs:
20
Outputs →
31.831

area = l2 / (4 * PI)
*/

#include <iostream>

using namespace std;

float readCircumference()
{
  float l;
  cout << "Enter circumference: ";
  cin >> l;
  return l;
}

float circleAreaByCircumference(float l)
{
  const float PI = 3.14159265359;
  return pow(l, 2) / (4 * PI);
}

void printResult(float area)
{
  cout << "Circle Area: " << area << endl;
}

int main() {
  printResult(circleAreaByCircumference(readCircumference()));
}