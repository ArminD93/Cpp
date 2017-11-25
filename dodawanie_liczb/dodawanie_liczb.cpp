// dodawanie_liczb.cpp : Defines the entry point for the console application.
//sprawdza umiejętność dodawania liczb z <0,10>.
//1.Wczytać ilo?ć powtórzeń.
//2.Losowanie liczb
//3.Pytanie o wynik
//4.Sprawdzenie, czy wynik poprawny
//5.Liczenie poprawnych odpowiedzi
//6.Powrót do punktu 1
//

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <ctime>


using namespace std;

int main(int argc, char *argv[])
{
	int powt, liczba1, liczba2, wynik, dobrych, koniec;
	char odp;
	koniec = 0;

	do {
		cout << "Podaj ilosc powtorzen: ";
		cin >> powt;
		srand(time(NULL));
		dobrych = 0;


		for (int i = 0; i<powt; i++)
		{
			liczba1 = rand() % 11;
			liczba2 = rand() % 11;
			cout << liczba1 << " + " << liczba2 << " = ";
			cin >> wynik;
			if (liczba1 + liczba2 == wynik)
			{
				dobrych++;
				cout << "Dobrze \n";
			}

			else
				cout << "Kiepsko \n";
		}
		cout << "Dorych odpowiedzi  " << dobrych << "\n";
		cout << "Czy chcesz zakończyć program? Wpisz T lub N i nacisnij Enter \n";
		cin >> odp;

		if ((odp == 'T') || (odp == 't'))
			koniec = 1;
		else
			koniec = 0;

	} while (!koniec);

	system("PAUSE");
	return EXIT_SUCCESS;
}

