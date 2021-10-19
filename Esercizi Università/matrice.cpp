/******************************************************************************

Davide Galante
Si scriva un programma in C++ che, dato in input un intero n, 
stampi a video una matrice di dimensione n tale che venga riempita 
con 1 sulla diagonale che va dall'angolo in alto a sinistra a quello in basso a destra 
e sulla diagonale che va dall'angolo in alto a destra a quello in basso a sinistra, 
0 nelle altre posizioni.

***************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Inserisci intero: ";
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if ((i == j) || (i+j == n-1)){
                cout << 1 << "";
            }else{
                cout << 0 << ""; 
            }
            
        }
        cout << endl;
    }
    
    
    return 0;
}
