#include <iostream>
using namespace std;
//#define TT
//#define UMNOZENIE
void main()
{
	setlocale(LC_ALL, "Rus");
#ifdef TT
	int n;
	cout << "������� ���������� �������� "; cin >> n;
	for (int i = 0;
		i < n;
		i++)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif
#ifdef UMNOZENIE
	int n = 10;
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			cout << i << "*" << j << " = " << (i*j) << endl;
		}
		cout << endl;

	}
#endif
	int n;
	cout << "������� ���������� �����: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << i << "\t";
		bool simple = true; //����������� ��� ����� �������, �� ��� ����� ���������
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break; //���� ������� �����������, ������ �� ��� ��������, ��� ����� ���������. 
				//�������� ����� break ��������� ������� �������� � ��� ����������� 
			}
		}
		if (simple)cout << i << "\t";
	}

}