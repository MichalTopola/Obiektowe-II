#include <iostream>
#include "pytanie.h"
#include <fstream>
#include <cstdlib>

using namespace std;

void Pytanie::wczytaj(){

fstream plik;
plik.open("quiz.txt",ios::in);
if (plik.good()==false){
        cout <<"Swiat nie bedzie nie udalo sie otworzyc pliku!"<<endl;
    exit(0);
}
int nr_linii=(numer-1)*6+1;
int aktualnyNumer=1;
string linia;
while(getline(plik,linia)){
    if(aktualnyNumer==nr_linii) tresc=linia;
    if(aktualnyNumer==nr_linii+1) a=linia;
    if(aktualnyNumer==nr_linii+2) b=linia;
    if(aktualnyNumer==nr_linii+3) c=linia;
    if(aktualnyNumer==nr_linii+4) d=linia;
    if(aktualnyNumer==nr_linii+5) poprawna=linia;
    aktualnyNumer++;

}
plik.close();

};
void Pytanie::zadaj(){
    cout <<tresc<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout <<"Twoja odpowiedz: "<<endl;
    cin>>odpowiedz;
};
void Pytanie::sprawdz(){

    if(odpowiedz==poprawna){
        punkt=1;
    }
        else
        punkt=0;


};
