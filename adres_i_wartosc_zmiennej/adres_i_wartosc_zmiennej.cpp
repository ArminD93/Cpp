// adres_i_wartosc_zmiennej.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdlib>
#include <iostream>

using namespace std;


int main(int argc, char *argv[])
{
	int liczba1 = 5, liczba2 = 8;
	int *wskI;// deklarujemy, że wskI będzie wskażnikiem, czyli będzie wskazywało na adres jakiejś komórki pamięci
	wskI = &liczba1; /* &liczba1 to adres komórki pamięci pod która została zapisana wartość 5,
					 ten adres komórki został przypisany wskaźnikowi wskI*/
	cout << wskI << endl;//zostaje wypisany adres zmiennej liczba1
	cout << *wskI << endl;//zostaje wypisana wartość  zmiennej liczba1, bo *wskI przekazuje wartość zapisaną pod adresem
	wskI = &liczba2;// podobnie, adres gdzie została zapisana liczba2 czyli 8 zostaje przypisana do wskI
	cout << wskI << endl;//ponownie, zostaje wypisany adres zmiennej liczba2
	cout << *wskI << endl;//wypisana jest wartość zmiennej liczba2, to samo co wartość wskI, bo *wskI==liczba2
	*wskI = 17;//ale zmiennej *wskI możemy przypisać inną wartość, a tym samym liczbie2, bo było *wskI==liczba2
	cout << "liczba2=" << liczba2 << endl;// bo liczba2 jest równa *wskI
	system("PAUSE");
	return EXIT_SUCCESS;
}


