/******************************************************************************

Davide Galante, Convertitore

***************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    float scelta, euro, dollari;
    cout<<endl<<"Premi 1 per convertire da Euro a Dollari, 2 per convertire da Dollari ad Euro: ";
    cin >> scelta;
    while (scelta > 2 or scelta < 1)
    {
        cout<<endl<<"Errore\ndigita 1 per convertire da Euro a Dollari, 2 per convertire da Dollari a Euro: ";
        cin >> scelta;
    }
    if (scelta == 1)
    {
        cout<<endl<<"Euro: ";
        cin >> euro;
        dollari = euro*0.85;
        cout<<endl<<to_string(euro)+" euro equivalgono a "+to_string(dollari)+" dollari!";
    }else
    {
        cout<<endl<<"Dollari: ";
        cin >> dollari;
        euro = dollari*1.17;
        cout<<endl<<to_string(dollari)+" dollari equivalgono a "+to_string(euro)+" euro!";
    }

    return 0;
}