#include <iostream>


using namespace std;

class Pytanie{
public:
    string tresc;
    string a,b,c,d;
    int numer;
    string poprawna;
    string odpowiedz;
    int punkt;
    void wczytaj(); //Wczytuje tresc pytania.
    void zadaj(); //Wyswietla pytanie.
    void sprawdz(); //sprawdza poprawnosc
};
