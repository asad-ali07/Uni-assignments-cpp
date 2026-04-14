#include <iostream>
using namespace std;
int main() {
	char character;

	cout << "Enter a character: ";
	cin >> character;

	if (character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U' || character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u')
	{
		cout << character << " is a vowel" << endl;
	}
	else if (character >= 'a' && character <= 'z' || character >= 'A' && character <= 'Z') {
		cout << character << " is a consonant" << endl;
	}
	else {
		cout << character << " is a digit" << endl;
	}
	return 0;
}
