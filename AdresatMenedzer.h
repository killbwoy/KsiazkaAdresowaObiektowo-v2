#ifndef ADRESATKMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <cstdlib>
#include <sstream>

#include "MetodyPomocnicze.h"
#include "Adresat.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresatMenedzer {

    PlikZAdresatami plikZAdresatami;

    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;

    vector <Adresat> adresaci;

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami, int IdZalogowanegoUzytkownika) : plikZAdresatami(nazwaPlikuZAdresatami), ID_ZALOGOWANEGO_UZYTKOWNIKA(IdZalogowanegoUzytkownika){

       adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };

    Adresat podajDaneNowegoAdresata();

    int pobierzIdZalogowanegoUzytkownika();

    void wyswietlDaneAdresata(Adresat adresat);

    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    void wyloguj();

    int pobierzIdOstatniegoAdresata();


};


#endif
