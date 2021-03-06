// adres_zmiennej.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>

using namespace std;

void dodaj2(int*, int*);// deklaracja funkcji

int main()
{
	int x1;
	int x2;

	cout << "Podaj x1: ";
	cin >> x1;
	cout << "Podaj x2: ";
	cin >> x2;
	dodaj2(&x1, &x2); //do funkcji przekazywane sa adresy w pamieci zmiennych x1 i x2 (jakby numery komórek pamieci), a nie wartosci
	cout << "x1 = " << x1 << "\nx2= " << x2 << endl;// x1 ma wartość zapisaną w komórce wskazanej przez wskaznik liczba1
	system("PAUSE");
	return 0;
}

void dodaj2(int *liczba1, int *liczba2) /*dzieki temu, ze funkcja dostaje adresy,
										moze operowac na oryginalnych wartosciach pol (zostana one nadpisane)
										tu *liczba1, oznacza, że liczba1 jest wskaznikiemadresu*/
{
	(*liczba1) += 2; /*tu *liczba1 oznacza wartość pobraną z adresu pamięci na którą wskazywała liczba1
					 musi byc w nawiasie, bo bez nawiasu zwiekszony bylby tylko wskaznik (liczba1),
					 czyli wskazywalby na nastepne pole w pamieci,
					 a nie bylaby zwiekszona wartosc  pola wsakzywanego na poczatku.*/
	(*liczba2) += 2;// czyli do wartości odczytanej z adresu liczba2 dodaje się wartość 2
}

