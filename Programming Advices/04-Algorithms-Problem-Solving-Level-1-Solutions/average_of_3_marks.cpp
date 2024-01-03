// Average of 3 marks

#include <iostream>

using namespace std;

void readMarks(int &mark1, int &mark2, int &mark3)
{
  cout << "Enter Your First Mark: ";
  cin >> mark1;

  cout << "Enter Your Second Mark: ";
  cin >> mark2;

  cout << "Enter Your Third Mark: ";
  cin >> mark3;
}

int sumOf3Numbers(int num1, int num2, int num3)
{
  return num1 + num2 + num3;
}

float calculateAverage(int mark1, int mark2, int mark3)
{
  return (float)sumOf3Numbers(mark1, mark2, mark3) / 3;
}

void printAverage(float average)
{
  cout << "Average is: " << average << endl;
}

int main()
{
  int mark1, mark2, mark3;
  readMarks(mark1, mark2, mark3);
  printAverage(calculateAverage(mark1, mark2, mark3));
}