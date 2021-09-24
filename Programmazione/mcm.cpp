/******************************************************************************

Davide Galante, Minimo comune multiplo di due numeri

***************************************************************************/

#include <iostream>
// Include <iostream> è il programma che usa le funzioni predefinite di input/output definite in libreria iostream.

using namespace std;
// I nomi non definiti nel programma cercati nello spazio di nomi standard. Ad esempio il nome "cin" e "cout" sono definii in questo spazio per poterli usare senza scrivere ogni volta std::cout scriviamo all'inizio del programma questa iscrizione.
int main()
{
    float a, b, mA, mB;
    cout<<endl<<"Traccia: Inserisci due numeri non negativi e calcola il loro MCM.\n";

    cout<<endl<<"Inserire il primo numero: ";
    cin>>a;
    mA = a;
    while (a<0){
        cout<<"Numero negativo, inserire di nuovo il primo numero: ";
        cin>>a;
        mA = a; 
    }

    cout<<"Inserire il secondo numero: ";
    cin>>b;
    mB = b;
    while (b<0){
        cout<<"Numero negativo, inserire di nuovo il primo numero: ";
        cin>>b; 
        mB = b;
    }

    while (mA != mB){
        if (mA < mB){
            mA = mA + a;
        }else{
            mB = mB + b;
        }
    }

    float MCM;
    MCM = mA;

    cout<<endl<<"Il MCM e': "<<MCM;
    return 0;
}