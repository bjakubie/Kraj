#pragma once
#include "Kraj.h"

///Klasa Socjalistyczny, pochodna klasy Kraj
class Socjalistyczny : public Kraj {
private:
	///pole przechowuj¹ce liczbe osob zeslanych do prac w kamieniolomach
	int ilosc_zeslancow;
public:
	///Kontruktor domyœlny
	Socjalistyczny();
	///Destruktor
	~Socjalistyczny();
	///Procedura wirtualna, zmienia parametr obiektu
	void zmienZmienna(int nowa_wartosc);
	///Procedura zapisuj¹ca aktualny stan obiektu do pliku
	void zapiszStan(Socjalistyczny &kraj);
	///Procedura wczytuj¹ca aktualny stan obiektu z pliku
	void wczytajStan(Socjalistyczny &kraj);
	///Procedura wirtualna wyœwietlaj¹ca aktualny stan obietku
	void wyswietlStan();

	///Operator strumieniowy <<
	friend std::ostream& operator << (std::ostream &s, Socjalistyczny &socjalistyczny);
	///Operator strumieniowy >>
	friend std::istream& operator >> (std::istream &s, Socjalistyczny &socjalistyczny);
};