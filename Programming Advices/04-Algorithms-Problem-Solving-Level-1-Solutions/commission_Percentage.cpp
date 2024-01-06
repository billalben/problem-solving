#include <iostream>

using namespace std;

int readTotalSales(string message)
{
  int num = 0;
  do
  {
    cout << message;
    cin >> num;
  } while (num < 0);

  return num;
}

float getCommissionPercentage(float totalSales)
{
  if (totalSales >= 1000000)
    return 0.01;
  else if (totalSales >= 500000)
    return 0.02;
  else if (totalSales >= 100000)
    return 0.03;
  else if (totalSales >= 50000)
    return 0.00;
  else
    return 0;
}

float calculateTotalCommission(float totalSales)
{
  return getCommissionPercentage(totalSales) * totalSales;
}

int main()
{
  float totalSales = readTotalSales("enter Total Sales: ");

  cout << "Commission Percentage: " << getCommissionPercentage(totalSales) << endl;
  cout << "Total Commission: " << calculateTotalCommission(totalSales) << endl;
}