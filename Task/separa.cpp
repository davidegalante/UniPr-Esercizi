/******************************************************************************
Davide Galante, UniPr Informatica
Scrivere una funzione di nome separa che, presi in input una stringa s e due array di caratteri alpha e 
num, memorizza in alpha i caratteri alfabetici della stringa s e in num i caratteri numerici della stringa s. 
Tutti gli altri caratteri vengono scartati. La funzione deve restituire il numero di elementi memorizzati in 
alpha e il numero di elementi memorizzati in num.

Scrivere una funzione main che legge da standard input una stringa str di massimo 100 caratteri e, 
utilizzando obbligatoriamente la funzione separa, suddivide i caratteri presenti in str in due array 
SAlpha e SNum, rispettivamente di caratteri alfabetici e numeri. Infine, si stampando i due array a 
video.
*******************************************************************/

#include <iostream>
#include <cstring>
#include <cctype> //Per isdigit/isalpha
using namespace std;

#define MAX_LEN 100

void separa(char s[], char* alpha, char* num, int &tot_alpha, int &tot_numbers) {
    int count_alpha = 0;
    int count_numbers = 0;
    for (int i = 0; i < strlen(s); i++) {
        
        //se è un carattere alfabetico, lo metto nella posizione "count_alpha" dell'array "alpha"
        if (isalpha(s[i])){
            alpha[count_alpha] = s[i];
            count_alpha++;
        }

        //se è un carattere numerico, lo metto nella posizione "count_numbers" dell'array "num"    
        else if (isdigit(s[i])){
            num[count_numbers] = s[i];
            count_numbers++;
        } 
    }

    //restituisco il numero di elementi memorizzati in alpha e il numero di elementi memorizzati in num
    tot_alpha = count_alpha;
    tot_numbers = count_numbers;
}

int main()
{
    //Dichiaro e inizializzo array di caratteri e totale elementi memorizzati
    char str[MAX_LEN] = "";
    char SAlpha[MAX_LEN] = "";
    char SNum[MAX_LEN] = "";
    int totAlpha = 0;
    int totNum = 0;
    
    cout << "Inserisci una stringa: ";
    cin.getline(str,MAX_LEN);
    separa(str, SAlpha, SNum, totAlpha, totNum);    //chiamata alla funzione separa

    cout << "Caratteri alfabetici (" << totAlpha << ") " << endl;
    for (int i = 0; i < strlen(SAlpha); i++) {
        cout << SAlpha[i] << " ";
    }
    cout << endl;

    cout << "Caratteri numerici (" << totNum << ") " << endl;
    for (int i = 0; i < strlen(SNum); i++) {
        cout << SNum[i] << " ";
    }
    cout << endl;

    return 0;
}
