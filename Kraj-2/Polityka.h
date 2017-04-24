#pragma once
#include <iostream>
#include <fstream>

using std::string;

///Klasa Polityka, podklasa klasy Kraj
class Polityka {
private:
	///pole przechwuj¹ce ilosc zadluzenia kraju
	int zadlozenie_kraju;
	///pole przechowuj¹ce nazwe przywodcy 
	string wodz_kraju;
public:
	///Konstruktor domyœlny
	Polityka();
	///Destruktor
	~Polityka();
	
	///Procedura wczytuj¹ca aktualny stan obiektu z pliku
	void wczytajStan(Polityka &param);
	///Procedura zapisuj¹ca aktualny stan obiektu do pliku
	void zapiszStan(Polityka &param);

	///Operator strumieniowy <<
	friend std::ostream& operator << (std::ostream &s, Polityka &polit);
	///Operator strumieniowy >>
	friend std::istream& operator >> (std::istream &s, Polityka &polit);
};