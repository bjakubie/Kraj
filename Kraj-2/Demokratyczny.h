#pragma once
#include "Kraj.h"

///Klasa Demokratyczny, pochodna klasy Kraj
class Demokratyczny : public Kraj {
private:
	///pole przechowujące liczbe poslow
	int ilosc_poslow;
public:
	///Kontruktor domyślny
	Demokratyczny();
	///Destruktor
	~Demokratyczny();
	///Procedura wirtualna zmienia parametr obiektu
	void zmienZmienna(int nowa_wartosc);
	///Procedura zapisująca aktualny stan obiektu do pliku
	void zapiszStan(Demokratyczny &kraj);
	///Procedura wczytująca aktualny stan obiektu z pliku
	void wczytajStan(Demokratyczny &kraj);
	///Procedura wirtualna wyświetlająca aktualny stan obietku
	void wyswietlStan();

	///Operator strumieniowy <<
	friend std::ostream& operator << (std::ostream &s, Demokratyczny &demokratyczny);
	///Operator strumieniowy >>
	friend std::istream& operator >> (std::istream &s, Demokratyczny &demokratyczny);
};