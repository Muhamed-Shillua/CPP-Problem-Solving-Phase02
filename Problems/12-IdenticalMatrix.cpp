#include <iostream>
using namespace std;

/*
    Program Name   : Identical Matrix
    Description    : Fills a 3x3 matrix with predefined numbers and checks if it has the property of being an identity matrix.
    Solution       :
        - Based on matrix handling and identity checking logic.
        - Program Logic:
              -> Fill the matrix with specific numbers (in this case, an identity matrix).
              -> Print the matrix to show its contents.
              -> Check if the matrix is an identity matrix (1s on the diagonal and 0s elsewhere).
        - Output Format:
              -> Prints the matrix.
              -> Displays whether the matrix is an identity matrix or not.
*/

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

// check if the matrix is identical
bool CheckIdentity(int Matrix[3][3], int Row, int Col)
{
	bool IsIdentity = true;
	int checker = Matrix[0][0];
	for (int i = 0;i < Row;i++)
	{
		for (int j = 0;j < Col;j++)
		{
			if ((i == j) && Matrix[i][j] != checker)
			{
				IsIdentity = false;
			}
		}
	}
	return IsIdentity;
}

int main()
{
	int Matrix[3][3] =
	{
		{1,0,0},
		{0,1,0},
		{0,0,1}
	};  //change values and chect it again

	cout << "Matrix_1:\n";
	PrintMatrixElements(Matrix, 3, 3);

	cout << endl;
	// Check if the matrix is identical
	(CheckIdentity(Matrix, 3, 3))
		? cout << "Yes, Matrix is Identical.\n"
		: cout << "No, Matrix is NOT Identical.\n";
	
	return 0;
}
