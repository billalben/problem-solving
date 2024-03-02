/*
  Write a program to read a LoanAmount and
  ask you how many months you need to settle the loan,
  then calculate the monthly installment amount.
*/

#include <iostream>

using namespace std;

int readPositiveNumber(string message)
{
  int number;

  do
  {
    cout << message;
    cin >> number;
  } while (number <= 0);

  return number;
}

float calculateMonthlyInstallmentAmount(int loanAmount, int months)
{
  return (float)loanAmount / months;
}

int main()
{
  int loanAmount = readPositiveNumber("Enter the loan amount: ");
  int months = readPositiveNumber("Enter the number of months: ");

  cout << "The monthly installment amount is: "
        << calculateMonthlyInstallmentAmount(loanAmount, months) << endl;
}
