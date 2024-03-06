// Write a program to fill a 3x3 matrix with random numbers.

#include <iostream>
#include <iomanip>

using namespace std;

int randomNumber(int min, int max)
{
  return rand() % (max - min + 1) + min;
}

void fillMatrixArrayWithRandomNums(int matrix[3][3])
{
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
      matrix[i][j] = randomNumber(1, 100);
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
  // Seeds the random number generator in C++, called only once
  srand((unsigned)time(NULL));

  int matrix[3][3];
  fillMatrixArrayWithRandomNums(matrix);

  printMatrixArray(matrix, 3, 3);
}

/*
  98   5  53
  86  60  77
  15   8  53
*/
