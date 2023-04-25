#include<iostream>
#include<conio.h>
using namespace std;
//#define WHILE_1
void main()
{
	setlocale(LC_ALL, "");
#ifdef WHILE_1
	int i = 0;
	int n;
	cout << "Введите количество итераций: "; cin >> n;
	while (i < n)
	{
		cout << i << "Loops" << endl;
		i++;
	}
#endif
	char key;
	do
	{
		key = _getch ();
		cout << (int)key << "\t" << key << endl;
	} while (true);
}