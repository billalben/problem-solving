// Write a program to read a TotalBill and CashPaid and calculate the remainder to be paid back.

#include <iostream>

using namespace std;

float readPositiveNumber(string message)
{
  float n;
  do
  {
    cout << message;
    cin >> n;
  } while (n <= 0);

  return n;
}

float calculateRemainder(float totalBill, float cashPaid)
{
  return cashPaid - totalBill;
}

int main()
{
  float totalBill = readPositiveNumber("Enter the total bill: ");
  float cashPaid = readPositiveNumber("Enter the cash paid: ");

  float remainder = calculateRemainder(totalBill, cashPaid);
  cout << "Remainder = " << remainder << endl;

  return 0;
}