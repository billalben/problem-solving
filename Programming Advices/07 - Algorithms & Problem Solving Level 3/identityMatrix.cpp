// Write a program to check if the matrix is identity or not.

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
      matrix[i][j] = randomNumber(0, 1);
  }
}

bool isIdentityMatrix(int matrix[3][3], short rows, short cols)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      if (i == j && matrix[i][j] != 1)
        return false;
      else if (i != j && matrix[i][j] != 0)
        return false;
    }
  }
  return true;
}

void printMatrixArray(int matrix[3][3], short rows, short cols)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
      cout << setw(3) << matrix[i][j] << "  ";

    cout << endl;
  }
}

int main()
{
  // Seeds the random number generator in c++, called only once
  srand((unsigned)time(NULL));

  int matrix[3][3];
  fillMatrixArrayWithRandomNums(matrix, 3, 3);

  cout << "The following is a 3*3 matrix with random numbers: \n";
  printMatrixArray(matrix, 3, 3);

  if (isIdentityMatrix(matrix, 3, 3))
    cout << "\nYes: the matrix is Identity\n";
  else
    cout << "\nNo: the matrix is NOT Identity\n";
}
