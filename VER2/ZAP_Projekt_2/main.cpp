#include <iostream>
#include <fstream>
#include "metoda_slownikowa.h"
#include "menu.h"

string haslo;
bool losowe_znaki=false;
int dlugosc_hasla=0;
bool cyfry=true;
bool male_litery=true;
bool wielkie_litery=true;
bool znaki_specjalne=true;
string wyrazenie;

int main()
{


    cout << "Lamanie hasel metoda BruteForce" << endl;
    cout << "Wpisz haslo testowe" << endl;

    cin>>haslo;

    wyswietl_menu(losowe_znaki, dlugosc_hasla, cyfry, male_litery, wielkie_litery, znaki_specjalne, wyrazenie);


    return 0;
}
