/*
  Write a program to read the ATM PIN code from the user, then check if PIN Code = 1234,
  then show the balance to user,
  otherwise print "Wong PIN" and ask the user to enter the PIN again.
  Assume User Balance is 7500.
*/

#include <iostream>

using namespace std;

string readPINCode()
{
  string pinCode;

  cout << "Enter your PIN code: ";
  cin >> pinCode;

  return pinCode;
}

bool Login()
{
  string pinCode;

  do
  {

    pinCode = readPINCode();
    if (pinCode == "1234") return 1;

    cout << "Wrong PIN" << endl;

  } while (pinCode != "1234");
}

void showBalance()
{
  cout << "Your balance is 7500" << endl;
}

int main()
{
  if (Login()) showBalance();
}
