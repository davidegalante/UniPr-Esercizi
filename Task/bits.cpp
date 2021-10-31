#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int numeroBinario[30]; //todo dimensione massima
    int nBits = 0;
    int bit = 0;
    cout << "Bits: ";
    cin>>nBits;

    while(nBits < 2){
        cout << "Errore!" << endl;
        cout << "Bits: ";
        cin>>nBits;
    }

    int j = 0;
    for (int i = nBits - 1; i >= 0; i--){

        cout << "Inserisci il bit nella posizione " << i << ": ";
        cin >> bit;
        while (bit != 0 && bit != 1){
            cout << "Errore!" << endl;
            cout << "Inserisci il bit nella posizione " << i << ": ";
            cin >> bit;
        }
        numeroBinario[j++] = bit;
    }

    int scelta = 0;
    cout << endl <<  "Operazione: " << endl <<
            "   0 - Stampa numero in complemento a 2:" << endl <<
            "   1 - Converti in decimale:" << endl <<
            "   2 - Calcola opposto:" << endl;
    cin >> scelta;

    while (scelta > 2 || scelta < 0){
        cout << "Errore!" << endl;
        cin >> scelta;
    }

    switch(scelta){
        case 0:
            cout << endl << "Numero Binario: ";
            for (int i = 0; i < nBits; i++){
                cout << numeroBinario[i];
            }
            break;

        case 1:
        {
            cout << "Numero Decimale: ";
            int numeroDecimale = 0;
            int potenza = pow(2,nBits - 1);
            for ( int i=0; i<nBits; ++i) {
                if ( i==0 && numeroBinario[i]!=0) {
                    numeroDecimale = -potenza;
                }
                else {
                    numeroDecimale += (numeroBinario[i]-0)*potenza;
                }
                    potenza /= 2;
            }
                cout << numeroDecimale;
        }
           break;
        
        case 2:
            cout << "Opposto: ";//todo opposto e controllo overflow
            break;
    }

    

    return 0;
}
