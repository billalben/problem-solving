// ATM pin only 3 times

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
  int count = 3;

  do
  {
    pinCode = readPINCode();
    if (pinCode == "1234") return 1;

    // cout << "Wrong PIN" << endl;
    cout << "\033[1;31mWrong PIN\033[0m\n";
    cout << "You have " << --count << " more attempts\n";

  } while (count >= 1 && pinCode != "1234");

  return 0;
}

void showBalance()
{
  // cout << "Your balance is 7500" << endl;
  cout << "\033[1;34mYour balance is 7500\033[0m\n";
}

int main()
{
  if (Login()) showBalance();
  else cout << "Your card is blocked\n";
}
