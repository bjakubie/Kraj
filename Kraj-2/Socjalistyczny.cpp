#include <iostream>
#include <string>
#include <fstream>
#include "Socjalistyczny.h"

using namespace std;

string nazwa_pliku_s = "Socjalistyczny.txt"; ///<Nazwa pliku do zapisu stanu obiektu

Socjalistyczny::Socjalistyczny()
{
#ifdef _DEBUG  
	cout << "Wywolano domyslny konstruktor Socjalistyczny" << endl;
#endif
	nazwa = "Socjalistyczny";
	ilosc_zeslancow = 15423;
	liczba_obiektow++;
}

void Socjalistyczny::zmienZmienna(int nowa_wartosc){
	ilosc_zeslancow = nowa_wartosc;
}

void Socjalistyczny::zapiszStan(Socjalistyczny &kraj){
#ifdef _DEBUG  
	cout << "Zapisano stan obiektu klasy Socjalistyczny" << endl;
#endif
	ofstream plik(nazwa_pliku_s);
	plik << kraj;
	plik.close();
}

void Socjalistyczny::wczytajStan(Socjalistyczny &kraj){
#ifdef _DEBUG  
	cout << "Wczytano stan obiektu klasy Socjalistyczny" << endl;
#endif
	ifstream plik(nazwa_pliku_s);
	plik >> kraj;
	plik.close();
}

void Socjalistyczny::wyswietlStan()
{
	cout << "Nazwa: " << nazwa << endl << "Imie Zalozyciela: " << imie_zalozyciela << endl << "Liczba Sasiadow: " << liczba_sasiadow << endl << "Ilosc osob zeslanych do prac w kamieniolomach: " << ilosc_zeslancow << endl;
}

///Zdefiniowany operator strumieniowy
std::ostream& operator << (std::ostream &s, Socjalistyczny &socjalistyczny){
	s << socjalistyczny.nazwa << endl << socjalistyczny.imie_zalozyciela << endl << socjalistyczny.liczba_sasiadow << endl << socjalistyczny.ilosc_zeslancow;
	return s;
}

///Zdefiniowany operator strumieniowy
std::istream& operator >> (std::istream& s, Socjalistyczny &socjalistyczny){
	s >> socjalistyczny.nazwa >> socjalistyczny.imie_zalozyciela >> socjalistyczny.liczba_sasiadow >> socjalistyczny.ilosc_zeslancow;
	return s;
}

Socjalistyczny::~Socjalistyczny()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor ~Socjalistyczny" << endl;
#endif
	--liczba_obiektow;
}