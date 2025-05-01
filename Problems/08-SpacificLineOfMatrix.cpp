#include <iostream>
#include <string>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

/*
    Program Name   : Print Middle Row and Column of a 3×3 Matrix
    Description    : Fills a 3×3 matrix with random numbers and prints both the middle row and the middle column.
    Solution       :
        - Based on earlier practice with generating and printing 2D matrices.
        - The matrix is filled with random integers from 1 to 10.
        - The full matrix is printed in a formatted style.
        - The middle row is calculated and printed separately.
        - The middle column is also calculated and printed separately.
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

void PrintMiddleRow(int Matrix[3][3], int Row, int Col)
{
	short MiddleRow = Row / 2;
	for (int i = 0;i < Row;i++)
	{
		//print values in better format
		printf(" %0*d ", 2, Matrix[MiddleRow][i]);//start print from row number 1 which is middle
	}
}

void PrintMiddleCol(int Matrix[3][3], int Row, int Col)
{
	short MiddleCol = Col / 2;
	for (int i = 0;i < Row;i++)
	{
		//print values in better format
		printf(" %0*d ", 2, Matrix[i][MiddleCol]);//start print from column number 1 which is middle
	}
}

int main()
{
	srand((unsigned)time(NULL));  // Seed the random generator once

	int Matrix[3][3];

	//Fill and print matrix
	FillMatrixWithElements(Matrix, 3, 3);
	cout << "Matrix:\n";
	PrintMatrixElements(Matrix, 3, 3);

	//print spacific row
	cout << "\nThe Middle Row:\n";
	PrintMiddleRow(Matrix, 3, 3);

	// print spacific row
	cout << "\nThe Middle Column:\n";
	PrintMiddleCol(Matrix, 3, 3);
	


	return 0;	
}