#include <iostream>
using namespace std;

/*
    Program Name   : Fibonacci Recursive Printer
    Description    : Prints Fibonacci sequence using recursion, without storing values in an array.
    Solution       :
        - Based on previous Fibonacci logic, but uses recursive calls instead of loops.
        - User Input: None (prints first 10 Fibonacci numbers directly).
        - The function receives:
            * Number: how many Fibonacci numbers to print.
            * Prev1 and Prev2: the two previous numbers to calculate the next one.
        - Each recursive call prints the next Fibonacci number and calls itself with updated values.
        - Stops when Number reaches zero.
*/

void PrintFibonacciUsingRecurssion(short Number, int Prev1, int
	Prev2)
{
	int FebNumber = 0;
	if (Number > 0)
	{
		FebNumber = Prev2 + Prev1;
		Prev2 = Prev1;
		Prev1 = FebNumber;
		cout << FebNumber << "  ";
		PrintFibonacciUsingRecurssion(Number - 1, Prev1, Prev2);
	}
}

int main()
{
	PrintFibonacciUsingRecurssion(10, 0, 1);
	

	return 0;
}