// Write a program to fill a 3x3 matrix with random numbers,
// then print each row sum.

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

void printSumRows(int matrix[3][3], short rows, short cols)
{
  int sum = 0;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      sum += matrix[i][j];
    }

    cout << "Row " << i + 1 << " Sum " << sum << endl;
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

  cout << "The following is the sum of each row: \n";
  printSumRows(matrix, 3, 3);
}

/*
  The following is a 3*3 radom matrix: 
  89 4 38 
  57 10 36 
  47 15 92 
  The following is the sum of each row: 
  Row 1 Sum 131
  Row 2 Sum 103
  Row 3 Sum 154
*/
