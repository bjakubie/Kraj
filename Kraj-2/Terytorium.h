#pragma once
#include <fstream>
#include <iostream>

///Klasa Terytorium, podklasa klasy Kraj
class Terytorium {
private:
	///pole przechowuj�ce obszar
	int obszar;
	///pole przechowuj�ca liczbe mieszkancow
	int liczba_mieszkancow;
	///pole przechowuj�ca liczbe miast
	int liczba_miast;
public:
	///Kontruktor domy�lny
	Terytorium();
	///Destruktor
	~Terytorium();
	///Funkcja wy�wietlaj�ca aktualny stan obiektu
	void wyswietlStan();
	///Funkcja zmieniaj�ca obszar
	void zmniejszObszar();
	///Funkcja zmieniaj�ca liczbe mieszkancow
	void zwiekszLiczbeMieszkancow(int nowa_liczba_mieszkancow);

	///Operator strumieniowy <<
	friend std::ostream& operator << (std::ostream &s, Terytorium &teryt);
	///Operator strumieniowy >>
	friend std::istream& operator >> (std::istream &s, Terytorium &teryt);
};