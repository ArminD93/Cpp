// 5_liczb_calkowitych.cpp : Defines the entry point for the console application.
//wczytuje liczbe i wypisuje 5 kolejnych liczb oraz ich sume
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int main()
{
	int liczba;
	int suma = 0;
	cout << "Podaj liczbe: ";
	cin >> liczba;
	cout << "Suma pieciu kolejnych liczb ";

	for (int i = liczba; i<liczba + 5; i++) //dopisz kolejne liczby na wejscie i aktualizuj ich sume
	{
		suma = suma + i;
		cout << i << " ";
	}

	cout << "jest rowna " << suma << "\n"; // dokonczenie zdania i wyswietlenie sumy  
	system("pause");
    return 0;
}

