// mala_litera.cpp : Defines the entry point for the console application.
//Program wczytuje znak i sprawdza,czy podany znak jest małš literš?
//Wypisuje stosowny komunikat.
//

#include "stdafx.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	char znak;
	cout << "Podaj znak: ";
	cin >> znak;
	if (znak >= 'a' && znak <= 'z')
	{
		cout << "Podany znak jest malą literą\n";
	}
	else
		cout << "Podany znak nie jest malą literą\n";

	system("PAUSE");
	return EXIT_SUCCESS;
}