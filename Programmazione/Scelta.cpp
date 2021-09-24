#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int scelta,n,somma=0, esponente=0;
    cout<<endl<<"Digita 1 per calcolare la somma di 10 numeri interi, 2 per elevare un numero intero per un esponente: ";
    cin >> scelta;
    while(scelta < 1 or scelta > 2){
        cout<<"Errore. Digita 1 per calcolare la somma di 10 numeri interi, 2 per elevare un numero intero per un esponente: ";
        cin >> scelta;
    }

    if (scelta == 1)
    {
        for (int i=0;i<10;i++)
        {
            cout<<"Digita il "+to_string(i+1)+" numero: ";
            cin >> n;
            somma += n;
        }
        cout<<endl<<"La somma di questi numeri e': "+to_string(somma);
    }else if (scelta==2)
    {
        cout<<endl<<"Inserisci il numero che vuoi elevare: ";
        cin >> n;
        cout<<"Inserisci l'esponente: ";
        cin >> esponente;
        cout<<endl<<"Il risultato dell'operazione e': "+to_string(pow(n,esponente));
    }
    
    
    return 0;
}
