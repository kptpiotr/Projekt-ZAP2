#ifndef FUNKCJE_H
#define FUNKCJE_H
#include <string>
using namespace std;

extern string haslo;
void metoda_slownikowa(string slownik_nazwa);
void wyswietl_menu(bool &losowe_znaki, int &dlugosc_hasla, bool &cyfry, bool &male_litery, bool &wielkie_litery, bool &znaki_specjalne, string &wyrazenie);

#endif // FUNKCJE_H
