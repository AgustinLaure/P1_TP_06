#pragma once

#include <iostream>

using namespace std;

namespace consoleHandle
{
	void gotoxy(int x, int y);
	void print(int x, int y, string text);
	void print(int x, int y, char text);
	void clearScreen();
	void pauseConsole();
}
