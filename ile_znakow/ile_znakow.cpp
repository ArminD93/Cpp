// ile_znakow.cpp : Defines the entry point for the console application.
//Program wczytuje napis.
//Liczy ile jest w napisie małych liter, wielkich liter, cyfr.
//Wyświetla komunikat.
//

#include "stdafx.h"
#include <cstdlib>
#include <iostream>


using namespace std;

int main(int argc, char *argv[])
{

	char napis[20];
	int i = 0, male = 0, duze = 0, cyfry = 0;
	cout << "Podaj napis: ";
	cin >> napis;
	while (napis[i] != '\0')
	{
		if ((napis[i] >= 'a') && (napis[i] <= 'z'))
			male++;
		if ((napis[i] >= 'A') && (napis[i] <= 'Z'))
			duze++;
		if ((napis[i] >= '0') && (napis[i] <= '9'))
			cyfry++;
		i++;
	}
	cout << "Malych liter: " << male << endl;
	cout << "Wielkich liter: " << duze << endl;
	cout << "Cyfr: " << cyfry << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}
