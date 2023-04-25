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
	cout << "Введите число: "; cin >> number;
	
	for (int i = 1; i <= number; i++)
	{
		result *= i;
	}
		cout <<"Результат = "<< result << endl;
#endif

#ifdef STEPEN
	double number1;
	int power;
	cout << "Введите число: "; cin >> number1;
	cout << "Введите, в какую степень возвести число: "; cin >> power;
	int result1 = number1;
	
	if (power == 1)
	{
		cout << "Результат = "<< number1 << endl;
	}
	else if (power == 0)
	{
		cout << "Результат = 1" << endl;
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
		cout << "Результат возведения в степень " << result1 << endl;
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