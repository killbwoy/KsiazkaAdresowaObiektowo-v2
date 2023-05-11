#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika() {

    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::logowanieUzytkownika() {

    int IdZalogowanegoUzytkownika = uzytkownikMenedzer.logowanieUzytkownika();
    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany()) {

        adresatMenedzer.ustawIdZalogowanegoUzytkownika(IdZalogowanegoUzytkownika);
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
    else cout << "Zaden uzytkownik nie jest zalogowany" << endl;
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow() {

    adresatMenedzer.wyswietlWszystkichAdresatow();
}
