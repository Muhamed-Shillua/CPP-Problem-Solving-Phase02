#include <iostream>
#include <string>
using namespace std;

/*
    Program Name   : First Letter Extractor
    Description    : This program reads a line of text from the user, then prints the first letter of each word in that line.
    Solution       :
        - User Input: A complete line of text (string) entered by the user.
        - Logic: Loop through each character. If it's the start of a word (first letter after space), print it.
        - Output: A series of characters representing the first letter of each word, separated by spaces.
*/

string ReadString()
{
    string S1;
    cout << "Please Enter Your String: ";
    getline(cin, S1); // reads full line including spaces
    return S1;
}

void PrintFirstLetter(string S1)
{
    bool isStartOfWord = true;

    for (int i = 0; i < S1.length(); i++)
    {
        if (S1[i] != ' ' && isStartOfWord)
        {
            cout << S1[i] << " ";
            isStartOfWord = false;
        }
        else if (S1[i] == ' ')
        {
            isStartOfWord = true;
        }
    }
}


int main()
{
    PrintFirstLetter(ReadString());

    return 0;
}
