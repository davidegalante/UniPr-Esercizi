#include <iostream>
using namespace std;
int main() {
    int x = 2, y = 3;
    bool b = x + 1 == y++ || ++x == ++y; 

    cout << b << endl; // True
    cout << x << endl; // 2
    cout << y << endl; // 4
 
    return 0;
}
