#include "MorseConversion.h"
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
	}

	// ----------------------------------------
	string MorseConversion::ConverseWordToMorse(string word)
	// ----------------------------------------
	{

	}
}
