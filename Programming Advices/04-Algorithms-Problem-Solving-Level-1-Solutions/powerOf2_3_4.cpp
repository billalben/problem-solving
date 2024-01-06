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
  int powerOfNum[3] = {powerOfN(num, 2), powerOfN(num, 3), powerOfN(num, 4)};

  cout << "Power of 2: " << powerOfNum[0] << endl;
  cout << "Power of 3: " << powerOfNum[1] << endl;
  cout << "Power of 4: " << powerOfNum[2] << endl;
  
}