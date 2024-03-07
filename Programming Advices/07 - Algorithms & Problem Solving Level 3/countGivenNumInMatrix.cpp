// Write a program to count given number in matrix.

#include <iostream>
#include <iomanip>

using namespace std;

int readNumber()
{
  int number;
  cout << "Enter a number: ";
  cin >> number;

  while (cin.fail())
  {
    cin.clear();
    cin.ignore(256, '\n');

    cout << "Invalid input. Please enter a number: ";
    cin >> number;
  }

  return number;
}

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
      cout << setw(3) << matrix[i][j] << "\t";

    cout << endl;
  }
}

int countGivenNumberInMatrix(int matrix[3][3], short rows, short cols, int number)
{
  int count = 0;
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      if (matrix[i][j] == number)
        count++;
    }
  }
  return count;
}

int main()
{
  // Seeds the random number generator in c++, called only once
  srand((unsigned)time(NULL));

  int matrix[3][3];
  fillMatrixArrayWithRandomNums(matrix, 3, 3);

  cout << "The following is a 3*3 matrix with random numbers: \n";
  printMatrixArray(matrix, 3, 3);

  int number = readNumber();
  cout << "The number " << number << "count in matrix is: ";
  cout << countGivenNumberInMatrix(matrix, 3, 3, number) << endl;
}

/*
The following is a 3*3 matrix with random numbers: 
  8       2       5
  10      8       5
  2       8       1
Enter a number: 8
The number 8count in matrix is: 3
*/
