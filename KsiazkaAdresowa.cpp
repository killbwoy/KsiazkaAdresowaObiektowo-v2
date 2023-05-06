#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika() {

    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::logowanieUzytkownika() {

    int idZalogowanegoUzytkownika = uzytkownikMenedzer.logowanieUzytkownika();
    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany()) {

        adresatMenedzer.ustawIdZalogowanegoUzytkownika(idZalogowanegoUzytkownika);
        adresatMenedzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
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
    adresatMenedzer.ustawIdZalogowanegoUzytkownika(0);
    adresatMenedzer.wyloguj();
}

void KsiazkaAdresowa::dodajAdresata() {

    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany()) {

        adresatMenedzer.dodajAdresata();
    }
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow() {

    adresatMenedzer.wyswietlWszystkichAdresatow();
}
