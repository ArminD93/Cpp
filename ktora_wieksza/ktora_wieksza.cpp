// ktora_wieksza.cpp : Defines the entry point for the console application.
//wczytuje liczby i sprawdza, ktora wieksza.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int main()
{
	double x, y;
	cout << "Podaj pierwsza liczbe: x = ";
	cin >> x;
	cout << "Podaj druga liczbe: y = ";
	cin >> y;

	if (x == y)
		cout << "Liczby sa rowne";
	else if (x>y)
		cout << "x jest wieksza\n";
	else
		cout << "y jest wieksza\n";
	system("pause");
    return 0;
}

