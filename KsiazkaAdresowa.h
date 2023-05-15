#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include <string>

#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"

using namespace std;

class KsiazkaAdresowa{

    UzytkownikMenedzer uzytkownikMenedzer;
<<<<<<< Updated upstream

=======
>>>>>>> Stashed changes
    AdresatMenedzer *adresatMenedzer;

    const string NAZWA_PLIKU_Z_ADRESATAMI;

public:
<<<<<<< Updated upstream
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami){
     adresatMenedzer = NULL;
    }
=======
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami) {
        adresatMenedzer = NULL;
    };

    ~KsiazkaAdresowa() {
        delete adresatMenedzer;
        adresatMenedzer = NULL;
    };

    int pobierzIdZalogowanegoUzytkownika();

>>>>>>> Stashed changes
    void rejestracjaUzytkownika();
    void logowanieUzytkownika();
    void wyloguj();
    void zmianaHaslaZalogowanegoUzytkownika();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();

    void wypiszWszystkichUzytkownikow();
    //void ustawIdZalogowanegoUzytkownika(int noweIdZalogowanegoUzytkownika);

};

#endif
