// kod_pin.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <string>




using namespace std;

int czyPIN(char*); //deklaracja

int main()
{
	char pin[10];
	cout << "Podaj kod pin\n";
	cin >> pin;

	if (czyPIN(pin) == 1)
		cout << "PIN poprawny\n";
	else
		cout << "PIN jest niepoprawny!\n";
	system("PAUSE");
	return 0;
}

int czyPIN(char *PIN) //definicja
{
	int i = 0;
	do
	{
		for (int j = 0; j < 4; j++) //petla sprawdzajaca czy element nie jest rowny jednemu z innych elementow (patrzy na pierwsze cztery)
		{
			if (PIN[j] < 48 || PIN[j]>57) //cyfry 0-9 maja kody ASCII 48-57, jesli ktorys z pierwszych czterech elementow stringa zawiera znak nie bedacy cyfra, to petla sie skonczy.
			{
				cout << PIN[j]; /*tu trzeba zauwazyc, ze jesli podano PIN 3 znakowy (za krotki) to przy tym porownaniu,
								gdy w petli for j bedzie mialo wartosc 3 nastapi i tak odwolanie do czwartego elementu tablicy (o indeksie 3)
								ktory jest niezdefiniowany, czyli ma losowa wartosc. Ta losowa wartosc najprawdopodobniej nie bedzie
								cyfra (kod ASCII 48-57), wiec funkcja sie przerwie na tym kroku.*/
				cout << "UWAGA PIN musi skladac sie tylko z 4 cyfr!!\n";
				return 0;
			}

			if (PIN[j] == PIN[i] && i != j) /*jesli dwa rozne numery PINu sa takie same,funkcja tez sie skonczy z rezultatem 0(nieprawidlowy PIN)
											drugi warunek (po AND &&) jest po to, zeby nie porownywac elementu z samym soba*/
			{
				cout << "kazda cyfra musi byc wprowadzona tylko raz!!\n";
				return 0; //to nie jest dobry pin, wyjscie z funkcji
			}
		}
		i++;
	} while (PIN[i] != '\0'); //dopoki nie natrafi na koniec stringa
	if (i == 4) /*jesli powyzsza petla while doszla do konca i nie trafila dotad na zadny return, sa dwie mozliwosci
				- albo PIN mial poprawne znaki i byl dlugosci 4, albo mial poprawne znaki, ale byl za dlugi.*/
		return 1;
	cout << "PIN zlej dlugosci\n";
	return 0;	//jesli i pod koniec wykonania petli while nie mialo wartosci 4, to znaczy ze podana tablica miala mniej lub wiecej elementow, zostanie zwrocone return 0, czyli PIN nieprawidlowy.

}