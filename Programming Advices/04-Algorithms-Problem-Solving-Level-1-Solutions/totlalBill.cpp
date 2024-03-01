// A restaurant charges 10% services fee and 16% sales tax.
// Write a program to read a BillValue and add service fee and sales tax to it, and print the TotalBill on the screen.

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

float serviceFee(float billValue)
{
  return billValue * 0.1;
}

float salesTax(float billValue)
{
  return billValue * 0.16;
}

float calculateTotalBill(float billValue)
{
  return billValue + serviceFee(billValue) + salesTax(billValue);
}

int main()
{
  float billValue = readPositiveNumber("Enter the bill value: ");

  cout << "Total bill = " << billValue << endl;
  cout << "Total bill after service fee and sales tax = " << calculateTotalBill(billValue) << endl;

  return 0;
}
