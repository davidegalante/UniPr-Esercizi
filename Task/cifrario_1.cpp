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

    //Cifro primo carattere
    if (a < 97 || a > 122){ //Se il carattere non è una lettera minuscola (nella tabella ascii vanno da 97 a 122), allora sostituisci con un punto interrogativo
        a = 63;             //Punto di domanda
    }else{                  //Se il carattere è valido, avanza di 3 posizioni
        a = a + 3;
        if(a > 122)         //Controllo se il risultato va oltre la lettera "z"
		{
			a = a - 26;
		}	
    }

    //Cifro secondo carattere
    if (b < 97 || b > 122){ //Se il carattere non è una lettera minuscola (nella tabella ascii vanno da 97 a 122), allora sostituisci con un punto interrogativo
        b = 63;             //Punto di domanda
    }else{                  //Se il carattere è valido, avanza di 3 posizioni
        b = b + 3;
        if(b > 122)         //Controllo se il risultato va oltre la lettera "z"
		{
			b = b - 26;
		}	
    }

    //Cifro terzo carattere
    if (c < 97 || c > 122){ //Se il carattere non è una lettera minuscola (nella tabella ascii vanno da 97 a 122), allora sostituisci con un punto interrogativo
        c = 63;             //Punto di domanda
    }else{                  //Se il carattere è valido, avanza di 3 posizioni
        c = c + 3;
        if(c > 122)         //Controllo se il risultato va oltre la lettera "z"
		{
			c = c - 26;
		}	
    }

    cout << "Cifrario di Cesare: "<< a << " " << b << " " << c<< endl; //Stampa i caratteri cifrati
    return 0;
}
