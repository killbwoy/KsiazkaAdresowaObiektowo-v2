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

class AdresatMenedzer{

    int idZalogowanegoUzytkownika;
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami){
        idZalogowanegoUzytkownika = 0;
    };
    void wyswietlDaneAdresata(Adresat adresat);
    Adresat podajDaneNowegoAdresata();
    void ustawIdZalogowanegoUzytkownika(int noweIdZalogowanegoUzytkownika);
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    int pobierzIdOstatniegoAdresata();
    static int pobierzIdZalogowanegoUzytkownika();
};
#endif
