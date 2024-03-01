/*
  Write a program to ask the user to enter:
  Day
  Then print the day as follows:
  • 1 Print Sunday
  • 2 Print Monday
  • 3 Print Tuesday
  • 4 Print Wednesday
  • 5 Print Thursday
  • 6 Print Friday
  • 7 Print Saturday
  • Otherwise print "Wrong Day" and ask the use to enter the day again.
*/

#include <iostream>

using namespace std;

enum enDays
{
  Sunday = 1,
  Monday = 2,
  Tuesday = 3,
  Wednesday = 4,
  Thursday = 5,
  Friday = 6,
  Saturday = 7
};

int readNumberInRange(string message, string wrongMsg, int from, int to)
{
  int num;
  do
  {
    cout << message;
    cin >> num;

    if (num < from || num > to)
      cout << wrongMsg << endl;

  } while (num < from || num > to);

  return num;
}

enDays readDay()
{
  return (enDays)readNumberInRange("Enter the day (1 - 7): ", "Wrong Day", 1, 7);
}

string getDayOfWeek(enDays day)
{
  switch (day)
  {
  case Sunday:
    return "Sunday";
  case Monday:
    return "Monday";
  case Tuesday:
    return "Tuesday";
  case Wednesday:
    return "Wednesday";
  case Thursday:
    return "Thursday";
  case Friday:
    return "Friday";
  case Saturday:
    return "Saturday";
  default:
    return "Wrong Day";
  }
}

int main()
{
  enDays day = readDay();
  cout << "Its " << getDayOfWeek(day) << endl;

  return 0;
}