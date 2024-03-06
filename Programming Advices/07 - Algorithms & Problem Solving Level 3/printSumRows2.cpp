// Write a program to fill a 3x3 matrix with random numbers,
// then sum each row in separate array and print the results.

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

void sumRows(int matrix[3][3], short rows, short cols, int sum[])
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      sum[i] += matrix[i][j];
    }
  }
}

void printSumRows(int sum[], short rows)
{
  for (int i = 0; i < rows; i++)
    cout << "Row " << i + 1 << " Sum " << sum[i] << endl;
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
  sumRows(matrix, 3, 3, sum);

  cout << "The following is the sum of each row: \n";
  printSumRows(sum, 3);
}