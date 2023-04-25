#include<iostream>
using namespace std;
//#define HOME
void main()
{
	setlocale(LC_ALL, "Rus");
#ifdef HOME
	int a; 
	cout <<"Введите число: "; cin >> a;
	int a_1 = a;
	int b = 0;
	while (a_1)
	{
		b = b * 10 + a_1 % 10;
		a_1 /= 10;
	}
	if (a == b)
	{
		cout << "Это палиндром"
	}
	else
	{
		cout << "Это не палиндром"
	}
#endif
	int number; //число с клавиатуры
	cout << "Введите число: "; cin >> number;
	int buffer = number;
	int reverse=0;
	while (buffer > 0)
	{
						//сдвигаем число на 1 разряд влево
		reverse += buffer % 10;		// добавляем следующий разряд
		buffer /= 10;				// удаляем полученный разряд из исходного числа	
	}
		cout << number << endl;
		cout << buffer << endl;
		cout << number << endl;
}