// adres_i_wartosc_zmiennej.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdlib>
#include <iostream>

using namespace std;


int main(int argc, char *argv[])
{
	int liczba1 = 5, liczba2 = 8;
	int *wskI;
	cout << endl;
	wskI = &liczba1;
	cout << wskI << "  To jest adres zmiennej liczba1" << endl;//adres zmiennej liczba1
	cout << *wskI << "  To jest wartosc zmiennej liczba1" << endl;//warto?ć  zmiennej liczba1

	cout << endl;
	cout << endl;

	wskI = &liczba2;
	cout << wskI << "  To jest adres zmiennej liczba2" << endl;//adres zmiennej liczba2
	cout << *wskI << "  To jest wartosc zmiennej liczba2" << endl;//warto?ć zmiennej liczba2
	cout << endl;
	cout << endl;


	*wskI = 17;
	cout << "liczba2=" << liczba2 << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}

