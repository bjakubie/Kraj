#include <iostream>
#include <string>
#include <fstream>
#include "Terytorium.h"

using namespace std;

Terytorium::Terytorium()
{
/*#ifdef DEBUG  
	cout << "Wywolano konstruktor Terytorium" << endl;
#endif*/
	obszar = 312679;
	liczba_mieszkancow = 38484;
	liczba_miast = 16;
}

void Terytorium::wyswietlStan()
{
	cout << "Obszar: " << obszar << endl;
	cout << "Liczba mieszkancow: " << liczba_mieszkancow << endl;
	cout << "Liczba miast: " << liczba_miast << endl;
}

void Terytorium::zwiekszLiczbeMieszkancow(int nowy_poziom)
{
	liczba_mieszkancow = nowy_poziom;
}

void Terytorium::zmniejszObszar()
{
	if (obszar >= 400000)
		obszar = obszar - 200;
}

///Zdefiniowany operator strumieniowy
std::ostream& operator << (std::ostream &s, Terytorium &teryt){
	s << teryt.obszar << endl << teryt.liczba_mieszkancow << endl << teryt.liczba_miast;
	return s;
}

///Zdefiniowany operator strumieniowy
std::istream& operator >> (std::istream& s, Terytorium &teryt){
	s >> teryt.obszar >> teryt.liczba_mieszkancow >> teryt.liczba_miast;
	return s;
}

//destruktor
Terytorium::~Terytorium()
{
/*#ifdef _DEBUG
	cout << "Wywolano destruktor ~Terytorium" << endl;
#endif*/
}