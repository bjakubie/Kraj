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
	///zmienna przechowująca nazwe Kraju
	string nazwa;
	///zmienna przechowująca imie zalozyciela kraju
	string imie_zalozyciela;
	///zmienna przechowująca liczbe sasiednich krajow
	int liczba_sasiadow;
public:
	///Zmienna statyczna, przechowuje liczbe utworzonych obiektow
	static int liczba_obiektow;
	///Kontruktor domyślny
	Kraj();
	///Kontruktor
	Kraj(int liczba_s);
	///Destruktor
	~Kraj();
	///Konstruktor kopiujacy
	Kraj(const Kraj &kraj);

	///Procedura modyfikująca pole imie zalozyciela
	/**Jako parametr podawany jest nowy imie
	\param nowe_imie jest nowym imieniem
	\return Funkcja nic nie zwraca*/
	void zmienImieZalozyciela(string nowe_imie);

	///Procedura modyfikująca pole nazwa
	/**Jako parametr podawany jest nowa nazwa
	\param nowa_nazwa jest nową nazwa
	\return Funkcja nic nie zwraca*/
	void zmienNazwe(string nowa_nazwa);

	///Procedura modyfikująca pole ocena
	/**Jako parametr podawany jest nowa liczba sasiadow
	\param nowa_liczba_sasiadow jest nowa liczba sasiadow
	\return Funkcja nic nie zwraca*/
	void zmienLiczbeSasiadow(string nowa_liczba_sasiadow);

	///Procedura wirtualna wyświetlająca aktualny stan obietku
	void pokazStan();
	///Procedura wyswielająca ilość stworzonych obiektów
	void wyswietlIloscObiektow();
	///Procedura wyświetlająca nazwe obiektu
	void wyswietlNazwe();

	///Procedura zapisująca aktualny stan obiektu
	void zapiszStan(Kraj &kraj);

	///Procedura wczytująca aktualny stan obiektu
	void wczytajStan(Kraj &kraj);

	///Procedura wirtualna zmieniająca wybrana zmienna obiektu
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