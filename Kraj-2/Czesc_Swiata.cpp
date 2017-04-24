#include <iostream>
#include <string>
#include <fstream>
#include "Czesc_Swiata.h"

using namespace std;

Czesc_Swiata::Czesc_Swiata(){
#ifdef _DEBUG  
	cout << "Wywolano domyslny konstruktor Czesc_Swiata" << endl;
#endif
	typ_czesci_swiata = "Twoj_Wlasny_Typ";
}

///Zdefiniowany operator strumieniowy
std::ostream& operator << (std::ostream &s, Czesc_Swiata &czesc){
	s << czesc.typ_czesci_swiata;
	return s;
}

///Zdefiniowany operator strumieniowy
std::istream& operator >> (std::istream& s, Czesc_Swiata &czesc){
	s >> czesc.typ_czesci_swiata;
	return s;
}

Czesc_Swiata::~Czesc_Swiata()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor ~Czesc_Swiata" << endl;
#endif
}