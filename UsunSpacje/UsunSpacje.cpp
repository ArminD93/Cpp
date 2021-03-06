// UsunSpacje.cpp : Defines the entry point for the console application.
//program, który z podanego łańcucha znaków usunie powtarzające się spacje występujące obok siebie.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <string>


using namespace std;
using std::cout;
using std::endl;


string UsunSpacje(string); //deklaracja funkcji

int main() //glowny program
{
	string str, str_bezSpacji;
	str = "String        z   podwojnymi    spacjami";
	str_bezSpacji = UsunSpacje(str);
	cout << str << "\n";//wypisany oryginalny tekst
	cout << str_bezSpacji << "\n";//tekst po poprawkach
	system("PAUSE");
	return 0;
}


string UsunSpacje(string s) //definicja funkcji
{
	string s_szukany = "  "; //string poszukiwany (2 spacje)
	int index = 0;
	// funkcja s.find zwraca index pod ktorym wystepuje wewnatrz stringa s ciag s_szukany
	// jesli nie znajdzie, to zwroci -1
	index = s.find(s_szukany); //znalezienie pierwszego wystapienia ciagu dwoch spacji
							   // w tym przykladzie index bedzie mialo po tym kroku wartosc 6 (pierwsze wystapienie podwojnej spacji)

	do
	{
		s.erase(index, 1); //pod indexem 6 zostanie usuniety 1 znaku (bo drugi argument wynosi 1) 
		index = s.find(s_szukany); // szukanie kolejnego wystapienia dwoch spacji, jesli nie znajdzie, index bedzie mialo wartosc -1
	} while (index != -1); // tu moze byc w niektórych przykladach uzywane string::npos, npos to zmienna zapisana jakby w bibliotece string, oznacza koniec stringa

	return s;
}

