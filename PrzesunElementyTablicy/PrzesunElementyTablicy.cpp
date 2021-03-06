// PrzesunElementyTablicy.cpp : Defines the entry point for the console application.
//1. Program losuje do tablicy 10 liczb całkowitych z <0,100>
//2. Wypisuje wylosowane elementy
//3. Przesuwa elementy w tablicy wg zasady: 0->1, 1->1, 1->3....ostatni ->pierwszy
//4. Wypisuje elementy tablicy po przesunięciu
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>


int main()
{
	const int rozmiar = 10;
	int min, max, i, tab[rozmiar], pomoc;
	srand(time(NULL));
	for (i = 0;i<rozmiar;i++)
		tab[i] = rand() % 101;// wylosowanie kolejnych elementów tablicy
	for (i = 0;i<rozmiar;i++)
		printf("%4d", tab[i]);//wypisanie elementów tablicy
	printf("\n");  //moze byc cout<<"\n"

	pomoc = tab[rozmiar - 1]; // zapamiętanie ostatniego elementu tablicy, aby przenieść go na miejsce pierwsze
	for (i = rozmiar;i>0;i--)// Podmieniamy elementy tej samej tablicy od końca 
		tab[i] = tab[i - 1];//i ostatniemu elementowi przypisujemy wartość elementu przedostatniego itd
	tab[0] = pomoc; //elementowi pierwszemu przypisujemy wartość elementu ostatniego

	for (i = 0;i<rozmiar;i++)
		printf("%4d", tab[i]);//wypisujemy elementy nowej tablicy

	printf("\n");
	system("pause");

    return 0;
}

