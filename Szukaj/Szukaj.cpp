// Szukaj.cpp : Defines the entry point for the console application.
/*Napisz funkcję:
bool szukaj( string tekst, string wyraz1, string wyraz2 )
Która zwraca wartość true tylko wtedy gdy oba wyrazy występują w zadanym łańcuchu tekstowym: */
//

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <string>




using namespace std;

bool szukaj(string, string, string);//deklaracja funkcji

int main(int argc, char *argv[])
{
	string napis, wyraz1, wyraz2;//deklaracja stringów
	cout << "Podaj napis:";
	getline(cin, napis);
	cout << "Podaj wyraz1: ";
	getline(cin, wyraz1);
	cout << "Podaj wyraz2: ";
	getline(cin, wyraz2);
	if (szukaj(napis, wyraz1, wyraz2))
		cout << "OK" << endl;
	else
		cout << "Nie" << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}

bool szukaj(string napis, string wyraz1, string wyraz2)//definicja funkcji
													   //zwraca warto?ć true tylko wtedy gdy oba wyrazy 
													   //występujš w napis
{
	if ((napis.find(wyraz1) != string::npos) && (napis.find(wyraz2) != string::npos))
	{
		return true;
	}
	return false;
}

