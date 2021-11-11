/******************************************************************************

Davide Galante, UniPr Informatica
Scrivere un programma in C++ che legge ripetutamente da input due parole a e b 
(lunghe massimo 100 caratteri ciascuna non contenente spazi o caratteri a capo) 
e stampa a video un messaggio che indica se le due parole sono uguali, 
se una è prefisso di un’altra, oppure se una è suffisso di un’altra.
Se sono uguali, stampare il reverse.
Il programma termina se inserito il carattere '$' in input.

***************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    //Dichiaro stringhe di massimo 100 caratteri
    char a[100] = "";
    char b[100] = "";
    
    //ciclo infinito che si interrompe solo quando il carattere in input sara' $
    while(true){
        cout << "Inserire la prima parola: ";
        cin.getline(a,100);
        //Tolgo spazi
        int i = 0, j = 0;
        while (a[i])
        {
            if (a[i] != ' ')
                a[j++] = a[i];
            i++;
        }
        a[j] = '\0';
        //Se carattere in input e' $, termino programma
        if (strcmp(a,"$")==0)
            break;

        cout << "Inserire la seconda parola: ";
        cin.getline(b,100);
        //Tolgo spazi
        i = 0, j = 0;
        while (b[i])
        {
            if (b[i] != ' ')
                b[j++] = b[i];
            i++;
        }
        b[j] = '\0';
        //Se carattere in input e' $, termino programma
        if (strcmp(b,"$")==0)
            break;

        //se parole sono uguali, stampo reverse
        if (strcmp(a,b) == 0) {
            cout << "Le due parole sono uguali." << endl;
            int n = strlen(a);
            for(int i = 0; i < n / 2; i++)
            {
                char temp = a[i];
                a[i] = a[n - i - 1];
                a[n - i - 1] = temp;
            }
            cout<<"Reverse: " << a << endl << endl;     
        }else{
            //se prima parola e' piu' lunga, controllo se e' suffisso o prefisso
            if(strlen(a) >= strlen(b)){
                int len_a = strlen(a);
                int len_b = strlen(b); 
                //controllo suffisso
                if (strcmp(a + len_a - len_b, b) == 0)
                    cout << "La parola " << b << " e' suffisso di " << a << endl;
                //controllo prefisso
                if (strncmp( a, b, len_b ) == 0) 
                    cout << "La parola " << b << " e' prefisso di " << a << endl;
            }
            
            //se seconda parola e' piu' lunga, controllo se e' suffisso o prefisso
            else if(strlen(b) >= strlen(a)){
                int len_a = strlen(b);
                int len_b = strlen(a);
                //controllo suffisso 
                if (strcmp(b + len_a - len_b, a) == 0)
                    cout << "La parola " << a << " e' suffisso di " << b << endl;
                //controllo prefisso
                if (strncmp( b, a, len_b ) == 0) 
                    cout << "La parola " << a << " e' prefisso di " << b << endl;
            }
        cout << endl; 
        }
    }
    cout << "Addio!";
    return 0;
}