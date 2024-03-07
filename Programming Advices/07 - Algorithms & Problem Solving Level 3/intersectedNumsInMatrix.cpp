// Write a program to print the intersected numbers in two given matrices.

#include <iostream>
#include <iomanip>

using namespace std;

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
      arr[i][j] = randomNumber(1, 20);
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

bool isNumberInMatrix(int matrix[3][3], short num, short rows, short cols)
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

void printIntersectedNumbers(int matrix1[3][3], int matrix2[3][3], short rows, short cols)
{
  for (short i = 0; i < rows; i++)
  {
    for (short j = 0; j < cols; j++)
    {
      if (isNumberInMatrix(matrix1, matrix2[i][j], 3, 3))
      {
        cout << matrix2[i][j] << "\t";
      }
    }
  }
}

int main()
{
  srand(time(0));

  int matrix1[3][3];
  int matrix2[3][3];

  fillMatrixWithRandomNumbers(matrix1, 3, 3);
  fillMatrixWithRandomNumbers(matrix2, 3, 3);

  cout << "\nMatrix 1:" << endl;
  printMatrix(matrix1, 3, 3);

  cout << "\nMatrix 2:" << endl;
  printMatrix(matrix2, 3, 3);

  cout << "\nIntersected numbers: ";
  printIntersectedNumbers(matrix1, matrix2, 3, 3);
  cout << endl;

  return 0;
}
