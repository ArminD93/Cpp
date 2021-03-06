// zadania.cpp : Defines the entry point for the console application.
//  kazde z zadan jest jako osobna funkcja,
// funkcje sa wywolywane w funkcji main po wybraniu numeru zadania
//

#include "stdafx.h"
#include<iostream>
#include "time.h"
using namespace std;


void zad1();
void zad2();
void zad3();




int main()
{
	int wybor = 1;

	while (wybor != 0) //dopoki uzytkownik nie poda 0
	{
		cout << "Nr zadania z pracy domowej 1-3 (0 aby zakonczyc): ";
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
		}
	}
	cout << "KONIEC\n";
	system("pause");
    return 0;
}


void zad1()
//Program prosi o podanie liczby parzystej,
//tak długo aż zostanie podana prawidłowa liczba (czyli liczba parzysta);
{
	int liczba = 1;
	do
	{
		cout << "Podaj liczbe parzysta: ";
		cin >> liczba;
		if (liczba % 2 == 0)
			cout << "Liczba parzysta\n";
		else
			cout << "Liczba nieparzysta\n";
	} while (liczba % 2 != 0);
}

void zad2()
// prosi o podanie liczby z przedziału <10, 20>
//tak długo aż zostanie podana prawidłowa liczba.
{
	int liczba = 0;
	while (liczba < 10 || liczba > 20)
	{
		cout << "Podaj liczbe z zakresu <10, 20>: ";
		cin >> liczba;
	}
}

void zad3()
//Program losuje liczby całkowite z <0, 5> tak długo, aż wylosuje 5 razy liczbę 2.
{
	srand(time(NULL)); // to jest zainicjowanie generatora liczb pseudolosowych

	int liczba;
	int	counter = 0; //licznik zliczajacy wylosowanie pod rzad kolejnej 2

	cout << "Program losuje liczby z zakresu <0,5> dopoki nie wylosuje liczby 2 piec razy pod rzad\n";
	system("PAUSE"); // czekanie na ENTER zeby uzytkownik mogl przeczytac wiadomosc

	while (counter < 5)
	{
		liczba = rand() % 6;
		// funkcja rand() zwraca liczbe calkowita z pewnego duzego zakresu,
		// zeby dostac liczbe z zakresu np od 0 - 5, 
		// obliczana jest reszta z dzielenia ( % ) tej duzej liczby np przez 6 - taka reszta z dzielenia ma wartosci od 0 do 5. - dlatego pisze sie rand() % 6
		if (liczba == 2)
			counter++; //gdy wylosowana jest 2
		else
			counter = 0;
		cout << liczba << "\n";
	}

}

