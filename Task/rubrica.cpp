/******************************************************************************

Davide Galante, UniPr Informatica
Scrivere un programma che legge da input una sequenza di dati che rappresentano 
il nome, il cognome e il numero di telefono di una persona. 
I rubrica devono essere memorizzati in un array di massimo 100 elementi. 
Il programma deve chiedere ripetutamente di scegliere se visualizzare la rubrica,
inserire un contatto, eliminare un contatto o uscire dal programma.

***************************************************************************/
#include <iostream>
#include <cstring>
using namespace std;

struct contatto{
        char nome[32];
        char cognome[32];
        char numeroTelefono[10];
    };

int main()
{
    
    contatto rubrica [100];
    int scelta = 0;
    int numContatti = 0;
    
    cout << "*** Rubrica ***" << endl;
    while (true){
        cout << "1 - Visualizza rubrica\n2 - Inserisci contatto\n3 - Cancella contatto\n4 - Esci" << endl;
        cin >> scelta;

        switch(scelta){
            case 1:
                if(numContatti == 0){
                    cout << "Rubrica vuota!\n";
                }else{
                    for (int i = 0; i < numContatti; i++)
                        cout << rubrica[i].nome << " " << rubrica[i].cognome << " " << rubrica[i].numeroTelefono << " " << endl;
                }
                break;

            case 2:
                cout << "Inserisci il nome del contatto da aggiungere: ";
                cin >> rubrica[numContatti].nome;
                cout << "Inserisci il cognome del contatto da aggiungere: ";
                cin >> rubrica[numContatti].cognome;
                cout << "Inserisci il numero del contatto da aggiungere: ";
                cin >> rubrica[numContatti].numeroTelefono;
                numContatti++;
                cout << "\nContatto Aggiunto!\n";
                break;

            case 3:
                int trovato;
                trovato = 0; 
                char nomeDaRimuovere [32];
                char cognomeDaRimuovere [32];
                cout << "Inserisci il nome del contatto da cancellare: ";
                cin >> nomeDaRimuovere;
                cout << "Inserisci il cognome del contatto da cancellare: ";
                cin >> cognomeDaRimuovere;

                for (int i = 0; i < numContatti; i++){
                    if (strcmp(nomeDaRimuovere,rubrica[i].nome)==0 && strcmp(cognomeDaRimuovere,rubrica[i].cognome)==0){
                        //elimino contatto
                        for(int j=i; j<(numContatti-1); j++)
                        {
                            rubrica[j]=rubrica[j+1];
                        }
                        trovato = 1;
                        numContatti--;
                    }
                }
                if (trovato == 0){
                    cout << "\nContatto non trovato!\n";
                }else{
                    cout << "\nContatto eliminato!\n";
                    trovato = 0;
                }
                break;

            case 4:
                cout << "Addio!";
                return 0;
                break;
            
            default:
                cout << "Errore, inserire un numero valido!" << endl;
                break;
        }
    }
}
