#include <iostream>
#include <string>
#include <fstream>
#include "Kraj.h"

using namespace std;

int Kraj::liczba_obiektow = 0;
string nazwa_pliku_k = "Kraj.txt"; ///<Nazwa pliku do zapisu stanu obiektu

//konstruktor
Kraj::Kraj()
{
#ifdef _DEBUG  
	cout << "Wywolano domyslny konstruktor Kraj" << endl;
#endif
	terytorium = NULL;
	nazwa = "Twoja_Wlasna_Nazwa";
	imie_zalozyciela = "Twoje_Wlasne_Imie";
	liczba_sasiadow = 3;
	liczba_obiektow++;
}

Kraj::Kraj(int liczba_s)
{
#ifdef _DEBUG  
	cout << "Wywolano konstruktor Kraj" << endl;
#endif
	liczba_obiektow++;
	liczba_sasiadow = liczba_s;
	nazwa = "Twoja_Wlasna_Nazwa";
	imie_zalozyciela = "Twoje_Wlasne_Imie";
}

Kraj::Kraj(const Kraj &kraj)
{
	nazwa = kraj.nazwa;
	polityka = kraj.polityka;
	terytorium = new Terytorium;
	terytorium = kraj.terytorium;
	imie_zalozyciela = kraj.imie_zalozyciela;
	nazwa = kraj.nazwa;
	liczba_sasiadow = kraj.liczba_sasiadow;
}

void Kraj::wyswietlIloscObiektow()
{
	cout << liczba_obiektow;
}

void Kraj::pokazStan()
{
	cout << "Nazwa Kraju: " << nazwa << endl << "Imie Zalozyciela: " << imie_zalozyciela << endl << "Liczba sasiadow: " << liczba_sasiadow << endl;
}
void Kraj::wyswietlNazwe()
{
	cout << "Nazwa Kraju: " << nazwa << endl;
} 

void Kraj::zmienImieZalozyciela(string nowe_imie)
{
	imie_zalozyciela = nowe_imie;
}

void Kraj::zmienNazwe(string nowa_nazwa)
{
	nazwa = nowa_nazwa;
}

void Kraj::zmienZmienna(int nowa_wartosc){
	liczba_sasiadow = nowa_wartosc;
}

void Kraj::zapiszStan(Kraj &kraj){
#ifdef _DEBUG  
	cout << "Zapisano stan obiektu klasy Kraj" << endl;
#endif
	ofstream plik(nazwa_pliku_k);
	plik << kraj;
	plik.close();
	kraj.polityka.zapiszStan(kraj.polityka);
}

void Kraj::wczytajStan(Kraj &kraj){
#ifdef _DEBUG  
	cout << "Wczytano stan obiektu klasy Kraj" << endl;
#endif
	ifstream plik(nazwa_pliku_k);
	plik >> kraj;
	plik.close();
	kraj.polityka.wczytajStan(kraj.polityka);
}

/*bool Kraj::operator == (const Kraj &kraj)
{
	if (kraj.liczba_sasiadow == liczba_sasiadow)
		return true;
	else
		return false;
}
bool Kraj::operator < (const Kraj &kraj)
{
	if (kraj.liczba_sasiadow < liczba_sasiadow)
		return false;
	else
		return true;
}
bool Kraj::operator >(const Kraj &kraj)
{
	if (kraj.liczba_sasiadow > liczba_sasiadow)
		return false;
	else
		return true;
}
Kraj & Kraj::operator = (const Kraj &kraj)
{
	liczba_sasiadow = kraj.liczba_sasiadow;
	nazwa = kraj.nazwa;
	imie_zalozyciela = kraj.imie_zalozyciela;

	return *this;
}
Kraj & Kraj::operator += (const Kraj &kraj)
{
	liczba_sasiadow += kraj.liczba_sasiadow;
	return *this;
}
Kraj & Kraj::operator -= (const Kraj &kraj)
{
	liczba_sasiadow -= kraj.liczba_sasiadow;
	return *this;
}
Kraj & Kraj::operator *= (const Kraj &kraj)
{
	liczba_sasiadow *= kraj.liczba_sasiadow;
	return *this;
}
Kraj & Kraj::operator ++ (int)
{
	liczba_sasiadow++;
	return *this;
}
Kraj & Kraj::operator -- (int)
{
	if (liczba_sasiadow != 0)
		liczba_sasiadow--;
	return *this;
}*/

///Zdefiniowany operator strumieniowy
std::ostream& operator << (std::ostream &s, Kraj &kraj){
	s << kraj.nazwa << endl << kraj.imie_zalozyciela << endl << kraj.liczba_sasiadow;
	return s;
}

///Zdefiniowany operator strumieniowy
std::istream& operator >> (std::istream& s, Kraj &kraj){
	s >> kraj.nazwa >> kraj.imie_zalozyciela >> kraj.liczba_sasiadow;
	return s;
}

//destruktor
Kraj::~Kraj()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor ~Kraj" << endl;
#endif
	--liczba_obiektow;
}