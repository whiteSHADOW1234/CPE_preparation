#include <bits/stdc++.h>
using namespace std;
int main(){
    long long S, D;
    while(cin >> S >> D){
        long long num = S;

        while(num < D){
            S++;
            num = num + S;
        }
        cout << S << endl;
    }
    return 0;
}