// Write a program to fill a 3x3 matrix with random numbers,
// then print each Col sum.

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
      matrix[i][j] = randomNumber(1, 100);
  }
}

void printMatrixArray(int matrix[3][3], short rows, short cols)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
      cout << matrix[i][j] << " ";

    cout << endl;
  }
}

void printSumCols(int matrix[3][3], short rows, short cols)
{
  int sum = 0;
  for (int i = 0; i < cols; i++)
  {
    for (int j = 0; j < rows; j++)
    {
      sum += matrix[j][i];
    }

    cout << "Col " << i + 1 << " Sum " << sum << endl;
    sum = 0;
  }
}

int main()
{
  // Seeds the random number generator in C++, called only once
  srand((unsigned)time(NULL));

  int matrix[3][3];
  fillMatrixArrayWithRandomNums(matrix, 3, 3);

  cout << "The following is a 3*3 radom matrix: \n";
  printMatrixArray(matrix, 3, 3);

  cout << "The following is the sum of each col: \n";
  printSumCols(matrix, 3, 3);
}

/*
  The following is a 3*3 radom matrix: 
  50 88 52 
  11 87 34 
  31 24 36 
  The following is the sum of each col: 
  Col 1 Sum 92
  Col 2 Sum 199
  Col 3 Sum 122
*/