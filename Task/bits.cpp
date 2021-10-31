#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int nBits = 0;
    int bit = 0;

    cout << "Bits: ";
    cin>>nBits;
    while(nBits < 2){
        cout << "Errore!" << endl;
        cout << "Bits: ";
        cin>>nBits;
    }
    int numeroBinario[nBits]; //dichiaro array che contiene numero binario, lungo nBits, ovvero quanti ne vuole l'utente

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
        //Stampo il numero binario in complemento a 2
            cout << endl << "Numero Binario: ";
            for (int i = 0; i < nBits; i++){
                cout << numeroBinario[i];
            }
            break;

        case 1:
        {
            //Stampo numero decimale corrispondente al numero binario in complemento a 2
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
            {
                //Calcolo l'opposto e gestisco l'overflow
                int numeroUnoBinario[nBits];
                int oppostoBinario[nBits];
                int risultato[nBits];

                //Costruisco l'opposto del numero dato dall'utente
                for ( int i=0; i<nBits; ++i) {
                    if(i==nBits-1){
                        numeroUnoBinario[i] = 1;
                    }else{
                        numeroUnoBinario[i] = 0;
                    }  
                }

                //Costruisco il numero 1 in binario con bit=nBits
                for ( int i=0; i<nBits; ++i) {
                    if (numeroBinario[i]==0){
                        oppostoBinario[i]=1;
                    }else{
                        oppostoBinario[i]=0;
                    }
                }

                //Sommo l'opposto con il numero 1 in binario
                int dimensione = nBits-1;
                int temp = 0;
                //Parto da destra
                while (dimensione >= 0 || temp == 1)
                {
                    temp += ((dimensione >= 0)? oppostoBinario[dimensione] - 0: 0);
                    temp += ((dimensione >= 0)? numeroUnoBinario[dimensione] - 0: 0);
                    risultato[dimensione] = temp % 2 + 0;
                    temp /= 2;
                    dimensione--;
                }
                
                //CONTROLLO OVERFLOW 
                //Se il risultato è uguale al numero binario iniziale, è overflow
                int uguali=0;
                for (int i = 0; i < nBits; i++){
                    if(risultato[i]==numeroBinario[i]){
                        uguali+=1;
                    }
                }

                if(uguali!=nBits){
                    cout << "Opposto: ";
                    for (int i = 0; i < nBits; i++){
                    cout << risultato[i];
                    }
                }
                else{
                    cout << "Overflow!";
                }

            }
            break;

        default:
            cout << "Errore!";
    }

    return 0;
}
