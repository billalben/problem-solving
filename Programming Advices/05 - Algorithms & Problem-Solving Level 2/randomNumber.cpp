// Write a program to print 3 random numbers from 1 to 10.

#include <iostream>

using namespace std;

int randomNumber(int min, int max)
{
  return rand() % (max - min + 1) + min;
}

int main()
{
  // Seeds the random number generator in C++, called only once
  srand((unsigned)time(NULL));

  cout << randomNumber(1, 10) << endl;
  cout << randomNumber(1, 10) << endl;
  cout << randomNumber(1, 10) << endl;
}
