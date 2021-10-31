#include <iostream>
using namespace std;

int main()
{

    int numero[4]={1,0,0,1};
    int uno[4]={0,0,0,1};
    int risultato[4];
    int size = 4-1;
    int temp = 0;
    int c=0;
                while (size >= 0 || temp == 1)
                {
                temp += ((size >= 0)? numero[size] - 0: 0);
                temp += ((size >= 0)? uno[size] - 0: 0);
                risultato[size] = temp % 2 + 0;
                temp /= 2;
                size--;
                }
    
for (int i = 0; i < 4; i++){
                    cout << risultato[i];
                }

    return 0;
}
