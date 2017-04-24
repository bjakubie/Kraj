#pragma once
#include <iostream>
#include <fstream>

using namespace std;

///Klasa abstrakcyjna
class Czesc_Swiata {
private:
	///pole przechowuj¹ce typ czesci swiata
	string typ_czesci_swiata;
public:
	///Kontruktor domyœlny
	Czesc_Swiata();
	///Destruktor wirtualny
	virtual ~Czesc_Swiata();
	///Procedura wirtualna
	virtual void zmienZmienna(int nowa_wartosc) = 0;
	///Procedura wirtualna
	virtual void pokazStan() = 0;

	///Operator strumieniowy <<
	friend std::ostream& operator << (std::ostream &s, Czesc_Swiata &czesc);
	///Operator strumieniowy >>
	friend std::istream& operator >> (std::istream &s, Czesc_Swiata &czesc);
};