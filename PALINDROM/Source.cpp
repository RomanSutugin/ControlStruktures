#include<iostream>
using namespace std;
//#define HOME
void main()
{
	setlocale(LC_ALL, "Rus");
#ifdef HOME
	int a; 
	cout <<"������� �����: "; cin >> a;
	int a_1 = a;
	int b = 0;
	while (a_1)
	{
		b = b * 10 + a_1 % 10;
		a_1 /= 10;
	}
	if (a == b)
	{
		cout << "��� ���������"
	}
	else
	{
		cout << "��� �� ���������"
	}
#endif
	int number; //����� � ����������
	cout << "������� �����: "; cin >> number;
	int buffer = number;
	int reverse=0;
	while (buffer > 0)
	{
						//�������� ����� �� 1 ������ �����
		reverse += buffer % 10;		// ��������� ��������� ������
		buffer /= 10;				// ������� ���������� ������ �� ��������� �����	
	}
		cout << number << endl;
		cout << buffer << endl;
		cout << number << endl;
}