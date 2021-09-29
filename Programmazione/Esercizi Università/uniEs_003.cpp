/******************************************************************************

Davide Galante
Si scriva un programma in C++ che richieda all’utente il prezzo di un oggetto
 e la percentuale di sconto ad esso applicata, e che stampi a video il cartellino 
 con il prezzo (originale e scontato).

Esempio (in grassetto i valori inseriti in input dall'utente):
Inserisci i dati:

Prezzo: 25
Sconto: 10

Cartellino:
Prezzo: 25.00 euro
Sconto applicato 10%
Prezzo finale: 22.50 euro
NO LIBRARIA MATH

***************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    
    float prezzo, sconto, prezzoFinale;
    cout<<"Inserisci i dati: "<<endl;
    cout<<endl<<"Prezzo: ";
    cin>>prezzo;
    cout<<"Sconto: ";
    cin>>sconto;

    prezzoFinale = prezzo - ((prezzo/100)*sconto); //Calcolo il prezzo finale scontato, dividendo il prezzo per 100 e moltiplicando per lo sconto

    cout<<endl<<"Cartellino: "<<endl;
    cout<<"Prezzo: "<<prezzo<<" euro"<<endl;
    cout<<"Sconto applicato: "<<sconto<<"%"<<endl;
    cout<<"Prezzo finale: "<<prezzoFinale<<" euro"<<endl;
    
    return 0;
}
