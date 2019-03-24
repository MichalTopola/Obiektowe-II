#include <iostream>
#include "pytanie.h"

using namespace std;

int main()
{
     int suma=0;
    Pytanie p[5];

    for (int i=0;i<=4;i++){

    p[i].numer=i+1;
    p[i].wczytaj();
    p[i].zadaj();
    p[i].sprawdz();

    suma +=p[i].punkt;

    }
    cout <<"Koniec quizu punkty to:"<<suma<<endl;

}
