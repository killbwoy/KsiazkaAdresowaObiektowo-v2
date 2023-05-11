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

    int IdZalogowanegoUzytkownika;

    vector <Adresat> adresaci;

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami){

       IdZalogowanegoUzytkownika = 0;
    };

    Adresat podajDaneNowegoAdresata();

    static int pobierzIdZalogowanegoUzytkownika();

    void wyswietlDaneAdresata(Adresat adresat);
    void ustawIdZalogowanegoUzytkownika(int noweIdZalogowanegoUzytkownika);
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    void wyloguj();

    int pobierzIdOstatniegoAdresata();


};


#endif
