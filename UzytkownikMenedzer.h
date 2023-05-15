#ifndef UZYTKOWNIKMENEDZER_H
#define UZYTKOWNIKMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Uzytkownik.h"
#include "PlikZUzytkownikami.h"
#include "Adresat.h"


using namespace std;

class UzytkownikMenedzer {

    int IdZalogowanegoUzytkownika;
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);

    vector <Uzytkownik> uzytkownicy;

    Uzytkownik podajDaneNowegoUzytkownika();

    PlikZUzytkownikami plikZUzytkownikami;

public:
    UzytkownikMenedzer(string nazwaPlikuZUzytkownikami) : plikZUzytkownikami(nazwaPlikuZUzytkownikami) {
        IdZalogowanegoUzytkownika = 0;
        uzytkownicy = plikZUzytkownikami.wczytajUzytkownikowZPliku();
    };

    bool czyUzytkownikJestZalogowany();

    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void zmianaHaslaZalogowanegoUzytkownika();
    void ustawIdZalogowanegoUzytkownika(int noweIdZalogowanegoUzytkownika);
    int logowanieUzytkownika();
    int pobierzIdZalogowanegoUzytkownika();
    void wyloguj();
};
#endif
