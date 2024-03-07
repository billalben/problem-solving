// Write a program to fill a 3x3 matrix with random numbers,
// print it, then print the middle row and middle col.

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

void printMatrixArray(int matrix[3][3], short rows, short cols)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
      printf("  %0*d  ", 2, matrix[i][j]);

    cout << endl;
  }
}

void printMiddleRow(int matrix[3][3], short rows, short cols)
{
  short middleRow = rows / 2;

  for (int i = 0; i < rows; i++)
    printf("  %0*d  ", 2, matrix[middleRow][i]);

  cout << endl;
}

void printMiddleCol(int matrix[3][3], short rows, short cols)
{
  short middleCol = cols / 2;

  for (int i = 0; i < cols; i++)
    printf("  %0*d  ", 2, matrix[i][middleCol]);

  cout << endl;
}

int main()
{
  // Seeds the random number generator in c++, called only once
  srand((unsigned)time(NULL));

  int matrix[3][3];
  fillMatrixArrayWithRandomNums(matrix, 3, 3);

  cout << "\nThe following is a 3*3 matrix with random numbers: \n";
  printMatrixArray(matrix, 3, 3);

  cout << "\nThe following is the middle row: \n";
  printMiddleRow(matrix, 3, 3);

  cout << "The following is the middle col: \n";
  printMiddleCol(matrix, 3, 3);
}

/*
  The following is a 3*3 matrix with random numbers: 
    02    03    05  
    05    01    06  
    02    06    10  

  The following is the middle row: 
    05    01    06  
  The following is the middle col: 
    03    01    06  
*/
