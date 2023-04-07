#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika(){

    uzytkownikMenedzer.rejestracjaUzytkownika();
}
void KsiazkaAdresowa::wypiszWszystkichUzytkownikow(){

    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}
void KsiazkaAdresowa::logowanieUzytkownika(){

    uzytkownikMenedzer.logowanieUzytkownika();
}
void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika(){

    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}
void KsiazkaAdresowa::wyloguj(){

    uzytkownikMenedzer.wyloguj();
}
void KsiazkaAdresowa::dodajAdresata(){

    adresatMenedzer->dodajAdresata();
}
void KsiazkaAdresowa::wyswietlWszystkichAdresatow(){

    adresatMenedzer->wyswietlWszystkichAdresatow();
}
