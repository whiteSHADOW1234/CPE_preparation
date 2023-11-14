// Prepare a pen and a piece of paper with you...
#include <bits/stdc++.h>
using namespace std;

int main(){
    int move = 0;
    while(cin >> move){
        if (move <= 0) break;
        int u=1, n=2, s=5, w=3, e=4, d=6;
        string command;
        for(int i = 0; i < move; i++){
            cin >> command;
            int temp = 0;
            switch(command[0]){
                case 'n':
                    temp = u;
                    u = s;
                    s = d;
                    d = n;
                    n = temp;
                    break;
                case 's':
                    temp = u;
                    u = n;
                    n = d;
                    d = s;
                    s = temp;
                    break;
                case 'e':
                    temp = u;
                    u = w;
                    w = d;
                    d = e;
                    e = temp;
                    break;
                case 'w':
                    temp = u;
                    u = e;
                    e = d;
                    d = w;
                    w = temp;
                    break;
            }
        }
        cout << u << endl;

    }
    return 0;
}