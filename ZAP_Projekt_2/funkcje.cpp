#include "funkcje.h"
#include <iostream>
#include <fstream>


void metoda_slownikowa(string slowniknazwa){
    string temp;
    ifstream plik_we(slowniknazwa.c_str());

    if (!plik_we.is_open()) {
        cout<<"Nie ma takiego pliku!"<<endl;
        return;
    }
    getline(plik_we, temp);
    while(!plik_we.eof()){
        if(temp==haslo){
            cout<<"Haslo to: "<<temp<<endl;
            plik_we.close();
            return;
        }
        getline(plik_we, temp);
    }
    if(temp==haslo){
        cout<<"Haslo to: "<<temp<<endl;
    }
    else{
        cout<<"Nie udalo sie zlamac hasla!"<<endl;
    }
    plik_we.close();
    return;
}

void wyswietl_menu(bool &losowe_znaki, int &dlugosc_hasla, bool &cyfry, bool &male_litery, bool &wielkie_litery, bool &znaki_specjalne, string &wyrazenie){
    cout<<"*****************************************"<<endl;
    cout<<"1.Metoda slownikowa"<<endl;
    cout<<"2.Metoda na losowe znaki"<<endl;
    cout<<"3.Wybierz dlugosc hasla"<<endl;
    cout<<"4.Wyrazenie zawarte w hasle"<<endl;
    cout<<"5.Opcje"<<endl;
    cout<<"*****************************************"<<endl;
    int wybor;
    cin>>wybor;
    string temp1;
    int numer_slownika=1;

    switch(wybor){
    case 1:
        system( "cls" ); /*Czyszczenie ekranu */
        cout<<"Dostepne slowniki:"<<endl;
        cout<<"1.1000000-password-seclists"<<endl;
        cout<<"2.slownik1"<<endl;


        cout<<"Wybierz numer slownika:"<<endl;
        cin>>numer_slownika;

        switch(numer_slownika){
        case 1:
            metoda_slownikowa("1000000-password-seclists");
            return;
            break;
        case 2:
            metoda_slownikowa("slownik1");
            return;
            break;
        default:
            cout<<"Podaj wlasciwy numer!"<<endl;
            wyswietl_menu(losowe_znaki, dlugosc_hasla, cyfry, male_litery, wielkie_litery, znaki_specjalne, wyrazenie);
            break;
        }

        system( "cls" ); /*Czyszczenie ekranu */
        break;
    case 2:
        system( "cls" ); /*Czyszczenie ekranu */
        /*Uruchom funkcje z losowymi znakami@@@@@@@@@@@@@@@@@@@@@@@@@@*/
        break;
    case 3:
        system( "cls" ); /*Czyszczenie ekranu */
        cout<<"Wpisz dlugosc hasla"<<endl;
        cin>>dlugosc_hasla;
        system( "cls" ); /*Czyszczenie ekranu */
        wyswietl_menu(losowe_znaki, dlugosc_hasla, cyfry, male_litery, wielkie_litery, znaki_specjalne, wyrazenie);

        break;
    case 4:
        system( "cls" ); /*Czyszczenie ekranu */
        cout<<"Podaj wyrazenie zawarte w hasle"<<endl;
        cin>>wyrazenie;
        system( "cls" ); /*Czyszczenie ekranu */
        wyswietl_menu(losowe_znaki, dlugosc_hasla, cyfry, male_litery, wielkie_litery, znaki_specjalne, wyrazenie);

        break;
    case 5:
        system( "cls" ); /*Czyszczenie ekranu */
        cout<<"Jesli chcesz wylaczyc opcje wpisz t"<<endl;

        cout<<"Czy wylaczyc cyfry?"<<endl;
        cin>>temp1;
        if(temp1=="t"){
            cyfry=false;
        }

        cout<<"Czy wylaczyc male litery?"<<endl;
        cin>>temp1;
        if(temp1=="t"){
            male_litery=false;
        }

        cout<<"Czy wylaczyc wielkie litery?"<<endl;
        cin>>temp1;
        if(temp1=="t"){
            wielkie_litery=false;
        }

        cout<<"Czy wylaczyc znaki specjalne?"<<endl;
        cin>>temp1;
        if(temp1=="t"){
            znaki_specjalne=false;
        }
        system( "cls" ); /*Czyszczenie ekranu */
        wyswietl_menu(losowe_znaki, dlugosc_hasla, cyfry, male_litery, wielkie_litery, znaki_specjalne, wyrazenie);

        break;
    default:
        system( "cls" ); /*Czyszczenie ekranu */
        cout<<"Podaj numer 1-5!"<<endl;
        wyswietl_menu(losowe_znaki, dlugosc_hasla, cyfry, male_litery, wielkie_litery, znaki_specjalne, wyrazenie);
        return;
        break;

    }

}
