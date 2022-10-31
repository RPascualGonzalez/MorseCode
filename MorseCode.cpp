//      
//      Code a program that reads a word and convert it in Morse without spaces. After that determines the number of messages with the same number
//      of letters that it could represent.
//

#include <iostream>
#include <string>
#include "MorseConversion.h"

using namespace std;
using namespace NspMorseConversion;

string AskWord();

int main()
{
    MorseConversion Morse;

    string wordInMorse = Morse.ConvertWordToMorse( AskWord() ) ; 
    cout << "\n" << wordInMorse << "\n";
    Morse.ConvertMorseToWords( wordInMorse );
    
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
