#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include <string>

#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"

using namespace std;

class KsiazkaAdresowa{

    UzytkownikMenedzer uzytkownikMenedzer;

    AdresatMenedzer adresatMenedzer;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami){
        uzytkownikMenedzer.wczytajUzytkownikowZPliku();
        };
    void rejestracjaUzytkownika();
    void logowanieUzytkownika();
    void wyloguj();
    void zmianaHaslaZalogowanegoUzytkownika();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
     int pobierzIdZalogowanegoUzytkownika();
    void wypiszWszystkichUzytkownikow();

};

#endif
