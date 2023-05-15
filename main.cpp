#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

char wczytajZnak() {
    string wejscie = "";
    char znak  = {0};
    cin.sync();
    while (true) {
        getline(cin, wejscie);

        if (wejscie.length() == 1) {
            znak = wejscie[0];
            break;
        }
        cout << "To nie jest pojedynczy znak. Wpisz ponownie." << endl;
    }
    return znak;
}

int main() {

    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");

    char wybor;

    while (true) {
        if (ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika() == 0) {

            system("cls");
            cout << "    >>> MENU  GLOWNE <<<" << endl;
            cout << "---------------------------" << endl;
            cout << "1. Rejestracja" << endl;
            cout << "2. Logowanie" << endl;
            cout << "9. Koniec programu" << endl;
            cout << "---------------------------" << endl;
            cout << "Twoj wybor: ";

            wybor = wczytajZnak();

            switch (wybor) {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                ksiazkaAdresowa.logowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        } else {

            system("cls");
            cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
            cout << "---------------------------" << endl;
            cout << "1. Dodaj adresata" << endl;
            cout << "8. Wyloguj sie" << endl;
            cout << "---------------------------" << endl;

            cout << endl << "Twoj wybor: ";

            wybor = wczytajZnak();

            switch (wybor) {
            case '1':
                ksiazkaAdresowa.dodajAdresata();
                break;
            case '8':
                ksiazkaAdresowa.ustawIdZalogowanegoUzytkownika(0);
                ksiazkaAdresowa.wyloguj();
                break;
            }
        }
    }
    return 0;
}
