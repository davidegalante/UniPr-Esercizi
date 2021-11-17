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

//Numero massimo di caratteri per il nome, il cognome
#define MAX_NOME_COGNOME 32
//Numero massimo di caratteri per il numero
#define MAX_NUMERO 20
//Numero massimo di elementi dell'array Rubrica
#define MAX_ARRAY 100

//Struct del singolo contatto
struct contatto{
        char nome[MAX_NOME_COGNOME];
        char cognome[MAX_NOME_COGNOME];
        char numeroTelefono[MAX_NUMERO];
    };

int main()
{
    contatto rubrica [MAX_ARRAY];   //Array della rubrica
    int scelta = 0;
    int numContatti = 0;            //Numero totale di contatti in rubrica
    
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
                //Se supero numero massimo di contatti consentiti, vieto l'inserimento di ulteriori contatti
                if (numContatti < MAX_ARRAY){
                    cout << "Inserisci il nome del contatto da aggiungere: ";
                    cin >> rubrica[numContatti].nome;
                    //Se nome non valido, lo richiedo
                    while(strlen(rubrica[numContatti].nome) >= MAX_NOME_COGNOME){   
                        cout << "Inserire un nome valido (max 31 caratteri)!" << endl << "Inserisci il nome del contatto da aggiungere: ";
                        cin >> rubrica[numContatti].nome;
                    }
                    cout << "Inserisci il cognome del contatto da aggiungere: ";
                    cin >> rubrica[numContatti].cognome;
                    //Se cognome non valido, lo richiedo
                    while(strlen(rubrica[numContatti].cognome) > MAX_NOME_COGNOME){ 
                        cout << "Inserire un cognome valido (max 31 caratteri)!" << endl << "Inserisci il cognome del contatto da aggiungere: ";
                        cin >> rubrica[numContatti].cognome;
                    }

                    //Controllo se il contatto e' gia' presente o meno in rubrica
                    for (int i = 0; i < numContatti; i++){
                        while (strcmp(rubrica[numContatti].nome,rubrica[i].nome)==0 && strcmp(rubrica[numContatti].cognome,rubrica[i].cognome)==0){
                            cout << "Contatto gia' presente! Inserire solo contatti NUOVI!\n" << endl;
                            cout << "Inserisci il nome del contatto da aggiungere: ";
                            cin >> rubrica[numContatti].nome;
                            //Se nome non valido, lo richiedo
                            while(strlen(rubrica[numContatti].nome) >= MAX_NOME_COGNOME){   
                                cout << "Inserire un nome valido (max 31 caratteri)!" << endl << "Inserisci il nome del contatto da aggiungere: ";
                                cin >> rubrica[numContatti].nome;
                            }
                            cout << "Inserisci il cognome del contatto da aggiungere: ";
                            cin >> rubrica[numContatti].cognome;
                            //Se cognome non valido, lo richiedo
                            while(strlen(rubrica[numContatti].cognome) > MAX_NOME_COGNOME){ 
                                cout << "Inserire un cognome valido (max 31 caratteri)!" << endl << "Inserisci il cognome del contatto da aggiungere: ";
                                cin >> rubrica[numContatti].cognome;
                            }
                        }
                    }

                    cout << "Inserisci il numero del contatto da aggiungere: ";
                    cin >> rubrica[numContatti].numeroTelefono;
                    //Se numero non valido, lo richiedo
                    while(strlen(rubrica[numContatti].numeroTelefono) < MAX_NUMERO-10 || strlen(rubrica[numContatti].numeroTelefono) > MAX_NUMERO){
                        cout << "Inserire un numero valido (tra 10 e 20 caratteri numerici, carattere '+' consentito)!" << endl << "Inserisci il numero del contatto da aggiungere: ";
                        cin >> rubrica[numContatti].numeroTelefono;
                    }
                    for(int i = 0; i < strlen(rubrica[numContatti].numeroTelefono);i++){
                        //Controllo che il numero sia composto solo da caratteri numerici ed eventualmente dal '+'
                        if (rubrica[numContatti].numeroTelefono[i] > 57 || rubrica[numContatti].numeroTelefono[i] < 48){
                            //Il primo carattere può essere il '+'
                            if (rubrica[numContatti].numeroTelefono[0] != 43){
                                cout << "Inserire un numero valido (tra 10 e 20 caratteri numerici, carattere '+' consentito)!" << endl << "Inserisci il numero del contatto da aggiungere: ";
                                cin >> rubrica[numContatti].numeroTelefono;
                            }
                        }
                    }
                    numContatti++;
                    cout << "\nContatto Aggiunto!\n";  
                }else{
                    cout << "\nLa rubrica e' piena!\n";  
                }
                break;
                
            case 3:
                int trovato;
                trovato = 0; 
                char nomeDaRimuovere [MAX_NOME_COGNOME];
                char cognomeDaRimuovere [MAX_NOME_COGNOME];
                cout << "Inserisci il nome del contatto da cancellare: ";
                cin >> nomeDaRimuovere;
                cout << "Inserisci il cognome del contatto da cancellare: ";
                cin >> cognomeDaRimuovere;

                for (int i = 0; i < numContatti; i++){
                    if (strcmp(nomeDaRimuovere,rubrica[i].nome)==0 && strcmp(cognomeDaRimuovere,rubrica[i].cognome)==0){
                        //elimino il contatto, se lo trovo in rubrica
                        for(int j=i; j<(numContatti-1); j++)
                        {
                            rubrica[j]=rubrica[j+1];
                        }
                        trovato = 1;
                        numContatti--;
                    }
                }
                //Se il contatto non e' presente, stampo un errore
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
    return 0;
}
