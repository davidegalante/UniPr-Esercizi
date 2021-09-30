/******************************************************************************

Davide Galante.
Si scriva un programma in C++ che, dato un numero reale x in input, calcoli e stampi con opportuni messaggi:
- l'area del quadrato di lato x
- il perimetro del quadrato di lato x
- la circonferenza del cerchio di raggio x
- l'area del cerchio di raggio x
NO LIBRARIA MATH.

***************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int x=0;
    cout<<"Inserisci un numero reale: ";
    cin>>x;
 
    int areaQ;
    areaQ = x*x; //Formula area quadrato, lato per lato.
 
    int perimetro;
    perimetro = x*4; //Formula area perimetro, lato per 4.
 
    float circonferenza;
    circonferenza = x*(2*3.14); //Formula circonferenza dato il raggio, raggio per 2 volte pigreco. 
 
    float areaC;
    areaC = (x*x)*3.14; //Formula area cerchio, raggio alla seconda per pigreco.
 
    cout<<"Area quadrato: "<<areaQ<<endl;
    cout<<"Perimetro: "<<perimetro<<endl;
    cout<<"Circonferenza: "<<circonferenza<<endl;
    cout<<"Area cerchio: "<<areaC<<endl;
    return 0;
}