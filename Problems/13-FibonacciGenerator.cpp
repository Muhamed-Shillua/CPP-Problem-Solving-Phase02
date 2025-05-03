#include <iostream>
using namespace std;

/*
    Program Name   : Fibonacci Generator (Dynamic)
    Description    : Generates and prints a Fibonacci sequence of any length specified by the user.
    Solution       :
        - User Input: The user is prompted to enter how many Fibonacci numbers they want.
        - If the input is less than 2, an error message is displayed and the program exits.
        - The program dynamically allocates memory for the array using `new`.
        - It fills the array using the Fibonacci rule: each number = sum of previous two.
        - Finally, it prints the numbers and deallocates the memory using `delete[]`.
*/

// Generate Fibonacci series
void GenerateFibonacci(int arr[], int length)
{
    arr[0] = 1;
    arr[1] = 1;
    for (int i = 2; i < length; ++i)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
}

int main()
{
    int length;

    cout << "Enter how many Fibonacci numbers you want: ";
    cin >> length;

    if (length < 2)
    {
        cout << "Please enter a number greater than or equal to 2." << endl;
        return 1; // Exit the program with an error code
    }

    // Allocate memory dynamically
    int* Fibonacci = new int[length];

    GenerateFibonacci(Fibonacci, length);

    // Print the series
    for (int i = 0; i < length; ++i)
    {
        cout << Fibonacci[i] << "  ";
    }
    cout << endl;

    // Free the allocated memory
    delete[] Fibonacci;

    return 0;
}
