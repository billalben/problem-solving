// Write a program to check it if the matrix is Palindrome or not.

#include <iostream>
#include <iomanip>

using namespace std;

int randomNumber(int min, int max)
{
  return rand() % (max - min + 1) + min;
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
      cout << setw(3) << arr[i][j] << "\t";
    }
    cout << endl;
  }
}

bool isMatrixPalindrome(int matrix[3][3], short rows, short cols)
{
  for (short i = 0; i < rows; i++)
  {
    for (short j = 0; j < cols; j++)
    {
      if (matrix[i][j] != matrix[rows - i - 1][cols - j - 1])
        return false;
    }
  }

  return true;
}

int main()
{
  // int matrix[3][3];
  // fillMatrixWithRandomNumbers(matrix, 3, 3);

  int matrix[3][3] = {
    {1, 2, 3},
    {2, 2, 2},
    {3, 2, 1}
  };

  cout << "The matrix is: " << endl;
  printMatrix(matrix, 3, 3);

  if (isMatrixPalindrome(matrix, 3, 3))
    cout << "The matrix is Palindrome." << endl;
  else
    cout << "The matrix is not Palindrome." << endl;
}
