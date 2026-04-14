#include <iostream>
using namespace std;

int main() {
	char character;
	for (int i = 65; i <= 90;i++) {
		char character = i;
		cout << "value: " << i << ", Character: " << character << "\n";
	}
	for (int i = 97; i <= 122; i++) {
		char character = i;
		cout << "value: " << i << ", Character: " << character << "\n";
	}
	return 0;
}