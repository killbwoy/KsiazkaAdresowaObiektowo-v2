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

<<<<<<< Updated upstream
class AdresatMenedzer{
=======
class AdresatMenedzer {

    PlikZAdresatami plikZAdresatami;

    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
>>>>>>> Stashed changes

    const int ID_Zalogowanego_Uzytkownika;
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;
    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat adresat);

public:
<<<<<<< Updated upstream
    AdresatMenedzer(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika) : plikZAdresatami(nazwaPlikuZAdresatami), ID_Zalogowanego_Uzytkownika(idZalogowanegoUzytkownika){
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_Zalogowanego_Uzytkownika);
    };
=======
    AdresatMenedzer(string nazwaPlikuZAdresatami, int IdZalogowanegoUzytkownika) : plikZAdresatami(nazwaPlikuZAdresatami), ID_ZALOGOWANEGO_UZYTKOWNIKA(IdZalogowanegoUzytkownika){

       adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };

    Adresat podajDaneNowegoAdresata();

    int pobierzIdZalogowanegoUzytkownika();

    void wyswietlDaneAdresata(Adresat adresat);

>>>>>>> Stashed changes
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
};
#endif
