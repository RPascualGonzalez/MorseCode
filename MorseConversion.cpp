#include "MorseConversion.h"
#include <iostream>
#include <string>

using namespace std;

namespace NspMorseConversion
{
	// ----------------------------------------
	MorseConversion::MorseConversion()
	// ----------------------------------------
	{
		alphabetInMorse[0] = ".-";		//a
		alphabetInMorse[1] = "-...";	//b
		alphabetInMorse[2] = "-.-.";	//c
		alphabetInMorse[3] = "-..";		//d
		alphabetInMorse[4] = ".";		//e
		alphabetInMorse[5] = "..-.";	//f
		alphabetInMorse[6] = "--.";		//g
		alphabetInMorse[7] = "....";	//h
		alphabetInMorse[8] = "..";		//i
		alphabetInMorse[9] = ".---";	//j
		alphabetInMorse[10] = "-.-";	//k
		alphabetInMorse[11] = ".-..";	//l
		alphabetInMorse[12] = "--";		//m
		alphabetInMorse[13] = "-.";		//n
		alphabetInMorse[14] = "---";	//o
		alphabetInMorse[15] = ".--.";	//p
		alphabetInMorse[16] = "--.-";	//q
		alphabetInMorse[17] = ".-.";	//r
		alphabetInMorse[18] = "...";	//s
		alphabetInMorse[19] = "-";		//t
		alphabetInMorse[20] = "..-";	//u
		alphabetInMorse[21] = "...-";	//v
		alphabetInMorse[22] = ".--";	//w
		alphabetInMorse[23] = "-..-";	//x
		alphabetInMorse[24] = "-.--";	//y
		alphabetInMorse[25] = "--..";	//z

		for (int i = 0; i < 10; i++) {
			arrayActualLetters[i] = 'a';
		}

		isAllPossibilitiesCheacked = false;
	}

	// ----------------------------------------
	string MorseConversion::ConvertWordToMorse( string word )
	// ----------------------------------------
	{
		string result = "";

		wordWritten = word;
		wordLength = word.length();

		for (int letter = 0; letter < wordLength; letter++) 
		{
			int leterAsciiValues = word[ letter ]; 
			result = result + alphabetInMorse[leterAsciiValues - 'a'];
		}

		return result;
	}

	// ----------------------------------------
	void MorseConversion::ConvertMorseToWord(string morseWord, char arrayActualLetters[])
	// ----------------------------------------
	{
		string result = "";
		for (int letterWord = 0; letterWord < wordLength; letterWord++)
		{
			int letterMorse = (arrayActualLetters[letterWord] - 'a');
			int sizeLetterMorse = alphabetInMorse[letterMorse].length();
			if (morseWord.substr(0, sizeLetterMorse) == alphabetInMorse[letterMorse])
			{
				morseWord = morseWord.substr(sizeLetterMorse);
				char character = letterMorse + 'a';
				result = result + character;
			}
			else {
				break;
			}
		}
		if (morseWord.size() == 0)
		{
			vectorWords.push_back(result);
		}
	}

	// ----------------------------------------
	void MorseConversion::ConvertMorseToWords(string morseWord)
	// ----------------------------------------
	{
		string result;
		while (not isAllPossibilitiesCheacked) {
			ConvertMorseToWord(morseWord , arrayActualLetters);
			IsAllPossibilitiesCheacked(arrayActualLetters);
			UpdateArrayActualLetters(arrayActualLetters);
		}
		PrintVectorSolution();
	}

	// ----------------------------------------
	void MorseConversion::UpdateArrayActualLetters(char arrayActualLetters[])
	// ----------------------------------------
	{
		for (int letterWord = wordLength - 1; letterWord >= 0; letterWord--)
		{
			if (arrayActualLetters[letterWord] != 'z') {
				arrayActualLetters[letterWord] = arrayActualLetters[letterWord] + 1;
				break;
			}
			else {
				arrayActualLetters[letterWord] = 'a';
			}
		}
	}

	// ----------------------------------------
	void MorseConversion::IsAllPossibilitiesCheacked(char arrayActualLetters[])
	// ----------------------------------------
	{
		for (int letterWord = wordLength - 1; letterWord >= 0; letterWord--)
		{
			if (arrayActualLetters[letterWord] != 'z') {
				isAllPossibilitiesCheacked = false;
				break;
			}
			else {
				isAllPossibilitiesCheacked = true;
			}
		}
	}

	// ----------------------------------------
	void MorseConversion::PrintVectorSolution()
	// ----------------------------------------
	{
		cout << "possibles words: \n";
		for (string word : vectorWords) {
			cout << word << "\n";
		}
	}
}
