#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include "PlikTekstowy.h"
#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "UzytkownikMenedzer.h"

using namespace std;

class PlikZAdresatami :public PlikTekstowy{

    string nazwaTymczasowegoPlikuZAdresatami = "Adresaci_tymczasowo.txt";

    int idOstatniegoAdresata;
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    void zmienNazwePliku(string staraNazwa, string nowaNazwa);
    void usunPlik(string nazwaPlikuZRozszerzeniem);
    void edytujWybranaLinieWPliku(string liniaZDanymiAdresataOddzielonePionowymiKreskami, int idAdresata);

public:

    PlikZAdresatami(string nazwaPliku) : PlikTekstowy(nazwaPliku) {};

    bool dopiszAdresataDoPliku(Adresat adresat);
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int IdZalogowanegoUzytkownika);
    int pobierzIdOstatniegoAdresata();
    string pobierzLiczbe(string tekst, int pozycjaZnaku);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    void ustawIdOstatniegoAdresata(int noweIdOstatniegoAdresata);
    void usunAdresataZPliku(int idUsuwanegoAdresata);
    void zaktualizujDaneWybranegoAdresata(Adresat adresat);
};

#endif
