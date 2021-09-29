/******************************************************************************

Davide Galante
Si scriva un programma in C++ che prende in input un numero intero n 
e stampa il valore n se n è pari, 2n se n è dispari 
(senza costrutti di controllo!, e.g., if)
NO LIBRARIA MATH

***************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    
    int n, risultato;
    cout<<"Inserisci valore intero: ";
    cin>>n;
    risultato = ((n%2)+1)*n; //n pari => n%2 = 0, quindi se è dispari moltiplica per 2, altrimenti moltiplica per 1
    cout<<"Il risultato e': "<<risultato<<endl;
    return 0;
}
