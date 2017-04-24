#pragma once
#include <iostream>
#include <fstream>
#include "Polityka.h"
#include "Terytorium.h"
#include "Czesc_Swiata.h"

///Klasa Kraj, pochodna klasy Czesc_Swiata
class Kraj : public Czesc_Swiata {
private:
	///Podklasa klasy Kraj
	Polityka polityka;
	///Podklasa klasy Kraj
	Terytorium *terytorium;
protected:
	///zmienna przechowuj¹ca nazwe Kraju
	string nazwa;
	///zmienna przechowuj¹ca imie zalozyciela kraju
	string imie_zalozyciela;
	///zmienna przechowuj¹ca liczbe sasiednich krajow
	int liczba_sasiadow;
public:
	///Zmienna statyczna, przechowuje liczbe utworzonych obiektow
	static int liczba_obiektow;
	///Kontruktor domyœlny
	Kraj();
	///Kontruktor
	Kraj(int liczba_s);
	///Destruktor
	~Kraj();
	///Konstruktor kopiujacy
	Kraj(const Kraj &kraj);

	///Procedura modyfikuj¹ca pole imie zalozyciela
	/**Jako parametr podawany jest nowy imie
	\param nowe_imie jest nowym imieniem
	\return Funkcja nic nie zwraca*/
	void zmienImieZalozyciela(string nowe_imie);

	///Procedura modyfikuj¹ca pole nazwa
	/**Jako parametr podawany jest nowa nazwa
	\param nowa_nazwa jest now¹ nazwa
	\return Funkcja nic nie zwraca*/
	void zmienNazwe(string nowa_nazwa);

	///Procedura modyfikuj¹ca pole ocena
	/**Jako parametr podawany jest nowa liczba sasiadow
	\param nowa_liczba_sasiadow jest nowa liczba sasiadow
	\return Funkcja nic nie zwraca*/
	void zmienLiczbeSasiadow(string nowa_liczba_sasiadow);

	///Procedura wirtualna wyœwietlaj¹ca aktualny stan obietku
	void pokazStan();
	///Procedura wyswielaj¹ca iloœæ stworzonych obiektów
	void wyswietlIloscObiektow();
	///Procedura wyœwietlaj¹ca nazwe obiektu
	void wyswietlNazwe();

	///Procedura zapisuj¹ca aktualny stan obiektu
	void zapiszStan(Kraj &kraj);

	///Procedura wczytuj¹ca aktualny stan obiektu
	void wczytajStan(Kraj &kraj);

	///Procedura wirtualna zmieniaj¹ca wybrana zmienna obiektu
	void zmienZmienna(int nowa_wartosc);

	/*///Operator ==
	bool operator == (const Kraj &kraj);
	///Operator <
	bool operator < (const Kraj &kraj);
	///Operator >
	bool operator > (const Kraj &kraj);
	///Operator =
	Kraj& operator = (const Kraj &kraj);
	///Operator +=
	Kraj& operator += (const Kraj &kraj);
	///Operator -=
	Kraj& operator -= (const Kraj &kraj);
	///Operator *=
	Kraj& operator *= (const Kraj &kraj);
	///Operator ++
	Kraj& operator ++ (int);
	///Operator --
	Kraj& operator -- (int);*/
	
	///Operator strumieniowy <<
	friend std::ostream& operator << (std::ostream &s, Kraj &kraj);
	///Operator strumieniowy >>
	friend std::istream& operator >> (std::istream &s, Kraj &kraj);
};