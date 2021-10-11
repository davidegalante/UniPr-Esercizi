/******************************************************************************

Davide Galante
Si scrivano le istruzioni di assegnamento che permettano di scambiare i valori 
di due variabili intere x e y  
(per esempio, se x vale 5 e y vale -9, dopo l'esecuzione del vostro frammento di codice 
x deve valere -9 e y deve valere 5)

***************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int x,y,z; //Dichiaro le variabili "x" e "y" per contenere i valori in input e "z" per la variabile contenitore
 
    cout<<"Inserisci valore di x: ";
    cin>>x;
    cout<<"Inserisci valore di y: ";
    cin>>y;

    z=x; //metto il valore di x nella variabile contenitore
    x=y; //assegno il valore di y alla variabile x
    y=z; //assegno il valore di z (ovvero quello iniziale di x) alla variabile y

    cout<<endl<<"VALORI SCAMBIATI"<<endl;
    cout<<endl<<"Nuovo valore di x: "<<x<<endl;
    cout<<"Nuovo valore di y: "<<y<<endl;
    return 0;
}