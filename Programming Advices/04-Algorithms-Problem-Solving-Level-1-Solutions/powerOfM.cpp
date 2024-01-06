#include <iostream>

using namespace std;

int readPositiveNumber(string message)
{
  int num;

  do
  {
    cout << message;
    cin >> num;
  } while (0 >= num);

  return num;
}

int powerOfN(int num, short int power)
{
  return pow(num, power);
}

int main()
{
  int num = readPositiveNumber("Enter A Number: ");
  int power = readPositiveNumber("Enter Power: ");

  cout << num << " ^ " << power << " :" << powerOfN(num, power) << endl;
  
}