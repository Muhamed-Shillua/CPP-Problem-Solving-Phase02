#include <iostream>
#include <string>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

using namespace std;

/*
    Program Name   : Compare Two Matrices
    Description    : Fills two 3x3 matrices with random numbers and checks if they are exactly identical
    Solution       :
        - Based on matrix handling and comparison logic
        - Program Logic  : 
              -> Fill both matrices with random numbers (1 to 10)
              -> Print both matrices
              -> Compare each element to check if they match exactly
        - Output Format  : 
              -> Prints both matrices
              -> Displays result
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

// Compares each value of two matrices and returns true if equal
bool IsMatricesTypical(int Matrix1[3][3], int Matrix2[3][3], int Row, int Col)
{
	bool IsTypical = true;
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
		{
			if (Matrix1[i][j] != Matrix2[i][j])
				IsTypical = false;
		}
	}
	return IsTypical;
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

	// Check if the two matrices have same values
	(IsMatricesTypical(Matrix1, Matrix2, 3, 3))
		? cout << "Yes, Matrices are Typical.\n"
		: cout << "No, Matrices are not Typical.\n";

	return 0;
}
