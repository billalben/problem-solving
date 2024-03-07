// Write a program to check if a given number exists in matrix or not.

#include <iostream>
#include <iomanip>

using namespace std;

int readNumber()
{
  int number;
  cout << "Enter a number: ";
  cin >> number;

  while (cin.fail())
  {
    cin.clear();
    cin.ignore(256, '\n');

    cout << "Invalid input. Please enter a number: ";
    cin >> number;
  }

  return number;
}

int randomNumber(int from, int to)
{
  return rand() % (to - from + 1) + from;
}

void fillMatrixWithRandomNumbers(int arr[3][3], short rows, short cols)
{
  for (short i = 0; i < rows; i++)
  {
    for (short j = 0; j < cols; j++)
    {
      arr[i][j] = randomNumber(1, 100);
    }
  }
}

void printMatrix(int arr[3][3], short rows, short cols)
{
  for (short i = 0; i < rows; i++)
  {
    for (short j = 0; j < cols; j++)
    {
      cout << setw(3) << arr[i][j] << "\t";
    }
    cout << endl;
  }
}

bool existsNumberInMatrix(int matrix[3][3], short num, short rows, short cols)
{
  for (short i = 0; i < rows; i++)
  {
    for (short j = 0; j < cols; j++)
    {
      if (num == matrix[i][j])
        return true;
    }
  }

  return false;
}

int main()
{
  srand(time(0));

  int matrix[3][3];
  fillMatrixWithRandomNumbers(matrix, 3, 3);
  printMatrix(matrix, 3, 3);

  short num = readNumber();

  if (existsNumberInMatrix(matrix, num, 3, 3))
    cout << "The number " << num << " exists in the matrix." << endl;
  else
    cout << "The number " << num << " does not exist in the matrix." << endl;
}
