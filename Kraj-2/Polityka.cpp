#include <string>
#include <iostream>
#include <fstream>
#include "Polityka.h"

using namespace std;

string nazwa_pliku_p = "Polityka.txt"; //<Nazwa pliku do zapisu stanu obiektu

//konstruktor
Polityka::Polityka()
{
#ifdef DEBUG  
	cout << "Wywolano konstruktor Param_urzadzenia" << endl;
#endif
	zadlozenie_kraju = 838;
	wodz_kraju = "ja";
}

void Polityka::zapiszStan(Polityka &polit){
#ifdef _DEBUG  
	cout << "Zapisano stan obiektu klasy Polityka" << endl;
#endif
	ofstream plik(nazwa_pliku_p);
	plik << polit;
	plik.close();
}

void Polityka::wczytajStan(Polityka &polit){
#ifdef _DEBUG  
	cout << "Wczytano stan obiektu klasy Polityka" << endl;
#endif
	ifstream plik(nazwa_pliku_p);
	plik >> polit;
	plik.close();
}

///Zdefiniowany operator strumieniowy
std::ostream& operator << (std::ostream &s, Polityka &polit){
	s << polit.zadlozenie_kraju << endl << polit.wodz_kraju;
	return s;
}

///Zdefiniowany operator strumieniowy
std::istream& operator >> (std::istream& s, Polityka &polit){
	s >> polit.zadlozenie_kraju >> polit.wodz_kraju;
	return s;
}

//destruktor
Polityka::~Polityka()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor ~Polityka" << endl;
#endif	
}