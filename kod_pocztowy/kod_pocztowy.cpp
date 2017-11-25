// kod_pocztowy.cpp : Defines the entry point for the console application.
//Program wczytuje kod
//Sprawdza, czy kod wpisany ma dobry format liczbę cyfr
//Wyświetla odpowiedni komunikat
//

#include "stdafx.h"
#include <cstdlib>
#include <iostream>

using namespace std;


int main(int argc, char *argv[])
{
	char kod[7], znak;
	int i, ileZ = 0;
	cout << "Podaj kod pocztowy: ";
	cin >> kod;
	while (kod[ileZ] != '\0')ileZ++;//liczy iloąć znaków
	if (kod[2] != '-')
	{
		cout << "Zly format! \n";
		system("PAUSE");
		return 0;
	}
	if (ileZ != 6)
	{
		cout << "zla liczba znakow!\n";
		system("PAUSE");
		return 0;
	}
	for (i = 0;i<ileZ;i++)
	{
		if (i != 2 && (kod[i]<'0' || kod[i]>'9'))
		{
			cout << "Format nie jest prawidlowy, musza byc cyfry \n";
			system("PAUSE");
			return 0;
		}
	}
	cout << "Kod jest OK\n";
	system("PAUSE");
	return EXIT_SUCCESS;
}
