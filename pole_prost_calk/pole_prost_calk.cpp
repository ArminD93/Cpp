// pole_prost_calk.cpp : Defines the entry point for the console application.
//funkcja pole(a,b)
//wczytuje wartości rzeczywiste boków prostokąta i oblicza jego pole
//

#include "stdafx.h"
#include <cstdlib>
#include <iostream>

using namespace std;

float pole(float, float);//deklaracja

int main(int argc, char *argv[])
{
	float a, b;
	cout << "podaj bok a: ";
	cin >> a;
	cout << "podaj bok b: ";
	cin >> b;
	cout << "Pole prostokata wynosi:" << pole(a, b) << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}




float pole(float x, float y)//definicja
{
	return x*y;
}
