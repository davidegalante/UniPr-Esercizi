/******************************************************************************

Davide Galante, UniPr Informatica

Si scriva un programma cifrario.cpp in C++ che legga da tastiera 3 caratteri 
e che stampi a monitor i tre caratteri cifrati utilizzando il cifrario di Cesare. 
Il programma deve funzionare correttamente per qualsiasi carattere alfabetico minuscolo 
dell’alfabeto latino (26 caratteri). 
Se uno dei caratteri non può essere convertito utilizzando il cifrario di Cesare 
(es. A, <, !), dovrà essere sostituito col carattere ‘?’.

***************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    char a,b,c;
    cout << "Inserire tre caratteri:" << endl;
    cin >> a >> b >> c;

    /********************************
     Uso un doppio operatore ternario che, in primo luogo,
     stabilisce se il carattere è valido o meno e, in caso di non validità,
     sostituisce il carattere con un '?' (63 nella ascii table).

     Il secondo operatore ternario messo di seguito stabilisce se il risultato della cifratura "sfora"
     e va quindi oltre al carattere "z", risolvendo quindi il problema delle ultime lettere dell'alfabeto.
    *********************************/

    a = (a < 97 || a > 122) ? 63 : (a+3) <= 122 ? (a+3) : (a+3)-26;
    b = (b < 97 || b > 122) ? 63 : (b+3) <= 122 ? (b+3) : (b+3)-26;
    c = (c < 97 || c > 122) ? 63 : (c+3) <= 122 ? (c+3) : (c+3)-26;

    cout << "Cifrario di Cesare: "<< a << " " << b << " " << c << endl; //Stampa i caratteri cifrati
    return 0;
}
