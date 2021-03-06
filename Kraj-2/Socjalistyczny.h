#pragma once
#include "Kraj.h"

///Klasa Socjalistyczny, pochodna klasy Kraj
class Socjalistyczny : public Kraj {
private:
	///pole przechowujące liczbe osob zeslanych do prac w kamieniolomach
	int ilosc_zeslancow;
public:
	///Kontruktor domyślny
	Socjalistyczny();
	///Destruktor
	~Socjalistyczny();
	///Procedura wirtualna, zmienia parametr obiektu
	void zmienZmienna(int nowa_wartosc);
	///Procedura zapisująca aktualny stan obiektu do pliku
	void zapiszStan(Socjalistyczny &kraj);
	///Procedura wczytująca aktualny stan obiektu z pliku
	void wczytajStan(Socjalistyczny &kraj);
	///Procedura wirtualna wyświetlająca aktualny stan obietku
	void wyswietlStan();

	///Operator strumieniowy <<
	friend std::ostream& operator << (std::ostream &s, Socjalistyczny &socjalistyczny);
	///Operator strumieniowy >>
	friend std::istream& operator >> (std::istream &s, Socjalistyczny &socjalistyczny);
};