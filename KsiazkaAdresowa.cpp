#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika() {

    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::logowanieUzytkownika() {

    uzytkownikMenedzer.logowanieUzytkownika();
    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany()) {

        adresatMenedzer = new AdresatMenedzer(NAZWA_PLIKU_Z_ADRESATAMI,uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
        //adresatMenedzer.ustawIdZalogowanegoUzytkownika(IdZalogowanegoUzytkownika);
        //adresatMenedzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    }
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow() {

    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika() {

    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany()) {
        uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
    }
}

void KsiazkaAdresowa::wyloguj() {

    uzytkownikMenedzer.wyloguj();
    //adresatMenedzer.ustawIdZalogowanegoUzytkownika(0);
    //adresatMenedzer.wyloguj();
    delete adresatMenedzer;
    adresatMenedzer = NULL;
}

void KsiazkaAdresowa::dodajAdresata() {

    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany()) {

        adresatMenedzer->dodajAdresata();
    } else {
        cout << "Zaden uzytkownik nie jest zalogowany" << endl;
        system("pause");
    }
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow() {

    adresatMenedzer->wyswietlWszystkichAdresatow();
}
void KsiazkaAdresowa::ustawIdZalogowanegoUzytkownika(int noweIdZalogowanegoUzytkownika) {
    uzytkownikMenedzer.ustawIdZalogowanegoUzytkownika(noweIdZalogowanegoUzytkownika);
}
int KsiazkaAdresowa::pobierzIdZalogowanegoUzytkownika() {
    return uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika();
}
