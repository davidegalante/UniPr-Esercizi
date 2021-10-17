#include  <iostream>
using namespace std;

int main() {
    char primoChar, secondoChar, terzoChar;
    cout << "inserire tre caratteri: " << endl;
    cin >> primoChar >>  secondoChar >> terzoChar;
    cout << "cifrario di cesare: ";

    if ( primoChar < 97 || primoChar > 122)
        primoChar = 63;
    else{
        primoChar =  primoChar + 3;
        if (primoChar > 122)
            primoChar = primoChar-26; 
    }
    cout << primoChar; 
        

    if ( secondoChar < 97 || secondoChar > 122)
        secondoChar = 63;
    else{
        secondoChar= secondoChar +3;
        if (secondoChar > 122)
            secondoChar = secondoChar-26;
        }
    cout << secondoChar;
 
    if ( terzoChar < 97 || terzoChar > 122)
        terzoChar = 63;
    else{
        terzoChar= terzoChar +3;
        if (terzoChar > 122)
            terzoChar = terzoChar-26;     
        }
    cout << terzoChar <<endl;      
    return 0;
}
      