// Write a program to check if the matrix is Sparce or not.

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int randomNumber(int from, int to)
{
  int randNumber = rand() % (to - from + 1) + from;
  return randNumber;
}

void fillMatrixWithRandomNumbers(int arr[3][3], short rows, short cols)
{

  for (short i = 0; i < rows; i++)
  {

    for (short j = 0; j < cols; j++)
    {
      arr[i][j] = randomNumber(0, 1);
    }
  }
}

short countNumberInMatrix(int matrix[3][3], short num, short rows, short cols)
{
  short NumberCount = 0;

  for (short i = 0; i < rows; i++)
  {
    for (short j = 0; j < cols; j++)
    {
      if (num == matrix[i][j])
      {
        NumberCount++;
      }
    }
  }

  return NumberCount;
}

bool isSparseMatrix(int matrix[3][3], short rows, short cols)
{
  short matrixSize = rows * cols;

  return (countNumberInMatrix(matrix, 0, 3, 3) >= (matrixSize / 2));
}

void printMatrix(int arr[3][3], short rows, short cols)
{
  for (short i = 0; i < rows; i++)
  {
    for (short j = 0; j < cols; j++)
    {
      printf(" %0*d   ", 2, arr[i][j]);
      // cout << setw(3) << arr[i][j] << "\t";
    }

    cout << endl;
  }
}

int main()
{
  // Seeds the random number generator in c++, called only once
  srand((unsigned)time(NULL));

  int matrix[3][3] = {{9, 0, 0},{9, 9, 0},{0, 9, 9}};
  // int matrix[3][3] = {{9, 0, 0}, {9, 9, 0}, {0, 0, 0}};

  // FillMatrixWithRandomNumbers(Matrix1, 3, 3);

  cout << "\nMatrix 1:\n";
  printMatrix(matrix, 3, 3);

  if (isSparseMatrix(matrix, 3, 3))
    cout << "\nYes: it is Sparse\n";
  else
    cout << "\nNo: it is not Sparse\n";
}
