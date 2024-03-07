// Write a program to fill two 3x3 matrix with random numbers
// and them, then multiply them into a 3rd matrix and print it.

#include <iostream>
#include <iomanip>

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

void multiplyMatrix(int matrix1[3][3], int matrix2[3][3], int result[3][3], short rows, short cols)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      result[i][j] = matrix1[i][j] * matrix2[i][j];
    }
  }
}

void printMatrixArray(int matrix[3][3], short rows, short cols)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
      cout << setw(4) << matrix[i][j] << "\t";

    cout << endl;
  }
}

int main()
{
  // Seeds the random number generator in c++, called only once
  srand((unsigned)time(NULL));

  int matrix1[3][3], matrix2[3][3], result[3][3];
  fillMatrixArrayWithRandomNums(matrix1, 3, 3);
  fillMatrixArrayWithRandomNums(matrix2, 3, 3);

  cout << "The following is the first 3*3 matrix with random numbers: \n";
  printMatrixArray(matrix1, 3, 3);

  cout << "The following is the second 3*3 matrix with random numbers: \n";
  printMatrixArray(matrix2, 3, 3);

  multiplyMatrix(matrix1, matrix2, result, 3, 3);

  cout << "The following is the result of the multiplication of the two matrices: \n";
  printMatrixArray(result, 3, 3);
}

/*
The following is the first 3*3 matrix with random numbers:
    3       2       4
    9       4       4
    10       6      5
The following is the second 3*3 matrix with random numbers:
    3       2       6
    2       6       4
    9       7       5
The following is the result of the multiplication of the two matrices:
    9       4      24
    18      24     16
    90      42     25
*/
