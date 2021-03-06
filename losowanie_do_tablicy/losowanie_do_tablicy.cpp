// losowanie_do_tablicy.cpp : Defines the entry point for the console application.
//program losuje do tablicy 15 liczb całkowitych <0,5>
//wypisuje wylosowane elementy
//następnie prosi o podanie liczby i sprawdza, czy liczba jest jednym z elementów tablicy
//wypisuje komunikat: "tak jest" lub "nie nie ma takiego elementu"
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
	const int rozmiar = 15;

	int i, tab[rozmiar], liczba;
	srand(time(NULL));
	for (i = 0;i<rozmiar;i++)
		tab[i] = rand() % 6;//program losuje do tablicy 15 liczb całkowitych <0,5>

	for (i = 0;i<rozmiar;i++)
		printf("%4d", tab[i]);
	printf("\n");//wypisuje wylosowane elementy


	cout << "Podaj liczbe: ";
	cin >> liczba;//następnie prosi o podanie liczby i sprawdza, czy liczba jest jednym z elementów tablicy

	i = 0;
	while (i<rozmiar) {
		if (tab[i] == liczba)
			break; // petla jest przerwana, i ma wartosc indeksu pola zawierajacego szukana liczbe
		i++;
	}

	if (i == rozmiar) //jesli tablica nie zawiera szukanej liczby, to i dojdzie do wartosci 15
		cout << "nie nie ma takiego elementu\n";

	else cout << "Tak, jest " << "\n"; //dodatkowo podaje indeks na ktorym wystapila szukana liczba
									   // Uwaga: ta liczba może występować też w innych miejscach


	system("pause");
    return 0;
}

