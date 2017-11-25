#pragma once
void zad2()
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
}