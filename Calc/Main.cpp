#include<iostream>
using namespace std;
//#define CALC_IF
#define CALC_SWITCH
#define PALINDROM

void main()
{
	setlocale(LC_ALL, "");
#ifdef CALC_IF
	//cout << "Calc" << endl;
	double a, b; //�����, �������� � ����� 
	char s; //sign - ���� ��������
	cout << "������� ������� �������������� ���������: ";
	cin >> a >> s >> b;
	if (s == '+')
	{
		cout << a << '+' << b << '=' << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << '-' << b << '=' << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << '*' << b << '=' << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << '/' << b << '=' << a / b << endl;
	}
	else
	{
		cout << "Error: No operatoin" << endl;
	}
#endif

#ifdef CALC_SWITCH
	double a, b, c; //�����, �������� � ����� � ����
	char s; //sign - ���� ��������
	cout << "������� ������� �������������� ���������: ";
	cin >> a >> s >> b;
	switch (s)
	{
	case '+': c = a + b; break; 
	case '-': c = a - b; break; 
	case '*': c = a * b; break; 
	case '/': c = a / b; break;
	default:  cout << "Error: No operatoin" << endl;
	}
	cout <<"���������: " << c << endl;
#endif

#ifdef PALINDROM
	int d;
	cout << "������� �����: "; cin >> d;
	int d_1 = d;
	int e = 0;
	while (d_1)
	{
		e = e * 10 + d_1 % 10;
		d_1 /= 10;
	}
	if (d == e)
	{
		cout << "��� ���������";
	}
	else
	{
		cout << "��� �� ���������";
	}
#endif
}