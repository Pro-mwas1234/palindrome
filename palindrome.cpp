#include <iostream>
#include <string>


int main(int argc, char const *argv[])
{
	
	std::string word;

	int length, palindrome = 1;

	std::cout << "Enter a word: ";
	std::cin >> word;
	std::endl;

	length = word.length();

	for (int i = 0; i < length / 2; i++) {

		if (word[i] != word[length - 1 - i]){

			palindrome = 0;
			break;
		}
	}
	if (palindrome == 1) {
		std::cout << word << " is a palindrome." << std::endl;
	} else {
		std::cout << word << " is not a palindrome." << std::endl;
	}

	return 0;
}