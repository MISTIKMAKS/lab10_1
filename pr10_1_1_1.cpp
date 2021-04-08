#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int CountB(char letter) {
	int b = 0;
	if (letter == 'B') {
		b++;
		cout << "Found B" << endl;
	}
	return b;
}
int CountA(char letter) {
	int a = 0;
	if (letter == 'A') {
		a++;
		cout << "Found A" << endl;
	}
	return a;
}
int CountS(char letter) {
	int s = 0;
	if (letter == 'S') {
		s++;
		cout << "Found S" << endl;
	}
	return s;
}
int CountI(char letter) {
	int i = 0;
	if (letter == 'I') {
		i++;
		cout << "Found I" << endl;
	}
	return i;
}
int CountC(char letter) {
	int c = 0;
	if (letter == 'C') {
		c++;
		cout << "Found C" << endl;
	}
	return c;
}

int main() {

	ofstream MyFile("t.txt");

	MyFile << "BASIC is BAD";

	MyFile.close();

	string myText;

	ifstream MyReadFile("t.txt");

	while (getline(MyReadFile, myText)) {
		cout << myText;
	}

	cout << endl;

	MyReadFile.close();

	char letter;

	ifstream MyReadFileChar("t.txt");

	while ((letter = MyReadFileChar.get()) > 0)
	{
		CountB(letter);
		CountA(letter);
		CountS(letter);
		CountI(letter);
		CountC(letter);
	}

	MyReadFileChar.close();

}