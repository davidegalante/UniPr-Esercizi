/******************************************************************************
Davide Galante, UniPr Informatica
-Scrivere una funzione ricorsiva di nome inverti con tipo di ritorno void che, preso in input un array di 
interi a, inverte l’ordine degli elementi dell’array.

-Scrivere una funzione main che legge da standard input una sequenza di interi, li memorizza in un array, 
stampa l’array e successivamente, utilizzando obbligatoriamente la funzione inverti, inverte l’ordine degli elementi dell’array. 
Infine, si stampa l’array.
*******************************************************************/

#include <iostream>
using namespace std;

//Dati un array, la posizione iniziale e quella finale dell'array, restituisco l'array invertito.
void inverti(int* a, int inizio, int fine){
    //Variabile d'appoggio per scambiare le varie posizioni
    int temporaneo; 

    //Condizione di fine ricorsione
    if(inizio < fine){

        //Scambio la posizione
        temporaneo = a[inizio];
        a[inizio] = a[fine];
        a[fine] = temporaneo;

        //Ricorsivo finche' non finisco
        inverti(a, inizio+1, fine-1);  
     }
}

int main()
{
    //Dichiarazione e inizializzazione dimensione array
    int nVal = 0;

    //Scelta dimensione array
    cout << "Quanti valori vuoi inserire? ";
    cin >> nVal;
    
    //Dichiarazione e inizializzazione array contenente i numeri scelti dall'utente
    int numeri[nVal] = {};

    //Ciclo inserimento valori
    for (int i = 0; i < nVal; i++){
        cout << "Inserire elemento: ";
        cin >> numeri[i];
    }

    //Ciclo visualizzazione array di partenza
    for (int i = 0; i < nVal; i++){
        cout << numeri[i] << " ";
    }

    //Chiamata funzione ricorsiva
    inverti(numeri,0,nVal-1);

    //Ciclo visualizzazione array invertito
    cout << endl;
    for (int i = 0; i < nVal; i++){
        cout << numeri[i] << " ";
    }

    return 0;
}
