#include <iostream>
using namespace std;
//#define TASK_1
//#define TASK_2
//#define TASK_3
//#define TASK_4
//#define TASK_5
void main()
{
	setlocale(LC_ALL, "Rus");
#ifdef TASK_1
	int n = 10;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((i * j) < 10)
			{
				cout << i << "*" << j << " = " << " " << (i * j) << endl;
			}
			else
			{
				cout << i << "*" << j << " = " << (i * j) << endl;
			}
		}
		cout << endl;
	}
#endif
#ifdef TASK_2
	int number = 10;
	for (int i = 0; i < number; i++)
	{
		cout << i <<'\t';
	}
	cout << endl;
	for (int i = 1; i < number; i++)
	{
		cout << i << '\t';
		for (int j = 1; j < number; j++)
		{
			cout << i * j << '\t';
		}
		cout << endl;
	}
#endif
#ifdef TASK_3
	int limit;
	int a = 0;
	int b = 1;
	cout << "¬ведите число, до которого нужно вывести р€д ‘ибоначчи: "; cin >> limit ;
	for (int i = 0; i < limit; i++)
	{
		i = a + b;
		a = b;
		b = i;
			cout << a << '\t';
	}
#endif
#ifdef TASK_4
	int limit;
	int a = 0;
	int b = 1;
	cout << "¬ведите, сколько чисел р€да ‘ибоначчи нужно вывести: "; cin >> limit;
	for (int i = 0; i < limit; i++)
	{
		int c = a + b;
		a = b;
		b = c;
		cout << a << '\t';
	}
#endif
#ifdef TASK_5
	int limit;
	//int a = 2;
	cout << "¬ведите, до какого предела нужно вывести простые числа: "; cin >> limit;
	cout << '1' << '\t'<< '2' << '\t'<< 3 << '\t'<< 5 << '\t';
	for (int i = 2; i < limit; i++)
	{
		if (((i % 2) != 0) && ((i % 3) != 0) && ((i % 5) != 0))
		{
			cout << i << '\t';
		}
	}
#endif
}