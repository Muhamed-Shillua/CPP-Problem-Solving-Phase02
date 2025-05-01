#include <iostream>
#include <string>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()
using namespace std;

/*
    Program Name   : RowSumArray_3x3Matrix
    Description    : Fills a 3x3 matrix with random numbers, calculates the sum of each row,
                     and stores these sums in a separate array before printing them.
    Solution       :
        - Based on Problem 002 which printed the sum of each row directly.
        - User input: none — matrix is auto-filled with random numbers in range [1, 100].
        - The sum of each row is calculated via a helper function.
        - These sums are stored in a new array called RowSumArray.
        - Final output displays each row's sum from the new array.
*/

int GenerateRandomNumber(int From, int To)
{
    return (rand() % (To - From + 1)) + From;
}

void FillArrayWithElements(int Array[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            Array[i][j] = GenerateRandomNumber(1, 100);
        }
    }
}

void PrintArrayElements(int Array[3][3])
{
    cout << "The Following is 3x3 Matrix:\n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << Array[i][j] << "\t";
        }
        cout << endl;
    }
}

int RowSum(int Array[3][3], int RowNumber)
{
    int Sum = 0;
    for (int j = 0; j < 3; j++)
    {
        Sum += Array[RowNumber][j];
    }
    return Sum;
}

void PrintRowSum(int Array[3][3])
{
    int RowSumArray[3];

    cout << "\nThe following are the sum of each row in the matrix:\n";
    for (int i = 0; i < 3; i++)
    {
        RowSumArray[i] = RowSum(Array, i);
        cout << "Row [" << i + 1 << "] Sum = " << RowSumArray[i] << endl;
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
