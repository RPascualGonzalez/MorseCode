//      We have been receiving congratulatory telegrams. The problem is that the telegrams have been sent in Morse code and the spaces
//      between the letters have been lost in transmission. If the spaces between the letters are missing, the messages can be ambiguous.
//
//      Code a program that reads in a message(between 1 and 10 letters inclusive) and determines the number of messages with the same number
//      of letters that it could represent.
//

#include <iostream>
#include <string>
#include "MorseConversion.h"

using namespace std;

string AskWord();
int main()
{
    AskWord();
}

// ----------------------------------------
string AskWord()
// ----------------------------------------
{
    string wordInserted;
    cout << "Write a word: \n";
    cin >> wordInserted;
    return wordInserted;
}
