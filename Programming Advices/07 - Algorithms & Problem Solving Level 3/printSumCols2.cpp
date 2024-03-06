// Write a program to fill a 3x3 matrix with random numbers,
// then sum each Col in another array and print them.

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

void sumCols(int matrix[3][3], short rows, short cols, int sum[])
{
  for (int i = 0; i < cols; i++)
  {
    for (int j = 0; j < rows; j++)
    {
      sum[i] += matrix[j][i];
    }
  }
}

void printSumCols(int sum[], short cols)
{
  for (int i = 0; i < cols; i++)
    cout << "Col " << i + 1 << " Sum " << sum[i] << endl;
}

int main()
{
  // Seeds the random number generator in C++, called only once
  srand((unsigned)time(NULL));

  int matrix[3][3];
  fillMatrixArrayWithRandomNums(matrix, 3, 3);

  cout << "The following is a 3*3 radom matrix: \n";
  printMatrixArray(matrix, 3, 3);

  int sum[3] = {0, 0, 0};
  sumCols(matrix, 3, 3, sum);

  cout << "The following is the sum of each col: \n";
  printSumCols(sum, 3);
}
