// pole_prost_int.cpp : Defines the entry point for the console application.
//funkcja pole(a,b)
//wczytuje wartości całkowite boków prostokąta i oblicza jego pole
//

#include "stdafx.h"
#include <cstdlib>
#include <iostream>

using namespace std;


int pole(int, int);//deklaracja

int pole(int x, int y)//definicja
{
	return x*y;
}


int main(int argc, char *argv[])
{
	int a, b;
	cout << "podaj bok a: ";
	cin >> a;
	cout << "podaj bok b: ";
	cin >> b;
	cout << "Pole prostokata wynosi:" << pole(a, b) << endl;

	system("PAUSE");
	return EXIT_SUCCESS;
}

