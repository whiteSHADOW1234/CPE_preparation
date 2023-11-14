// Memorize the gcd function !!!!!!
#include <bits/stdc++.h>
using namespace std;

int gcd(int n, int m){
    if(n % m == 0) return m; // the n will be 0 at the end
    else return gcd(m, n % m);
}

int main(){
    int N, G;
    while(cin >> N) {
        if(N ==0){
            break;
        }
        G = 0;
        for(int i = 1; i < N; i++){
            for(int j = i+1; j <= N; j++){
                G += gcd(i, j);
            }
        }
        cout << G << endl;
    }
    return 0;
}