// wczytanie_znaku.cpp : Defines the entry point for the console application.
//Program prosi o wczytanie znaku tak długo, 
//aż podana zostanie mała litera.
//

#include "stdafx.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	char znak;
	do
	{
		cout << "Podaj mala litere! \n";
		cin >> znak;
	} while (!(znak >= 'a' && znak <= 'z'));

	cout << "Dziekuje! \n";
	system("PAUSE");
	return EXIT_SUCCESS;
}
