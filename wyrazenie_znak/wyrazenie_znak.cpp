// wyrazenie_znak.cpp : Defines the entry point for the console application.
//Program wczytuje napis i znak.
//Sprawdza, czy znak jest w napisie
//Wyświetla komunikat.
//

#include "stdafx.h"
#include <cstdlib>
#include <iostream>

using namespace std;


int main(int argc, char *argv[])
{
	char napis[20], znak;
	int i = 0;
	cout << "Podaj napis: ";
	cin >> napis;
	cout << "Podaj znak: ";
	cin >> znak;
	while (napis[i] != '\0')
	{
		if (napis[i] == znak)
		{
			cout << "znak " << znak << " jest w napisie " << napis << endl;
			system("PAUSE");
			return 0;
		}
		i++;
	}
	cout << "znaku " << znak << " nie ma w napisie " << napis << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}
