#include "metoda_slownikowa.h"
#include "menu.h"
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
