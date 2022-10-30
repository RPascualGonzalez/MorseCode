#pragma once
#include <string>

namespace NspMorseConversion
{
	class MorseConversion
	{

		public:
			MorseConversion();
			std::string ConverseWordToMorse(std::string word);

		private:
			std::string alphabetInMorse [ 26 ];
	};
}


