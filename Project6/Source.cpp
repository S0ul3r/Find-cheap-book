#include <iostream>

using namespace std;

struct data_wypozyczenia {
	int dzien, miesiac, rok;
};

struct dane_ksiazki {
	char tytul[50];
	char autor[30];
	int indeks;
	double cena;
	data_wypozyczenia data;
};

dane_ksiazki biblioteka[100];

void wyswietl_tanie(dane_ksiazki* tab) {
	for (int i = 0; i < n; i++) {
		if (tab[i].cena < 10) {
			cout << "\n" << tab[i].tytul << " " << tab[i].autor << " " << tab[i].indeks << " " << tab[i].cena;
		}
	}
}


int main(){
	int n = 0;
	cout << "Podaj liczbę książek w bibliotece";
	cin >> n;
	for (int i = 0; i <n; i++) {
		cout << "Pozycja numer: " << i+1 << "\n";
		cout << "tytuł: ";
		cin >> biblioteka[i].tytul;
		cout << "autor: ";
		cin >> biblioteka[i].autor;
		cout << "indeks: ";
		cin >> biblioteka[i].indeks;
		cout << "cena (zł): ";
		cin >> biblioteka[i].cena;
		cout << "data wypozyczenia: \n" << "dzien: ";
		cin >> biblioteka[i].data.dzien;
		cout << "miesiac: ";
		cin >> biblioteka[i].data.miesiac;
		cout << "rok: ";
		cin >> biblioteka[i].data.rok;
	}
	wyswietl_tanie(biblioteka);
	}