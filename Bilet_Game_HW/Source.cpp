#include<iostream>
using namespace std;
#define BILET
#define GAME
void main()
{
	setlocale(LC_ALL, "Rus");
#ifdef BILET
	int bilet;
	cout << "¬ведите номер билета: "; cin >> bilet;
	int first_half = bilet / 1000;
	int second_half = bilet % 1000;
	int sum_first_half=first_half/
	if (first_half == second_half)
	{
		cout << "¬аш билет счастливый" << endl;
	}
	else
	{
		cout << "¬аш билет обычный" << endl;
	}
#endif
#ifdef GAME

#endif
}