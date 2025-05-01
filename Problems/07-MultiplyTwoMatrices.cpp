#include <iostream>
#include <string>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

/*
    Program Name   : Multiply Two 3×3 Matrices Element-Wise
    Description    : Generates two random 3×3 matrices and multiplies them element by element.
    Solution       :
        - Based on practice with nested loops and 2D arrays.
        - Uses a random number generator to fill both matrices with values from 1 to 10.
        - A third matrix is created where each element is the product of the corresponding elements in the two input matrices.
        - All three matrices are printed to the console in a formatted way.
*/

using namespace std;

int GenerateRandomNumber(int From, int To)
{
	return (rand() % (To - From + 1)) + From;
}

void FillMatrixWithElements(int Matrix[3][3], int Row, int Col)
{
	for (int i = 0;i < Row;i++)
	{
		for (int j = 0;j < Col;j++)
		{
			Matrix[i][j] = GenerateRandomNumber(1,10);
		}
	}
}

void PrintMatrixElements(int Matrix[3][3], int Row, int Col)
{
	for (int i = 0;i < Row;i++)
	{
		for (int j = 0;j < Col;j++)
		{
			//print values in better format
			printf(" %0*d ", 2, Matrix[i][j]);
		}
		cout << endl;
	}
}

void MultiplyTwoMatrices(int Matrix1[3][3], int Matrix2[3][3], int Matrix3[3][3], int Row, int Col)
{
	for (int i = 0;i < Row;i++)
	{
		for (int j = 0;j < Col;j++)
		{
			Matrix3[i][j] = Matrix1[i][j] * Matrix2[i][j];
		}
	}
}

int main()
{
	srand((unsigned)time(NULL));  // Seed the random generator once

	int Matrix1[3][3],Matrix2[3][3],Result[3][3];

	//Fill and print matrix_1
	FillMatrixWithElements(Matrix1, 3, 3);
	cout << "Matrix_1:\n";
	PrintMatrixElements(Matrix1, 3, 3);

	cout << endl;

	//Fill and print matrix_2
	FillMatrixWithElements(Matrix2, 3, 3);
	cout << "Matrix_2:\n";
	PrintMatrixElements(Matrix2, 3, 3);

	cout << endl;

	//Multiply the matrices and strore the result in anther one then print it
	MultiplyTwoMatrices(Matrix1, Matrix2, Result, 3, 3);
	cout << "Results:\n";
	PrintMatrixElements(Result, 3, 3);




	return 0;	
}