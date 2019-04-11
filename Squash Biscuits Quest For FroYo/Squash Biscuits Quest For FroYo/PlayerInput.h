#pragma once
#include <Windows.h>
#include "Grid.h"

using namespace std;

class PlayerInput {
private:
	Grid * PlayGrid;
	COORD playerpos = { 0,0 };
public:
	PlayerInput(Grid refGrid);
	~PlayerInput();

	void checkForInput();
};

