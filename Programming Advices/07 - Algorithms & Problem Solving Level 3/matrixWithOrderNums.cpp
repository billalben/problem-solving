// Write a program to fill a 3x3 matrix with ordered numbers.

#include <iostream>
#include <iomanip>

using namespace std;

void fillMatrixArrayWithOrderedNums(int matrix[3][3], short rows, short cols)
{
  int num = 1;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
      matrix[i][j] = num++;
  }
}

void printMatrixArray(int matrix[3][3], short rows, short cols)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
      cout << setw(3) << matrix[i][j] << " ";

    cout << endl;
  }
}

int main()
{
  int matrix[3][3];
  fillMatrixArrayWithOrderedNums(matrix, 3, 3);

  cout << "The following is a 3*3 matrix with ordered numbers: \n";
  printMatrixArray(matrix, 3, 3);
}

/*
  The following is a 3*3 matrix with ordered numbers:
  1   2   3
  4   5   6
  7   8   9
*/
