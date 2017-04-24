#include <string>
#include <iostream>
#include <fstream>
#include "Demokratyczny.h"

using namespace std;
string nazwa_pliku_d = "Demokratyczny.txt"; ///<Nazwa pliku do zapisu stanu

Demokratyczny::Demokratyczny()
{
#ifdef _DEBUG  
	cout << "Wywolano domyslny konstruktor Demokratyczny" << endl;
#endif
	nazwa = "Demokratyczny";
	ilosc_poslow = 460;
	liczba_obiektow++;
}

void Demokratyczny::zmienZmienna(int nowa_wartosc){
#ifdef _DEBUG  
	cout << "Wywolano metode wirutalna w klasie Demokratyczny" << endl;
#endif
	ilosc_poslow = nowa_wartosc;
}

void Demokratyczny::zapiszStan(Demokratyczny &kraj){
#ifdef _DEBUG  
	cout << "Zapisano stan obiektu klasy Demokratyczny" << endl;
#endif
	ofstream plik(nazwa_pliku_d);
	plik << kraj;
	plik.close();
}

void Demokratyczny::wczytajStan(Demokratyczny &kraj){
#ifdef _DEBUG  
	cout << "Wczytano stan obiektu klasy Demokratyczny" << endl;
#endif
	ifstream plik(nazwa_pliku_d);
	plik >> kraj;
	plik.close();
}

void Demokratyczny::wyswietlStan()
{
	cout << "Nazwa: " << nazwa << endl << "Imie Zalozyciela: " << imie_zalozyciela << endl << "Liczba Sasiadow: " << liczba_sasiadow << endl << "Pojemnosc baterii: " << ilosc_poslow << endl;
}

///Zdefiniowany operator strumieniowy
std::ostream& operator << (std::ostream &s, Demokratyczny &demokratyczny){
	s << demokratyczny.nazwa << endl << demokratyczny.imie_zalozyciela << endl << demokratyczny.liczba_sasiadow << endl << demokratyczny.ilosc_poslow;
	return s;
}

///Zdefiniowany operator strumieniowy
std::istream& operator >> (std::istream& s, Demokratyczny &demokratyczny){
	s >> demokratyczny.nazwa >> demokratyczny.imie_zalozyciela >> demokratyczny.liczba_sasiadow >> demokratyczny.ilosc_poslow;
	return s;
}

Demokratyczny::~Demokratyczny()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor ~Demokratyczny" << endl;
#endif
	--liczba_obiektow;
}