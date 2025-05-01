#include <iostream>
#include <string>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()
using namespace std;

/*
    Program Name   : Column Sum of 3x3 Matrix
    Description    : Generates a 3x3 matrix filled with random numbers and calculates the sum of each column.
    Solution       :
        - Based on Problem 002 which handled row sums using helper functions.
        - User Input: No user input. The matrix is filled with random integers from 1 to 100.
        - The program fills the matrix, prints it, then calculates the sum of each column.
        - Final Output: A matrix followed by the sum of each column.
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
    cout << "The Following is 3*3 Matrix:\n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << Array[i][j] << "\t";
        }
        cout << endl;
    }
}

int ColSum(int Array[3][3], int ColNumber)
{
    int Sum = 0;
    for (int j = 0; j < 3; j++)
    {
        Sum += Array[j][ColNumber];
    }
    return Sum;
}

void PrintColSum(int Array[3][3])
{
    int ColSumArray[3];

    cout << "\nThe following are the sum of each column in the matrix:\n";
    for (int i = 0; i < 3; i++)
    {
        ColSumArray[i] = ColSum(Array, i);
        cout << "Column [" << i + 1 << "] Sum = " << ColSumArray[i] << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));  // Seed the random generator once

    int Array[3][3];

    FillArrayWithElements(Array);
    PrintArrayElements(Array);
    PrintColSum(Array);
}
