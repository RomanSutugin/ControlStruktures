#include <iostream>
#include<conio.h>
using namespace std;
//#define FACTORIAL
//#define STEPEN
#define ASC
void main()
{
	setlocale(LC_ALL, "Rus");
#ifdef FACTORIAL
	int number;
	int result = 1;
	cout << "������� �����: "; cin >> number;
	
	for (int i = 1; i <= number; i++)
	{
		result *= i;
	}
		cout <<"��������� = "<< result << endl;
#endif

#ifdef STEPEN
	double number1;
	int power;
	cout << "������� �����: "; cin >> number1;
	cout << "�������, � ����� ������� �������� �����: "; cin >> power;
	int result1 = number1;
	
	if (power == 1)
	{
		cout << "��������� = "<< number1 << endl;
	}
	else if (power == 0)
	{
		cout << "��������� = 1" << endl;
	}
	if (power < 0)
	{
		number1 = 1 / number1;
		power = -power;
	}
	else
	{
		for (int i = 2; i <= power; i++)
		{
			result1 *= number1;
		}
		cout << "��������� ���������� � ������� " << result1 << endl;
	}
#endif

#ifdef ASC

	for (int i = 0; i<256; i++)
	{
		
		if (i % 16 == 0) cout << endl;
		cout << (char) " ";
	}
#endif

}