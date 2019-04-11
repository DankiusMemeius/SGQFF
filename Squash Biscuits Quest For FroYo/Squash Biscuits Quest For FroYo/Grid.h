#pragma once
#include <Windows.h>
#include <vector>

using namespace std;

class Grid {
private:

	COORD start = {0,0};

	DWORD count;
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	HANDLE hStdOut;
	CONSOLE_CURSOR_INFO cursInfo;
public:
	vector<vector<char>> gridd;

	Grid(int x, int y);
	~Grid();

	void render();
};

