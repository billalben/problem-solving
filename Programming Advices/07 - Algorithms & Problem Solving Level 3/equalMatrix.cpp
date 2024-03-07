// Write a program to compare two matrices and check if they
// are equal or not.

#include <iostream>

using namespace std;

int randomNumber(int min, int max)
{
  return rand() % (max - min + 1) + min;
}

void fillMatrixArrayWithRandomNums(int matrix[3][3], short rows, short cols)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
      matrix[i][j] = randomNumber(1, 10);
  }
}

int sumMatrix(int matrix[3][3], short rows, short cols)
{
  int sum = 0;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
      sum += matrix[i][j];
  }
  return sum;
}

bool areMatricesEqual(int matrix1[3][3], int matrix2[3][3], short rows, short cols)
{
  return (sumMatrix(matrix1, rows, cols) == sumMatrix(matrix2, rows, cols));
}

void printMatrixArray(int matrix[3][3], short rows, short cols)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
      printf("  %0*d  ", 2, matrix[i][j]);

    cout << endl;
  }
}

int main()
{
  // Seeds the random number generator in c++, called only once
  srand((unsigned)time(NULL));

  int matrix1[3][3];
  int matrix2[3][3];

  fillMatrixArrayWithRandomNums(matrix1, 3, 3);
  fillMatrixArrayWithRandomNums(matrix2, 3, 3);

  cout << "The following is the first 3*3 matrix: \n";
  printMatrixArray(matrix1, 3, 3);

  cout << "The following is the second 3*3 matrix: \n";
  printMatrixArray(matrix2, 3, 3);

  if (areMatricesEqual(matrix1, matrix2, 3, 3))
    cout << "\nYes: matrices are equal.\n";
  else
    cout << "\nNo: matrices are NOT equal.\n";
}
