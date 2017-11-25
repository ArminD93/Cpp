// funkcje.cpp : Defines the entry point for the console application.
//  kazde z zadan jest jako osobna funkcja,
// funkcje sa wywolywane w funkcji main po wybraniu numeru zadania
//

#include "stdafx.h"
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

void zad2()
{
	double x, y;
	cout << "Podaj pierwsza liczbe: x = ";
	cin >> x;
	cout << "Podaj druga liczbe: y = ";
	cin >> y;

	if (x == y)
		cout << "Liczby sa rowne";
	else if (x>y)
		cout << "x jest wieksza\n";
	else
		cout << "y jest wieksza\n";
}

void zad3()
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
}

void zad4()
{
	int liczba;
	int suma = 0;
	cout << "Podaj liczbe: ";
	cin >> liczba;
	cout << "Suma pieciu kolejnych liczb ";

	for (int i = liczba; i<liczba + 5; i++) //dopisz kolejne liczby na wejscie i aktualizuj ich sume
	{
		suma = suma + i;
		cout << i << " ";
	}

	cout << "jest rowna " << suma << "\n"; // dokonczenie zdania i wyswietlenie sumy
}



int main()
{
	int wybor = 1;

	while (wybor != 0) //dopoki uzytkownik nie poda 0
	{
		cout << "Nr zadania z pracy domowej (0 aby zakonczyc): ";
		cin >> wybor;
		switch (wybor)
		{
		case 1:
			zad1();
			break;
		case 2:
			zad2();
			break;
		case 3:
			zad3();
			break;
		case 4:
			zad4();
			break;
		}
	}
	cout << "KONIEC\n";
	system("pause");
    return 0;
}
