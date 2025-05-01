#include <iostream>
#include <string>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

using namespace std;

/*
    Program Name   : Sum of Matrix Elements
    Description    : Fills a 3×3 matrix with random values and calculates the total sum of all elements.
    Solution       :
        - The matrix is initialized with random numbers between 1 and 10.
        - A helper function loops through all cells and accumulates their sum.
        - The matrix is printed in formatted style.
        - Finally, the total sum is displayed.
*/

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

int SumOfMatrix(int Matrix[3][3], int Row, int Col)
{
	int Sum = 0;

	for (int i = 0;i < Row;i++)
	{
		for (int j = 0;j < Col;j++)
		{
			Sum += Matrix[i][j];
		}
	}
	return Sum;
}

int main()
{
	srand((unsigned)time(NULL));  // Seed the random generator once

	int Matrix[3][3];

	//Fill and print matrix
	FillMatrixWithElements(Matrix, 3, 3);
	cout << "Matrix:\n";
	PrintMatrixElements(Matrix, 3, 3);

	int Sum = SumOfMatrix(Matrix, 3, 3);

	cout << "\nThe Sum Of the Matrix = " << Sum;

	


	return 0;	
}