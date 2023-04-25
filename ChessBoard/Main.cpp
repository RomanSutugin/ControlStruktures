#include <iostream>
using namespace std;

#define U_L_A (char)218
#define U_R_A (char)191
#define L_L_A (char)192
#define L_R_A (char)217
#define H_L	  (char)196
#define V_L	  (char)179
#define W_B	  (char)219
#define B_B	  "  "

//#define ASCII
//#define CHESS_1
#define CHESS_2
void main()
{
	setlocale(LC_ALL, "Rus");

#ifdef CHESS_1
	int n = 5;
	int size; cout << "Введите размер доски: "; cin >> size;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{

			for (int k = 0; k < size; k++)
			{
				for (int l = 0; l < size; l++)
				{
					if (i % 2 == k % 2)cout << "* ";
					else cout << "  ";
				}
			}cout << endl;
		}

	}
#endif
#ifdef ASCII
	cout << "Таблица ASCII-символов: \n";
	setlocale(LC_ALL, "C");

	for (int i = 128; i < 224; i++)
	{
		if (i % 16 == 0) cout << endl;
		cout << i << "\t" << (char)i << "\n";
	}
#endif // ASCII
	
#ifdef CHESS_2
	int n; cout << "Введите размер доски: "; cin >> n;
	setlocale(LC_ALL, "C");
	n++;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0)cout << U_L_A;
			else if (i == 0 && j == n)cout << U_R_A;
			else if (i == n && j == 0)cout << L_L_A;
			else if (i == n && j == n)cout << L_R_A;
			else if (i == 0 || i == n)cout << H_L << H_L;
			else if (j == 0 || j == n)cout << V_L;
			else
			{
				if (i % 2 == j % 2) cout << W_B << W_B;
				else cout << B_B;
			}
		}
			cout << endl;
	}
#endif // CHESS_2


}