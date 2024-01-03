// Pass || Fail
// Mark >= 50 -> Pass
// Mark <= 49 -> Fail

#include <iostream>

using namespace std;

enum enPassFail
{
  pass = 1,
  fail = 2
};

int readMark()
{
  int mark;

  cout << "Enter Your Mark: ";
  cin >> mark;
  return mark;
}

enPassFail checkMark(int mark)
{
  return mark >= 50 ? enPassFail::pass : enPassFail::fail;
}
void printResult(int mark)
{
  if (checkMark(mark) == enPassFail::pass)
    cout << "You Passed\n";
  else
    cout << "You Failed\n";
}

int main()
{
  printResult(readMark());
}