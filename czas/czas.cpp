// czas.cpp : Defines the entry point for the console application.
//Program prosi o podanie liczby sekund i przedstawia w postaci minut/godzin
//

#include "stdafx.h"
#include <ctime>
#include <iostream>


using namespace std;

int liczba;

void czas(int);//deklaracja

void czas(int sekundy)//definicja
{
	int hour, min, sec, pomoc;

	hour = sekundy / 3600; //dzielenie calkowite przez ilosc sekund w godzinie (wynik to ilosc pelnych godzin)
	pomoc = sekundy % 3600; //zmienna pomocnicza przechowuje reszte (nadwyzke) sekund ponad te ktore skladaja sie na pelne godziny

	min = pomoc / 60; //ilosc minut (dzielenie calkowite)

	sec = pomoc % 60; //ilosc sekund to reszta z dzielenia

	printf("%d sekund to %.2d:%.2d:%.2d\n", sekundy, hour, min, sec); // dzieki %.2 kazda z liczb bedzie zajmowala dwa miejsca (dodane zero, jesli <10 ) 

																	  //czyli na przyklad 01:02:03 zamiast 1:2:3
}


int main()
{
	int liczba_sekund;
	cout << "podaj liczbe sekund\n";
	cin >> liczba_sekund;
	czas(liczba_sekund);

	system("PAUSE");
	return 0;
}

