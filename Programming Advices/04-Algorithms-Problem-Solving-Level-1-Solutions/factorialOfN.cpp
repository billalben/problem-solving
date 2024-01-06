// Factorial Of N

#include <iostream>

using namespace std;

int readPositiveNumber(string message)
{
  int num;

  do
  {
  cout << message;
  cin >> num;
  } while (0 >= num);
  
  return num;
}

int factorial(int n)
{
  int f = 1;
  for (int i = n; i >= 1; i--)
    f *= i;

  return f;
}

int main()
{
  cout << factorial(readPositiveNumber("Enter A Number: ")) << endl;
}