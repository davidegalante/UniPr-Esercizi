/******************************************************************************

Davide Galante
Data l’equazione ax + b = 0, 
scrivere un programma in C++ per determinare 
il valore di x, se esiste, che risolve l'equazione. 
(a e b devono essere inseriti dall'utente).

***************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    float a,b,x;
    string tipoEquazione;
    cout << "Inserisci valore di a: ";
    cin >> a;
    cout << "Inserisci valore di b: ";
    cin >> b;

    tipoEquazione = (a==0&&b!=0) ? "impossibile" : (a==0&&b==0) ? "indeterminata" : "determinata"; //Trovo il tipo dell'equazione
    if (tipoEquazione == "determinata"){    //Trovo la soluzione, se c'è
        x = (-b/a) == -0 ? 0 : -(b/a);      //Per togliere il '-0', che penso non sia giustissimo
    }

    cout << endl << "L'equazione " << a << "x+" << b << "=0 e' " << tipoEquazione;  //compongo l'equazione per renderla più chiara
    if (tipoEquazione == "determinata"){            //Se è determinata, c'è una soluzione e la stampo.
        cout << endl << "La soluzione e': " << x;
    }else if (tipoEquazione == "indeterminata"){    //Se è indeterminata, ha infinite soluzioni.
        cout << endl << "ha infinite soluzioni";
    }else if (tipoEquazione == "impossibile")       //Se è impossibile, non ha soluzioni.
        cout << endl << "non ha soluzioni";

    return 0;
}
