#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

#define MAX_LEN 100

void separa(char s[], char* alpha, char* num, int &tot_alpha, int &tot_numbers) {
    int count_alpha = 0;
    int count_numbers = 0;
    for (int i = 0; i < strlen(s); i++) {
        
        if (isalpha(s[i])){
            alpha[count_alpha] = s[i];
            count_alpha++;
        }
            
        else if (isdigit(s[i])){
            num[count_numbers] = s[i];
            count_numbers++;
        } 
    }
    tot_alpha = count_alpha;
    tot_numbers = count_numbers;
}

int main()
{
    char str[MAX_LEN];
    char SAlpha[MAX_LEN] = "";
    char SNum[MAX_LEN] = "";
    int totAlpha = 0;
    int totNum = 0;
    
    cout << "Inserisci una stringa: ";
    cin.getline(str,MAX_LEN);
    separa(str, SAlpha, SNum, totAlpha, totNum);

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
