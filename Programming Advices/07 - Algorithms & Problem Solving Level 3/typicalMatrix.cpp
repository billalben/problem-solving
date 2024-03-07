// Write a program to compare two matrices and check if they
// are typical or not.

#include <iostream>

using namespace std;

void printMatrixArray(int matrix[3][3], short rows, short cols)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
      printf("  %0*d  ", 2, matrix[i][j]);

    cout << endl;
  }
}

bool compareMatrix(int matrix1[3][3], int matrix2[3][3], short rows, short cols)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      if (matrix1[i][j] != matrix2[i][j])
        return false;
    }
  }
  return true;
}

int main()
{
  int matrix1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int matrix2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  cout << "The following is the first 3*3 matrix: \n";
  printMatrixArray(matrix1, 3, 3);

  cout << "The following is the second 3*3 matrix: \n";
  printMatrixArray(matrix2, 3, 3);

  if (compareMatrix(matrix1, matrix2, 3, 3))
    cout << "\nYes: both matrices are Typical\n";
  else
    cout << "\nNo: both matrices are not Typical\n";
}
