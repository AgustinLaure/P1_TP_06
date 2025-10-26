#include "ConsoleHandle.h"

#include <Windows.h>

namespace consoleHandle
{
	void gotoxy(int x, int y)
	{
		HANDLE con;
		con = GetStdHandle(STD_OUTPUT_HANDLE);

		COORD coord;

		coord.X = x;
		coord.Y = y;

		SetConsoleCursorPosition(con, coord);
	}

	void print(int x, int y, string text)
	{
		gotoxy(x, y);

		cout << text;
	}

	void print(int x, int y, char text)
	{
		gotoxy(x, y);

		cout << text;
	}
}