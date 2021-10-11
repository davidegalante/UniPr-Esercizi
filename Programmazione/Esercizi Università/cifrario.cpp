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

    a = (a >= 97 && a <= 122) ? (a+3) : 63; //Cifro primo carattere, sostituisco carattere non valido con '?' (63, ascii table)
    b = (b >= 97 && b <= 122) ? (b+3) : 63; //Cifro secondo carattere, sostituisco carattere non valido con '?' (63, ascii table)
    c = (c >= 97 && c <= 122) ? (c+3) : 63; //Cifro terzo carattere, sostituisco carattere non valido con '?' (63, ascii table)

    a = a < 122 ? a : a-26; //Se cifratura supera la lettera "z", torno all'inizio 
    b = b < 122 ? b : b-26; //Se cifratura supera la lettera "z", torno all'inizio 
    c = c < 122 ? c : c-26; //Se cifratura supera la lettera "z", torno all'inizio 

    cout << "Cifrario di Cesare: "<< a << " " << b << " " << c << endl; //Stampa i caratteri cifrati
    return 0;
}
