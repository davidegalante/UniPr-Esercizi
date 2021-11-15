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
    
    contatto contatti [100];

    int scelta = 0;
    int numContatti = 0;
    //contatto c =  {"davide","galante","4929402"};//da inserire in array contatti e verificare
    //contatti[0] = c;
    

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
                        cout << contatti[i].nome << " " << contatti[i].cognome << " " << contatti[i].numeroTelefono << " " << endl;
                }
                break;

            case 2:
                cout << "Inserisci il nome del contatto da aggiungere: ";
                cin >> contatti[numContatti].nome;
                cout << "Inserisci il cognome del contatto da aggiungere: ";
                cin >> contatti[numContatti].cognome;
                cout << "Inserisci il numero del contatto da aggiungere: ";
                cin >> contatti[numContatti].numeroTelefono;
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
                    if (strcmp(nomeDaRimuovere,contatti[i].nome)==0 && strcmp(cognomeDaRimuovere,contatti[i].cognome)==0){
                        //elimino contatto
                        for(int j=i; j<(numContatti-1); j++)
                        {
                            contatti[j]=contatti[j+1];
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
