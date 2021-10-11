/******************************************************************************

Davide Galante, Fattoriale di n numeri

***************************************************************************/

#include <iostream>
// Include <iostream> è il programma che usa le funzioni predefinite di input/output definite in libreria iostream.

using namespace std;
// I nomi non definiti nel programma cercati nello spazio di nomi standard. Ad esempio il nome "cin" e "cout" sono definii in questo spazio per poterli usare senza scrivere ogni volta std::cout scriviamo all'inizio del programma questa iscrizione.

int fattoriale (int n)
{
    if (n == 0)
    {
        return 1;
    }else{
        return n*fattoriale(n-1);
    }
}

int main()
{
    int numero, fattor;
    cout<<endl<<"Traccia: Inserisci un numero per trovare il suo fattoriale.\n";

    cout<<endl<<"Inserire il numero: ";
    cin >> numero;
    fattor = fattoriale(numero);
    cout<<endl<<"Il fattoriale di " +to_string(numero)+ " e': "+to_string(fattor)<<endl;
    return 0;
}