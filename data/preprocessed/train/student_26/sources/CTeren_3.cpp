#include "CTeren_3.h"
#include <vector>
void SetColorrrr(int value)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), value);
}

void CTeren_3::draw()
{
	UserInterface::ConsoleOutput conOut = UserInterface::ConsoleOutput::getInstance();

	SetColorrrr(4);
	for (int y = 16;y < 96;y++)
	{
		conOut(6, y) << "*";
		conOut(11, y) << "*";
		conOut(16, y) << "*";
		conOut(21, y) << "*";
		conOut(26, y) << "*";
		conOut(31, y) << "*";
	}
	SetColorrrr(7);

	/*int a = 6;
	int y;
	for (int k = 0;k < 6;k++)
	{
		for (y = 16;y < 96;y++)
		{
			conOut(a, y) << "*";
		}
		a = a + 5;
	}

	int x_beg = 25;
	int punct = 7;
	for (int k = 0;k < 5;k++)
	{
		for (int k1 = 0;k1 < 8;k1++)
		{
			for (int y_beg = punct;y_beg < punct + 4;y_beg++)
			{
				conOut(y_beg, x_beg) << " ";
			}
			x_beg = x_beg + 10;
		}
		punct = punct + 5;
		x_beg = 25;
	}*/
}

CTeren_3::CTeren_3()
{
}


CTeren_3::~CTeren_3()
{
}