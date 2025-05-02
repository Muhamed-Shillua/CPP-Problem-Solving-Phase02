#include <iostream>
#include <string>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

using namespace std;

/*
    Program Name   : Compare Two Matrices by Sum
    Description    : Fills two 3×3 matrices with random numbers and checks if their total sums are equal.
    Solution       :
        - Each matrix is filled with random integers between 1 and 10.
        - The sum of each matrix is calculated using a helper function.
        - A comparison function checks if the two sums are equal.
        - The result is printed to indicate whether the matrices are considered equal based on their sums.
*/

// Generates a random number between From and To
int GenerateRandomNumber(int From, int To)
{
	return (rand() % (To - From + 1)) + From;
}

// Fills the matrix with random numbers between 1 and 10
void FillMatrixWithElements(int Matrix[3][3], int Row, int Col)
{
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
		{
			Matrix[i][j] = GenerateRandomNumber(1, 10);
		}
	}
}

// Prints the matrix in a formatted way
void PrintMatrixElements(int Matrix[3][3], int Row, int Col)
{
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
		{
			printf(" %0*d ", 2, Matrix[i][j]);
		}
		cout << endl;
	}
}

// Calculates the total sum of all matrix elements
int SumOfMatrix(int Matrix[3][3], int Row, int Col)
{
	int Sum = 0;

	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
		{
			Sum += Matrix[i][j];
		}
	}
	return Sum;
}

// Compares the sums of two matrices and returns true if equal
bool CheckMatricesEquality(int Matrix1[3][3], int Matrix2[3][3])
{
	int Matrix1Sum = SumOfMatrix(Matrix1, 3, 3);
	int Matrix2Sum = SumOfMatrix(Matrix2, 3, 3);

	if (Matrix1Sum == Matrix2Sum) return true;
	else return false;
}

int main()
{
	srand((unsigned)time(NULL));  // Seed the random number generator

	int Matrix1[3][3], Matrix2[3][3];

	// Fill and display first matrix
	FillMatrixWithElements(Matrix1, 3, 3);
	cout << "Matrix_1:\n";
	PrintMatrixElements(Matrix1, 3, 3);

	cout << endl;

	// Fill and display second matrix
	FillMatrixWithElements(Matrix2, 3, 3);
	cout << "Matrix_2:\n";
	PrintMatrixElements(Matrix2, 3, 3);

	cout << endl;

	// Check if the two matrices have equal sums
	(CheckMatricesEquality(Matrix1, Matrix2)) 
		? cout << "Yes, Matrices are Equal.\n" 
		: cout << "No, Matrices are not Equal.\n";

	return 0;
}
