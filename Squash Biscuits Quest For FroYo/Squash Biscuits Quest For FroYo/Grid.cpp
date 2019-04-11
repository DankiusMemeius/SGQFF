#include "pch.h"
#include "Grid.h"
#include <iostream>

Grid::Grid(int x, int y) {
	hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(hStdOut, &csbi);
	GetConsoleCursorInfo(hStdOut, &cursInfo);
	cursInfo.dwSize = 1;
	cursInfo.bVisible = false;
	SetConsoleCursorInfo(hStdOut, &cursInfo);

	gridd.resize(x);
	for (int i = 0; i < y; i++) {
		gridd[i].resize(y);
	}
	
	gridd[0][0] = 'c';
}

Grid::~Grid() {
}

void Grid::render() {
	char cur = ' ';
	COORD curPos = start;
	for (curPos.X; curPos.X < gridd.size(); curPos.X++) {
		for (curPos.Y = 0; curPos.Y < gridd[curPos.X].size(); curPos.Y++) {
			cout.flush();
			SetConsoleCursorPosition(hStdOut, curPos);
			cout << gridd[curPos.X][curPos.Y];
		}
	}
	
}
