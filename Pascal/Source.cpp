#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int h;
	cout << "¬ведите высоту треугольника: "; cin >> h;
	int width = 3;
		for (int i = 0; i < h; i++)
		{
			cout.width(width);
			cout << " ";
		}
	cout << 1 << endl;
	int nf = 1;
	for (int n = 1; n <= h; n++)
	{
		for (int i = 0; i < h - n; i++)
		{
			cout.width(width);
			cout << " ";
		}
		cout << 1;
		nf *= n;
		int mf = 1;
		for (int m = 1; m <= n; m++)
		{
			mf *= m;
			int nmf = 1;
			for (int nm = 1; nm <= n - m; nm++)
			{
				nmf *= nm;
			}
			cout.width(width*2);
			cout << nf / (mf * nmf);
		}
		cout << endl;
	}
}