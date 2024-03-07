// Write a program to fill two 3x3 matrix with random numbers
// and them, then write a function to sum all numbers in this
// matrix and print it.

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
      matrix[i][j] = randomNumber(1, 10);
  }
}

int sumMatrix(int matrix[3][3], short rows, short cols)
{
  int sum = 0;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
      sum += matrix[i][j];
  }
  return sum;
}

void printMatrixArray(int matrix[3][3], short rows, short cols)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
      printf("  %0*d  ", 2, matrix[i][j]);

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

  cout << "The sum of all numbers in this matrix is: " << sumMatrix(matrix, 3, 3) << endl;
}

/*
The following is a 3*3 matrix with random numbers: 
  06    02    08  
  01    04    07  
  08    02    06  
The sum of all numbers in this matrix is: 44
*/
