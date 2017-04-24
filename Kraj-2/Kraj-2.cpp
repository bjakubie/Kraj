/**
\mainpage Kraj:: Strona g³ówna

Programowanie obiektowe - Projekt nr 2\n
Implementowany obiekt: Kraj\n\n
*/

#include <iostream>
#include <string>
#include <vector>
#include "Kraj.h"
#include "Demokratyczny.h"
#include "Socjalistyczny.h"

using namespace std;

string nowa_nazwa; ///<zmienna przechowuj¹ca nowa nazwe obiektu
string nowe_imie; ///<zmienna przechowuj¹ca nowe imie zalozyciela
int zadanie; ///<zmienna u¿ywana do wyboru zadania w menu

///G³ówny program;
int main(){
	Demokratyczny kraj1;
	Socjalistyczny kraj2;
	int obiekt = 1;
	cout << "Wybrano obiekt (Kraj) domyslny: Demokratyczny";
	cout << endl;

	//Menu programu
	do {
		switch (zadanie)
		{
		case 0:
			cout << "MENU PROGRAMU" << endl;
			cout << "************************************************" << endl;
			cout << "Zadanie:" << endl;
			cout << "1: Zmien obiekt" << endl;
			cout << "2: Wyswietl aktualny stan" << endl;
			cout << "3: Zmien nazwe kraju" << endl;
			cout << "4: Zmien imie zalozyciela" << endl;
			cout << "5: Zapisz stan obiektu do pliku" << endl;
			cout << "6: Pokaz stanu obiektu z pliku" << endl;
			cout << "7: Testuj obiekt" << endl;
			cout << "9: Zamknij program" << endl;
			cout << "************************************************" << endl;
			cout << "Co mam zrobic? Podaj cyfre: ";
			cin >> zadanie;
			break;
		case 1:
			system("cls");
			do {
				cout << "Zmien obiekt: " << endl;
				cout << "1 - Demokratyczny" << endl <<  "2 - Socjalistyczny" << endl << "Kraj: ";
				cin >> obiekt;
				cout << endl;
			} while (obiekt != 1 && obiekt != 2);
			zadanie = 0;
			break;
		case 2:
			system("cls");
			if (obiekt == 1)
				kraj1.wyswietlStan();
			else
				kraj2.wyswietlStan();
			fflush(stdin);
			cout << endl << "Wcisnij Enter: " << endl;
			cin.get();
			system("cls");
			zadanie = 0;
			break;
		case 3:
			system("cls");
			cout << "Wpisz nowa nazwe kraju: ";
			cin >> nowa_nazwa;
			if (obiekt == 1)
				kraj1.zmienNazwe(nowa_nazwa);
			else
				kraj2.zmienNazwe(nowa_nazwa);
			cout << "Nazwa kraju zostala zmieniona." << endl;
			zadanie = 0;
			break;
		case 4:
			system("cls");
			cout << "Wpisz nowe imie zalozyciela: ";
			cin >> nowe_imie;
			if (obiekt == 1)
				kraj1.zmienImieZalozyciela(nowe_imie);
			else
				kraj2.zmienImieZalozyciela(nowe_imie);
			cout << "Imie Zalozyciela zostal zmieniony." << endl;
			zadanie = 0;
			break;
		case 5:
		{
				  system("cls");
				  if (obiekt == 1)
					  kraj1.zapiszStan(kraj1);
				  else
					  kraj2.zapiszStan(kraj2);
				  cout << "Zapisano" << endl;
				  zadanie = 0;
				  break;
		}
		case 6:
		{
				  system("cls");
				  if (obiekt == 1)
					  kraj1.wczytajStan(kraj1);
				  else
					  kraj2.wczytajStan(kraj2);
				  cout << "Wczytano" << endl;
				  zadanie = 0;
				  break;
		}
		case 7:
		{
				  Kraj kraj;
				  Demokratyczny demokratyczny;
				  Socjalistyczny socjalistyczny;

				  cout << "/--/Polimorfizm z uzyciem tablicy wskaznikow na obiekty klasy podstawowej" << endl;
				  Czesc_Swiata *obiekty1[3];
				  obiekty1[0] = &kraj;
				  obiekty1[1] = &demokratyczny;
				  obiekty1[2] = &socjalistyczny;

				  for (int i = 0; i < 3; i++){
					  int wartosc = 3;
					  obiekty1[i]->zmienZmienna(wartosc);
					  obiekty1[i]->pokazStan();
				  }

				  cout << "/--/Testowanie zapisu dla klasy Kraj" << endl;
				  kraj.zapiszStan(kraj);
				  kraj.wczytajStan(kraj);
				  demokratyczny.zapiszStan(demokratyczny);
				  demokratyczny.wczytajStan(demokratyczny);

				  cout << "/--/Metody wirtualne na wektora obiektow (STL)//" << endl;
				  vector <Czesc_Swiata*> obiekty2;
				  obiekty2.push_back(&kraj);
				  obiekty2.push_back(&demokratyczny);
				  obiekty2.push_back(&socjalistyczny);

				  for (int i = 0; i < 3; i++){
					  int wartosc = 2;
					  obiekty2[i]->zmienZmienna(wartosc);
					  obiekty2[i]->pokazStan();
				  }
				  //obiekty2.clear();
				  zadanie = 0;
				  break;
		}
		default:
			system("cls");
			cout << "Wybrano niepoprawne zadanie, sprobuj jeszcze raz: " << endl;
			zadanie = 0;
		}
	} while (zadanie != 9);
	return 0;
}