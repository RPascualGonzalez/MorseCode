#pragma once
#include <string>
#include <vector>

namespace NspMorseConversion
{
	class MorseConversion
	{

		public:
			MorseConversion();
			std::string ConvertWordToMorse( std::string word );

			void ConvertMorseToWord( std::string morseWord, char arrayActualLetters []);
			void ConvertMorseToWords(std::string morseWord);
			void UpdateArrayActualLetters(char arrayActualLetters[]);
			void IsAllPossibilitiesCheacked(char arrayActualLetters[]);
			void PrintVectorSolution();

		private:
			std::string alphabetInMorse [ 26 ];
			std::string wordWritten;
			std::vector<std::string> vectorWords;

			int wordLength;
			char arrayActualLetters[10];
			bool isAllPossibilitiesCheacked;

			
	};
}


