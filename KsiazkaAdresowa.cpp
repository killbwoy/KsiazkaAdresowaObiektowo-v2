#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika(){

    uzytkownikMenedzer.rejestracjaUzytkownika();
}
<<<<<<< Updated upstream
void KsiazkaAdresowa::wypiszWszystkichUzytkownikow(){
=======

void KsiazkaAdresowa::logowanieUzytkownika() {

    uzytkownikMenedzer.logowanieUzytkownika();
    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany()) {

        adresatMenedzer = new AdresatMenedzer(NAZWA_PLIKU_Z_ADRESATAMI,uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
        //adresatMenedzer.ustawIdZalogowanegoUzytkownika(IdZalogowanegoUzytkownika);
        //adresatMenedzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    }
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow() {
>>>>>>> Stashed changes

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
<<<<<<< Updated upstream
=======
    //adresatMenedzer.ustawIdZalogowanegoUzytkownika(0);
    //adresatMenedzer.wyloguj();
    delete adresatMenedzer;
    adresatMenedzer = NULL;
>>>>>>> Stashed changes
}
void KsiazkaAdresowa::dodajAdresata(){

<<<<<<< Updated upstream
    adresatMenedzer->dodajAdresata();
=======
void KsiazkaAdresowa::dodajAdresata() {

    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany()) {

        adresatMenedzer->dodajAdresata();
    }
    else cout << "Zaden uzytkownik nie jest zalogowany" << endl;
    system("pause");
>>>>>>> Stashed changes
}
void KsiazkaAdresowa::wyswietlWszystkichAdresatow(){

<<<<<<< Updated upstream
    adresatMenedzer->wyswietlWszystkichAdresatow();
=======
void KsiazkaAdresowa::wyswietlWszystkichAdresatow() {

    adresatMenedzer->wyswietlWszystkichAdresatow();
}
/*void KsiazkaAdresowa::ustawIdZalogowanegoUzytkownika(int noweIdZalogowanegoUzytkownika) {
    uzytkownikMenedzer.ustawIdZalogowanegoUzytkownika(noweIdZalogowanegoUzytkownika);
}*/
int KsiazkaAdresowa::pobierzIdZalogowanegoUzytkownika()
{
    return uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika();
>>>>>>> Stashed changes
}
