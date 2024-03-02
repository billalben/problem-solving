/*
  Write a program to read a LoanAmount and Monthly Payment
  and calculate how many months you need to settle the loan.
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

// int calculateMonthsToSettleLoan(int loanAmount, int monthlyPayment)
// {
//   int months = 0;

//   while (loanAmount > 0)
//   {
//     loanAmount -= monthlyPayment;
//     months++;
//   }

//   return months;
// }

float totalMonth(int loanAmount, int monthlyPayment)
{
  return (float)loanAmount / monthlyPayment;
}

int main()
{
  int loanAmount = readPositiveNumber("Enter the loan amount: ");
  int monthlyPayment = readPositiveNumber("Enter the monthly payment: ");

  cout << "You need " << totalMonth(loanAmount, monthlyPayment)
        << " months to settle the loan." << endl;
}
