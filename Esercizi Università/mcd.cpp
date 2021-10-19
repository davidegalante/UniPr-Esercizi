/******************************************************************************

Davide Galante
Si scriva un programma in C++ che, dati in input due numeri interi a e b, 
calcoli il massimo comune divisore fra a e b utilizzando l'algoritmo di Euclide.

***************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int a,b,tmp;
    float mcd;

    cout << "Inserisci 2 numeri interi: " << endl;
    cin >> a >> b;

    while (b != 0) {
        tmp = b;
        b = a % b;
        a = tmp;
    }
    mcd = a;

    cout << endl << "Massimo Comune Divisore: " << mcd << endl;

    return 0;
}
