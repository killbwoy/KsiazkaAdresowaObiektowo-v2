#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");

    //ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    //ksiazkaAdresowa.logowanieUzytkownika();
    //ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
    //ksiazkaAdresowa.wyloguj();
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    //ksiazkaAdresowa.rejestracjaUzytkownika();


    ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.wyswietlWszystkichAdresatow();

    return 0;
}
