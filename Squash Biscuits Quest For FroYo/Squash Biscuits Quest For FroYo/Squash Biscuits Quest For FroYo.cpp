#include "pch.h"
#include <iostream>
#include "windows.h"
#include "Grid.h"
#include "PlayerInput.h"

using namespace std;

int main() {
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	HANDLE hStdOut;
	COORD start = { 0,0 };

	hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(hStdOut, &csbi);

	int cWidth = csbi.srWindow.Right - csbi.srWindow.Left;
	int cHight = csbi.srWindow.Bottom - csbi.srWindow.Top;
	while (true) {
		GetConsoleScreenBufferInfo(hStdOut, &csbi);
		cWidth = csbi.srWindow.Right - csbi.srWindow.Left + 1;
		cHight = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;

		Grid playFeild(10,10);
		PlayerInput playIn(playFeild);

		playIn.checkForInput();
		//playFeild.render();
		
	
	}
}
