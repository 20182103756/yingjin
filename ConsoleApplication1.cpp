// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
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

