// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CMy
{
	int x;
	int y;
public:
	void stexy(int a, int b)
	{
		x = a;
		y = b;
	}
	void display()
	{
		cout << "x=" << x << "y=" << y;

	}
};

int main()
{
	CMy ocpy;
	ocpy.stexy(100, 200);
	ocpy.display();
    return 0;
}

