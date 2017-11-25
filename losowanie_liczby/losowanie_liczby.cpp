// losowanie_liczby.cpp : Defines the entry point for the console application.
//Program losuje 10 000 razy liczby z <0,20>
//Liczy ile razy wylosował każdą liczbę 
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
	const int rozmiar = 21;

	int i, liczba;
	srand(time(NULL));

	int tab[rozmiar] = { 0 }; //wypelni cala tablice zerami


	for (i = 0;i <= 10000;i++)
	{
		liczba = rand() % 21;// losowanie od 0 do 20
		tab[liczba]++;// gdy wylosuje sie np 2 to do tab[2] zostanie dod 1 itd
	}

	for (i = 0;i<rozmiar;i++)
		printf("%d: wylosowano %4d razy\n", i, tab[i]);
	printf("\n");


	system("pause");
    return 0;
}

