// czy_parzysta.cpp : Defines the entry point for the console application.
//wczytuje liczbe i sprawdza parzystosc
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int main()
{
	int liczba;
	cout << "Podaj liczbe: ";
	cin >> liczba;
	if (liczba % 2 == 0)
		cout << "Liczba parzysta\n";
	else
		cout << "Liczba nieparzysta\n";
	system("pause");
    return 0;
}

