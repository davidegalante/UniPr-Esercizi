/******************************************************************************

Davide Galante, Media aritmetica di 3 numeri.

***************************************************************************/

#include <iostream>
// Include <iostream> è il programma che usa le funzioni predefinite di input/output definite in libreria iostream.

using namespace std;
// I nomi non definiti nel programma cercati nello spazio di nomi standard. Ad esempio il nome "cin" e "cout" sono definii in questo spazio per poterli usare senza scrivere ogni volta std::cout scriviamo all'inizio del programma questa iscrizione.
int main()
{
    float a, b, c;
    cout<<endl<<"Traccia: Inserisci tre numeri interi e scrivi la loro media.\n";

    cout<<"Inserire il primo numero: ";
    cin>>a;
    while (a<0){
        cout<<"Numero negativo, inserire di nuovo il primo numero: ";
        cin>>a; 
    }

    cout<<"Inserire il secondo numero: ";
    cin>>b;
    while (b<0){
        cout<<"Numero negativo, inserire di nuovo il primo numero: ";
        cin>>b; 
    }

    cout<<"Inserire il terzo numero: ";
    cin>>c;
    while (c<0){
        cout<<"Numero negativo, inserire di nuovo il primo numero: ";
        cin>>c; 
    }

    float risultato;
    risultato=(a+b+c)/3.0;

    cout<<endl<<"Il risultato della media e': "<<risultato<<endl;
    return 0;
}