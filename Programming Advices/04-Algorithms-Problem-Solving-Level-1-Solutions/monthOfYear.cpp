/*
  Write a program to ask the user to enter:
  Month
  Then print the day as follows:
  • 1 Print January
  • 2 Print February
  • 3 Print March
  • 4 Print April
  • 5 Print May
  • 6 Print June
  • 7 Print July
  • 8 Print August
  • 9 Print September
  • 10 Print October
  • 11 Print November
  • 12 December
  • Otherwise print "Wrong Month" and ask the use to enter the Month again.
*/

#include <iostream>

using namespace std;

int readNumberInRange(string message, string wrongMsg, int from, int to)
{
  int num;
  do
  {
    cout << message;
    cin >> num;

    if (num < from || num > to) cout << wrongMsg << endl;

  } while (num < from || num > to);

  return num;
}

short int readMonth()
{
  return readNumberInRange("Enter the month (1 to 12): ", "Invalid Month", 1, 12);
}

string getMonthOfYear(short int month)
{
  string monthList[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

  if (month >= 1 && month <= 12) return monthList[month - 1];
  else return "Invalid month";
}

int main()
{
  short int month = readMonth();
  cout << "Its " << getMonthOfYear(month) << endl;

  return 0;
}
