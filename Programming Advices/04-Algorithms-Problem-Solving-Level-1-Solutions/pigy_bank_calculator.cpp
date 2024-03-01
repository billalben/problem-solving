#include <iostream>

using namespace std;

struct stPiggyBankContent
{
  int penny, nickel, dime, quarter, dollar;
};

int readPositiveNumber(string message)
{
  int num;
  do
  {
    cout << message;
    cin >> num;
  } while (num < 0);
  return num;
}

stPiggyBankContent readPiggyBankContent()
{
  stPiggyBankContent piggyBankContent;

  piggyBankContent.penny = readPositiveNumber("Enter Penny: ");
  piggyBankContent.nickel = readPositiveNumber("Enter Nickel: ");
  piggyBankContent.dime = readPositiveNumber("Enter Dime: ");
  piggyBankContent.quarter = readPositiveNumber("Enter Quarter: ");
  piggyBankContent.dollar = readPositiveNumber("Enter Dollar: ");

  return piggyBankContent;
}

int calculateTotalPennies(stPiggyBankContent piggyBankContent)
{
  int totalPennies = 0;
  totalPennies = piggyBankContent.penny * 1 +
                 piggyBankContent.nickel * 5 +
                 piggyBankContent.dime * 10 +
                 piggyBankContent.quarter * 25 +
                 piggyBankContent.dollar * 100;
  return totalPennies;
}
void printDollar(stPiggyBankContent money) {}

int main()
{
  int totalPennies = calculateTotalPennies(readPiggyBankContent());
  cout << "Total Pennies: " << totalPennies << endl;
  cout << "Total Dollars: " << (float)totalPennies / 100 << endl;

  return 0;
}