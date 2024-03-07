// Write a program to print the Minimum and Maximum Numbers in Matrix.

#include <iostream>

using namespace std;

int randomNumber(int from, int to)
{
  return rand() % (to - from + 1) + from;
}

void fillMatrixWithRandomNumbers(int arr[3][3], short rows, short cols)
{
  for (short i = 0; i < rows; i++)
  {
    for (short j = 0; j < cols; j++)
    {
      arr[i][j] = randomNumber(1, 100);
    }
  }
}

void printMatrix(int arr[3][3], short rows, short cols)
{
  for (short i = 0; i < rows; i++)
  {
    for (short j = 0; j < cols; j++)
    {
      cout << arr[i][j] << "\t";
    }
    cout << endl;
  }
}

int maxNumberInMatrix(int matrix[3][3], short rows, short cols)
{
  int maxNumber = matrix[0][0];

  for (short i = 0; i < rows; i++)
  {
    for (short j = 0; j < cols; j++)
    {
      if (matrix[i][j] > maxNumber)
        maxNumber = matrix[i][j];
    }
  }

  return maxNumber;
}

int minNumberInMatrix(int matrix[3][3], short rows, short cols)
{
  int minNumber = matrix[0][0];

  for (short i = 0; i < rows; i++)
  {
    for (short j = 0; j < cols; j++)
    {
      if (matrix[i][j] < minNumber)
        minNumber = matrix[i][j];
    }
  }

  return minNumber;
}

int main()
{
  srand(time(0));

  int matrix[3][3];
  fillMatrixWithRandomNumbers(matrix, 3, 3);

  cout << "The matrix is: " << endl;
  printMatrix(matrix, 3, 3);

  cout << "The maximum number in the matrix is: " << maxNumberInMatrix(matrix, 3, 3) << endl;
  cout << "The minimum number in the matrix is: " << minNumberInMatrix(matrix, 3, 3) << endl;

  return 0;
}

/*
25      77      29
17      93      22
52      46      14
The maximum number in the matrix is: 93
The minimum number in the matrix is: 14
*/
