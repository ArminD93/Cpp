// bankomat.cpp : Defines the entry point for the console application.
//Program podaje, w jakich nominałach można wypłacić kwotę.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>


using namespace std;
void nominal(int); //deklaracja funkcji

int main()//główny program
{
	int wyplata;
	cout << "Podaj kwote, ktora zamierzasz wyplacic:\n ";
	cout << endl;
	cin >> wyplata;
	cout << endl;
	cout << "Kwote " << wyplata << " mozna wyplacic w nastepujacych nominalach:\n ";
	cout << endl;

	nominal(wyplata);
	system("PAUSE");
	return 0;
}

void nominal(int kwota) //definicja funkcji
{
	int i = 0;
	int wynik[8] = { 0 };//deklaracja tablicy 8 elementowej o wartościach 0
	int tablica_nominalow[8] = { 200, 100, 50, 20, 10, 5, 2, 1 };//deklaracja tablicy z wartościami nominałów


	int reszta = kwota;//taki wygodny trik

	do
	{
		wynik[i] = reszta / tablica_nominalow[i];/*dzielenie całkowite, wynik zostanie zaaokraglony do liczby całk np dla i=0
												 mamy wynik[0]=423/200=2  */
		reszta = reszta % tablica_nominalow[i];//reszta=423%200=23
		i++;/*i=0+1=1 itd
			nastepna petla wynik[1]=23/100=0
			reszta=23%100=23
			i=1+1=2
			wynik[2]=23/50=0
			reszta=23%50=23
			i=2+1=3
			wynik[3]=23/20=1
			reszta=23%20=3
			i=3+1=4
			itd*/
	} while (reszta != 0);/*pętla działa dopuki reszta=0
						  sprawdz dla niewielkiej kwoty np 423*/

	printf("nominal   ilosc\n");
	printf("\n");
	for (int i = 0; i < 8; i++)
		printf("%3d         %d\n", tablica_nominalow[i], wynik[i]);						/*wypisuje 200  2
																						100  0
																						50  0
																						20  1
																						itd*/
}

