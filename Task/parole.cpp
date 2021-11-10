#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[100] = "";
    char b[100] = "";
    
    
    while(true){
        cout << "Inserire la prima parola: ";
        cin.getline(a,100);
        if (strcmp(a,"$")==0)
            break;

        cout << "Inserire la seconda parola: ";
        cin.getline(b,100);
        if (strcmp(b,"$")==0)
            break;

        //cout << a << b;
        if (strcmp(a,b) == 0) {
            cout << "Le due parole sono uguali." << endl;
            char reverse[] = "";
            int n = strlen(a);
            for(int i = 0; i < n / 2; i++)
            {
                char temp = a[i];
                a[i] = a[n - i - 1];
                a[n - i - 1] = temp;
            }
            cout<<"Reverse: " << a << endl << endl;     
        }else{
            //cout << "javascript - script";
            if(strlen(a) >= strlen(b)){
                int len_a = strlen(a);
                int len_b = strlen(b); 
                if (strcmp(a + len_a - len_b, b) == 0)
                    cout << "La parola " << b << " e' suffisso di " << a << endl;

                if (strncmp( a, b, len_b ) == 0) 
                    cout << "La parola " << b << " e' prefisso di " << a << endl;
            }
            
            //script javascript
            else if(strlen(b) >= strlen(a)){
                int len_a = strlen(b);
                int len_b = strlen(a); 
                if (strcmp(b + len_a - len_b, a) == 0)
                    cout << "La parola " << a << " e' suffisso di " << b << endl;

                if (strncmp( b, a, len_b ) == 0) 
                    cout << "La parola " << a << " e' prefisso di " << b << endl;
            }
        cout << endl; 
        }
    }
    cout << "Addio!";
    return 0;
}