// haslo.cpp : Defines the entry point for the console application.
//Program prosi o podanie hasła, po trzech błędnych próbach następuje blokada.
//

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	const string ok = "j23";
	int i = 1;
	string haslo;
	do
	{
		cout << "Podaj haslo: ";
		getline(cin, haslo);
		//system( "cls" ); czyści ekran
		if (haslo == ok)
		{
			cout << "Poprawne hasło" << endl;
			system("PAUSE");
			return EXIT_SUCCESS;
		}
		cout << "Bledne haslo!" << endl;
		i++;
	} while (i <= 3);
	cout << "Blokada po trzech probach!!!" << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}
