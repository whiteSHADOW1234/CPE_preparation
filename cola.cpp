// NOTED: formula is input_num * 3 / 2 !!!!!!
#include <bits/stdc++.h>
using namespace std;

int main(){
    int cola = 0;
    while(cin >> cola){
        if(cola == 0)
            break;
        cout << (int)cola*3/2 << endl;
    }
    return 0;
}