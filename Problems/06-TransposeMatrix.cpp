#include <iostream>
#include <string>

using namespace std;

/*
    Program Name   : Transpose Matrix
    Description    : Takes a 3×3 matrix and prints its transpose.
    Solution       :
        - Based on Problem #5 which involves: using loops to fill and manipulate a matrix.
        - The original matrix is printed.
        - A second matrix is created to store the transposed version by swapping rows with columns.
        - The transposed matrix is then printed in the same format.
        - Note: The current implementation does not use pointers, but can be extended to do so.
*/

void FillArrayWithElements(int Array[3][3], int Row, int Col)
{
	int Counter = 1;
	for (int i = 0;i < Row;i++)
	{
		for (int j = 0;j < Col;j++)
		{
			Array[i][j] = Counter;
			Counter++;
		}
	}
}

void PrintArrayElements(int Array[3][3], int Row, int Col)
{
	for (int i = 0;i < Row;i++)
	{
		for (int j = 0;j < Col;j++)
		{
			cout << Array[i][j] << "\t";
		}
		cout << endl;
	}
}

void TransposeArray(int Array[3][3], int TransposedArray[3][3], int Row, int Col)
{
	for (int i = 0;i < Row;i++)
	{
		for (int j = 0;j < Col;j++)
		{
			TransposedArray[i][j] = Array[j][i]; // Swap row and column to transpose the matrix
		}
	}
}

int main()
{
	int Array[3][3],TransposedArray[3][3];

	FillArrayWithElements(Array,3,3);

	cout << "The Following is a 3*3 Matrix:\n";
	PrintArrayElements(Array,3,3);

	TransposeArray(Array, TransposedArray, 3, 3);
	cout << "The Following is a Transposed 3*3 Matrix:\n";
	PrintArrayElements(TransposedArray, 3, 3);
	
	return 0;
}