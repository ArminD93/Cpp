// 10_liczb_parzystych.cpp : Defines the entry point for the console application.
//PROGRAM wczytuje liczbę całkowita
// i wypisuje 10 kolejnych liczb parzystych, większych od podanej liczby.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int i, liczba;
	cout << "Podaj liczbe calkowita: ";
	cin >> liczba;
	if (liczba % 2 == 0)
		liczba += 2;//liczba=liczba+2;
	else
		liczba++;
	//ustalona została pierwsza liczba do wyświetlania       
	for (i = 1;i <= 10;i++, liczba += 2)
	{
		cout << liczba << "\n";
	}
	system("pause");
    return 0;
}

