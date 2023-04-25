#include <iostream>
using namespace std;

//#define TASK_0
//#define TASK_1
//#define TASK_2
//#define TASK_3
//#define TASK_4
#define TASK_5
void main()
{
	setlocale(LC_ALL, "Rus");
#ifdef TASK_0
	int h; cout << "¬ведите высоту фигуры "; cin >> h;
	int l; cout << "¬ведите длину фигуры "; cin >> l;
	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= l; j++)
		{
			cout << '*';
		}
		cout << endl;
	}
#endif
#ifdef TASK_1
	int h; cout << "¬ведите высоту фигуры "; cin >> h;
	for (int i = 1; i <= h; i++)
	{

		for (int j = 1; j <= i; j++)
		{
			cout << '*';
		}
		cout << endl;
	}
#endif
#ifdef TASK_2
	int h; cout << "¬ведите высоту фигуры "; cin >> h;
	for (int i = h; i >= 1; i--)
	{

		for (int j = 1; j <= i ; j++)
		{
			cout << '*';
		}
		cout << endl;
	}
#endif
#ifdef TASK_3
	int h; cout << "¬ведите высоту фигуры "; cin >> h;
	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= h; j++)
		{
			if (j < i)
			{
				cout << ' ';
			}
			else
			{
				cout << '*';
			}
		}
		cout << endl;
	}
#endif
#ifdef TASK_4
	int h; cout << "¬ведите высоту фигуры "; cin >> h;
	for (int i = h; i >= 1; i--)
	{
		for (int j = 1; j <= h; j++)
		{
			if (j < i)
			{
				cout << ' ';
			}
			else 
			{
				cout << '*';
			}
		}
		cout << endl ;
	}
#endif
	int h; cout << "¬ведите высоту фигуры "; cin >> h;
	for (int i = 0; i < h; i++)
	{
		for (int j = i; j <= h; j++)cout << " ";
		for (int j = 0; j <= i; j++)cout << "*";
		cout << endl;
	}
	
}