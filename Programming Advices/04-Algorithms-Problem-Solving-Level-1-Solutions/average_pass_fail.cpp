// Average of 3 marks and result is Pass or Fail

#include <iostream>

using namespace std;

enum enPassFail
{
  Pass = 1,
  Fail = 2
};

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

enPassFail checkAverage(float average)
{
  return average >= 50 ? enPassFail::Pass : enPassFail::Fail;
}

void printAverage(float average)
{
  cout << "Average is: " << average << endl;
  if (checkAverage(average) == enPassFail::Pass)
    cout << "you passed\n";
  else
    cout << "you filled\n";
}

int main()
{
  int mark1, mark2, mark3;
  readMarks(mark1, mark2, mark3);
  printAverage(calculateAverage(mark1, mark2, mark3));
}