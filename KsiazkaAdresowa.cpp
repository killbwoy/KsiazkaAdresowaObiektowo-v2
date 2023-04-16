#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika(){

    uzytkownikMenedzer.rejestracjaUzytkownika();
}
void KsiazkaAdresowa::logowanieUzytkownika(){

    uzytkownikMenedzer.logowanieUzytkownika();
    adresatMenedzer.ustawIdZalogowanegoUzytkownika(pobierzIdZalogowanegoUzytkownika());
}
void KsiazkaAdresowa::wypiszWszystkichUzytkownikow(){

    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}
void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika(){

    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}
void KsiazkaAdresowa::wyloguj(){

    uzytkownikMenedzer.wyloguj();
}
void KsiazkaAdresowa::dodajAdresata(){

    adresatMenedzer.dodajAdresata();
}
void KsiazkaAdresowa::wyswietlWszystkichAdresatow(){

    adresatMenedzer.wyswietlWszystkichAdresatow();
}
int KsiazkaAdresowa::pobierzIdZalogowanegoUzytkownika()
{
    return uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika();
}
