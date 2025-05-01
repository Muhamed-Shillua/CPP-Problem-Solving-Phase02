#include <iostream>
#include <string>

using namespace std;

/*
	Program Name   : 3x3 Ordered Matrix
	Description    : Prints a 3×3 matrix after filling it with numbers from 1 to 9 in ascending order.
	Solution       :
		- User Input: No user input; values are auto-generated inside the program.
		- A 3×3 matrix is created and filled with numbers from 1 to 9 using an incrementing counter.
		- The matrix elements are then printed in a 3-row, 3-column table format.
		- This approach can be extended in future problems to use pointers for deeper memory manipulation.
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
	cout << "The Following is a 3*3 Matrix:\n";

	for (int i = 0;i < Row;i++)
	{
		for (int j = 0;j < Col;j++)
		{
			cout << Array[i][j] << "\t";
		}
		cout << endl;
	}
}

int main()
{
	int Array[3][3];

	FillArrayWithElements(Array,3,3);
	PrintArrayElements(Array,3,3);
}