/******************************************************************************

Davide Galante
Scrivere un programma in C++ che stampi un triangolo isoscele, 
utilizzando come carattere di riempimento il carattere ‘*’.

***************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int h;
    int i = 0;
    int j = 0;

    cout << "Inserire un valore intero (> 0): ";
    cin >> h;
    while (h <= 0){
        cout << "Input errato." << endl;
        cout << "Inserire un valore intero (> 0): ";
        cin >> h;
    }
    cout << endl;

    while (i < h){
        j = 0;
        while (j < i + 1){
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }

    while (i > 1){
        j = 0;
        while (j < i - 1){
            cout << "* ";
            j++;
        }
        cout << endl;
        i--;
    }
    
    return 0;
}