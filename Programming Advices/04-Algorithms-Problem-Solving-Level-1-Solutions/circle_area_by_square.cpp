// Circle Area inscribed in square

#include <iostream>

using namespace std;

float readSquareSide()
{
  float a;
  cout << "Enter Square Side A: ";
  cin >> a;

  return a;
}

float circleAreaInscribedInSquare(float a)
{
  const float PI = 3.14159265359;
  // return PI * pow((a / 2), 2); or
  return (PI * pow(a, 2)) / 4;
}

void printResult(float a)
{
  cout << "Circle Area: " << a << endl;
}

int main()
{
  printResult(circleAreaInscribedInSquare(readSquareSide()));
}