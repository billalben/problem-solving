// write a program that takes two numbers and an operation
// and prints the result of the operation

#include <iostream>

using namespace std;

enum enOperationType
{
  Add = '+',
  Subtract = '-',
  Multiply = '*',
  Divide = '/'
};

float readNumber(string message)
{
  float n;
  cout << message;
  cin >> n;

  return n;
}

bool checkOperation(char operationType)
{
  return operationType == '+' || operationType == '-' || operationType == '*' || operationType == '/';
}

enOperationType readOperationType()
{
  char operationType;

  do
  {
    cout << "Enter an operation: ";
    cin >> operationType;
  } while (!checkOperation(operationType));

  return (enOperationType)operationType;
}

float calculate(float num1, float num2, enOperationType operationType)
{
  switch (operationType)
  {
  case enOperationType::Add:
    return num1 + num2;

  case enOperationType::Subtract:
    return num1 - num2;

  case enOperationType::Multiply:
    return num1 * num2;

  case enOperationType::Divide:
    return num1 / num2;

  default:
    return num1 + num2;
  }
}

int main()
{
  float num1 = readNumber("Enter first number: ");
  float num2 = readNumber("Enter second number: ");
  enOperationType operationType = readOperationType();

  cout << "Result = " << calculate(num1, num2, operationType) << endl;
}
