/******************************************************************************

Davide Galante
Dato un numero, trova il suo valore assoluto
NO LIBRARIA MATH

***************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int x, result;
    cout << "Inserire un numero: ";
    cin >> x;
    result = x>0 ? x : -x;
    cout<<"Il valore assoluto di " <<x<<" e': "<<result<<endl;
    return 0;
}
