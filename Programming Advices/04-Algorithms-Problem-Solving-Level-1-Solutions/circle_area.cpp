// Circle Area

#include <iostream>

using namespace std;

float readRadius()
{
  float r;
  cout << "Enter Radius R: ";
  cin >> r;

  return r;
}

float circleArea(float r)
{
  const float PI = 3.14159265359;
  return PI * pow(r, 2);
}

void printResult(float r)
{
  cout << "Circle Area: " << r << endl;
}

int main()
{
  printResult(circleArea(readRadius()));
}