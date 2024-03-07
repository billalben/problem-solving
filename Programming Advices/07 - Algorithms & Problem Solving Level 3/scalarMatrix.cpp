// Write a program to check if the matrix is Scalar or not.

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

bool isScalarMatrix(int matrix[3][3], short rows, short cols)
{
  int firstDigitElement = matrix[0][0];

  for (short i = 0; i < rows; i++)
  {
    for (short j = 0; j < cols; j++)
    {
      // check for diagonals element
      if (i == j && matrix[i][j] != firstDigitElement)
      {
        return false;
      }
      // check for rest elements
      else if (i != j && matrix[i][j] != 0)
      {
        return false;
      }
    }
  }

  return true;
}

int main()
{
  int matrix[3][3] = {{9, 0, 0}, {0, 9, 0}, {0, 0, 9}};

  cout << "The following is a 3*3 matrix: \n";
  printMatrixArray(matrix, 3, 3);

  if (isScalarMatrix(matrix, 3, 3))
    cout << "\nYes: the matrix is Scalar\n";
  else
    cout << "\nNo: the matrix is not Scalar\n";
}
