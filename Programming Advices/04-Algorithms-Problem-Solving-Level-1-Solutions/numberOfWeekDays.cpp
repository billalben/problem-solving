// Write a program to read a NumberOfHours and calculates the number of weeks, 
// and days included in that number

#include<iostream>

using namespace std;

int readPositiveNumber(string message)
{
  int num;
  do
  {
    cout << message;
    cin >> num;
  } while (num <= 0);

  return num;
}

float hoursToDays(int numberOfHours) {
  return (float) numberOfHours / 24;
}
float hoursToWeeks(int numberOfHours) {
  return (float) hoursToDays(numberOfHours) / 7;
}

int main() {
  int numberOfHours = readPositiveNumber("Enter the number of hours: ");

  cout << "Total hours = " << numberOfHours << endl;
  cout << "Total weeks = " << hoursToWeeks(numberOfHours) << endl;
  cout << "Total days = " << hoursToDays(numberOfHours) << endl;

  return 0;
}