#include<iostream>
#include"Box.h"
#include<conio.h>
using namespace std;
int main()
{
	CBox rec1;
	cout << "rec1" << endl;
	cout << "lenght=" << rec1.GetLength() << endl;
	cout << "width=" << rec1.GetWidth() << endl;
	cout << "height=" << rec1.GetHeight() << endl;
	cout << "Volume=" << rec1.Volume() << endl;
	cout << endl;
	CBox rec2;
	cout << "rec2" << endl;
	cout << "lenght=" << rec2.GetLength() << endl;
	cout << "width=" << rec2.GetWidth() << endl;
	cout << "height=" << rec2.GetHeight() << endl;
	cout << "Area=" << rec2.Area() << endl;
	cout << endl;

	CBox  rec3(3,6,7);
	cout << "rec3" << endl;
	cout << "lenght=" << rec3.GetLength() << endl;
	cout << "width=" << rec3.GetWidth() << endl;
	cout << "height=" << rec3.GetHeight() << endl;
	cout << "Girth=" << rec3.Girth1() << endl;
	cout << endl;

	CBox  rec4(6.7,4.8,1.2);
	cout << "rec4" << endl;
	cout << "lenght=" << rec4.GetLength() << endl;
	cout << "width=" << rec4.GetWidth() << endl;
	cout << "height=" << rec4.GetHeight() << endl;
	cout << "Girth=" << rec4.Girth2() << endl;
	cout << endl;

	CBox  rec5(1000,3000,4000);
	cout << "rec5" << endl;
	cout << "lenght=" << rec5.GetLength() << endl;
	cout << "width=" << rec5.GetWidth() << endl;
	cout << "height=" << rec5.GetHeight() << endl;
	cout << "Girth=" << rec5.Girth3() << endl;
	cout << endl;

	_getch();
	return 0;
}