// Write a program to calculate the task duration in seconds and print it on screen
// → Given the time duration of a task in the number of days, hours, minutes, and seconds..

#include <iostream>

using namespace std;

struct stTaskDuration
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

stTaskDuration readTaskDuration()
{
  stTaskDuration taskDuration;

  taskDuration.days = readPositiveNumber("Enter the number of days: ");
  taskDuration.hours = readPositiveNumber("Enter the number of hours: ");
  taskDuration.minutes = readPositiveNumber("Enter the number of minutes: ");
  taskDuration.seconds = readPositiveNumber("Enter the number of seconds: ");

  return taskDuration;
}

int taskDurationInSeconds(stTaskDuration taskDuration)
{
  return taskDuration.days * 24 * 60 * 60 + taskDuration.hours * 60 * 60 + taskDuration.minutes * 60 + taskDuration.seconds;
}

int main()
{
  stTaskDuration taskDuration = readTaskDuration();

  cout << "Total duration in seconds = " << taskDurationInSeconds(taskDuration) << endl;
}
