
#include<iostream>
using namespace std;

void zad1()
{
	int liczba;
	cout << "Podaj liczbe: ";
	cin >> liczba;
	if (liczba % 2 == 0)
		cout << "Liczba parzysta\n";
	else
		cout << "Liczba nieparzysta\n";
}