#include <iostream>
#include <conio.h>
#include "windows.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	bool f = false;
	int timer = 0;
	char sym;

	while (!f) {
		if (_kbhit()) {   
			sym = _getch();
			cout << sym << endl;
			switch (sym) {
			case 'w': case 'W': system("cls"); cout << "UP\n"; break;
			case 'a': case 'A': system("cls"); cout << "LEFT\n"; break;
			case 's': case 'S': system("cls"); cout << "DOWN\n"; break;
			case 'D': case 'd': system("cls"); cout << "RIGHT\n"; break;
			case 'q': case 'Q': f = true;
			}
		}
		Sleep(100);
		timer += 100;
		if (timer % 1000 == 0) {
			cout << ".\n";
			timer = 0;
		}
	}

	return 0;
}