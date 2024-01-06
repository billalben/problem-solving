#include <iostream>

using namespace std;

short readNumberInRange(short from = 0, short to = 20, string message = "Enter A Number")
{
  short num;
  do
  {
    cout << message;
    cin >> num;
  } while (num < from || num > to);

  return num;
}

char getGradeLetter(short grade = 0) {
  if (grade >= 90) return 'A';
  else if (grade >= 80) return 'B';
  else if (grade >= 70) return 'C';
  else if (grade >= 60) return 'D';
  else if (grade >= 50) return 'E';
  else return 'F';
}

int main()
{
  short grade = readNumberInRange(0, 100, "Enter Your Grade Between 0 - 100: ");
  cout << "Result: " << getGradeLetter(grade) << endl;
}