#include <iostream>
#include <string>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()
using namespace std;

/*
    Program Name   : RowSum_3x3Matrix
    Description    : Fills a 3x3 matrix with random integers and computes the sum of each row.
    Solution       :
        - Based on Problem 001 which created and printed a random 3x3 matrix.
        - User input: none — matrix is auto-filled with random numbers in range [1, 100].
        - A helper function computes the sum of a given row.
        - Another function prints the sum of each row in a readable format.
*/

int GenerateRandomNumber(int From, int To)
{
	return (rand() % (To - From + 1)) + From;
}

void FillArrayWithElements(int Array[3][3])
{
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			Array[i][j] = GenerateRandomNumber(1, 100);
		}
	}
}

void PrintArrayElements(int Array[3][3])
{
	cout << "The Following is 3*3 Matrix:\n";

	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			cout << Array[i][j] << "\t";
		}
		cout << endl;
	}
}

int RowSum(int Array[3][3],int RowNumber)
{
	int Sum = 0;
	for (int j = 0;j < 3;j++)
	{
		Sum += Array[RowNumber][j];
	}
	return Sum;
}

void PrintRowSum(int Array[3][3])
{
	cout << "\nThe the following are the sum of each row in the matrix:\n";
	for (int i = 0;i < 3;i++)
	{
		cout << "Row [" << i+1 << "] Sum = " << RowSum(Array,i) << endl;
	}
}
int main()
{
	srand((unsigned)time(NULL));  // Seed the random generator once

	int Array[3][3];

	FillArrayWithElements(Array);
	PrintArrayElements(Array);
	PrintRowSum(Array);
}