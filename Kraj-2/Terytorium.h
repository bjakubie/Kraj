#pragma once
#include <fstream>
#include <iostream>

///Klasa Terytorium, podklasa klasy Kraj
class Terytorium {
private:
	///pole przechowujące obszar
	int obszar;
	///pole przechowująca liczbe mieszkancow
	int liczba_mieszkancow;
	///pole przechowująca liczbe miast
	int liczba_miast;
public:
	///Kontruktor domyślny
	Terytorium();
	///Destruktor
	~Terytorium();
	///Funkcja wyświetlająca aktualny stan obiektu
	void wyswietlStan();
	///Funkcja zmieniająca obszar
	void zmniejszObszar();
	///Funkcja zmieniająca liczbe mieszkancow
	void zwiekszLiczbeMieszkancow(int nowa_liczba_mieszkancow);

	///Operator strumieniowy <<
	friend std::ostream& operator << (std::ostream &s, Terytorium &teryt);
	///Operator strumieniowy >>
	friend std::istream& operator >> (std::istream &s, Terytorium &teryt);
};