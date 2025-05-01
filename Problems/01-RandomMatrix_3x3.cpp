#include <iostream>
#include <string>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

/*
    Program Name   : RandomMatrix_3x3
    Description    : Generates a 3x3 matrix filled with random integers between 1 and 100, then prints it.
    Solution       :
        - Based on array fundamentals and basic loop logic.
        - User input: none — matrix is auto-filled using random numbers.
        - Fills a 2D array (3x3) with random numbers in range [1, 100] using a helper function.
        - Then prints the matrix in a formatted structure using another function.
*/

using namespace std;

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

int main()
{
    srand((unsigned)time(NULL));  // Seed the random generator once

    int Array[3][3];

    FillArrayWithElements(Array);
    PrintArrayElements(Array);
}
