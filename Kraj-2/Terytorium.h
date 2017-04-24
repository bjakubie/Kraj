#pragma once
#include <fstream>
#include <iostream>

///Klasa Terytorium, podklasa klasy Kraj
class Terytorium {
private:
	///pole przechowuj¹ce obszar
	int obszar;
	///pole przechowuj¹ca liczbe mieszkancow
	int liczba_mieszkancow;
	///pole przechowuj¹ca liczbe miast
	int liczba_miast;
public:
	///Kontruktor domyœlny
	Terytorium();
	///Destruktor
	~Terytorium();
	///Funkcja wyœwietlaj¹ca aktualny stan obiektu
	void wyswietlStan();
	///Funkcja zmieniaj¹ca obszar
	void zmniejszObszar();
	///Funkcja zmieniaj¹ca liczbe mieszkancow
	void zwiekszLiczbeMieszkancow(int nowa_liczba_mieszkancow);

	///Operator strumieniowy <<
	friend std::ostream& operator << (std::ostream &s, Terytorium &teryt);
	///Operator strumieniowy >>
	friend std::istream& operator >> (std::istream &s, Terytorium &teryt);
};