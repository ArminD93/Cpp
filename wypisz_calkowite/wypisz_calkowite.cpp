// wypisz_calkowite.cpp : Defines the entry point for the console application.
//wczytuje liczby i wypisuje liczby całkowite z przedzialu zamknietego
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int main()
{
	int liczba1, liczba2;

	cout << "Podaj pierwsza liczbe: liczba1 = ";
	cin >> liczba1;
	cout << "Podaj druga liczbe: liczba2 = ";
	cin >> liczba2;

	if (liczba1<liczba2)
	{
		for (int i = liczba1; i <= liczba2; i++)
			cout << i << " "; //wypisz licznik i jedna spacje przerwy
		cout << "\n"; //Przejdz do nastepnej linii
	}
	else
	{
		for (int i = liczba2; i <= liczba1; i++)
			cout << i << " "; //wypisz licznik i jedna spacje przerwy
		cout << "\n"; //Przejdz do nastepnej linii
	}
	system("pause");
    return 0;
}

