// Write a program that inputs the number of seconds and changes it to days, hours, minutes, and seconds

#include <iostream>

using namespace std;

struct strTaskDuration
{
  int days, hours, minutes, seconds;
};

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

strTaskDuration secondsToTaskDuration(int seconds)
{
  strTaskDuration taskDuration;

  const int secondsPerDay = 60 * 60 * 24;
  const int secondsPerHour = 60 * 60;
  const int secondsPerMinute = 60;

  taskDuration.days = seconds / secondsPerDay;
  seconds %= secondsPerDay;
  taskDuration.hours = seconds / secondsPerHour;
  seconds %= secondsPerHour;
  taskDuration.minutes = seconds / secondsPerMinute;
  taskDuration.seconds = seconds % secondsPerMinute;

  return taskDuration;
}

void printTaskDurationDetails(strTaskDuration taskDuration)
{
  cout << "The number of days, hours, minutes, and seconds is: ";
  cout << taskDuration.days << ":" << taskDuration.hours << ":" << taskDuration.minutes << ":" << taskDuration.seconds << endl;
}

int main()
{
  int totalSeconds = readPositiveNumber("Enter the number of seconds: ");
  strTaskDuration taskDuration = secondsToTaskDuration(totalSeconds);

  printTaskDurationDetails(taskDuration);

  return 0;
}