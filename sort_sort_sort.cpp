// Memorize the compare function which will be used in the sortng algorithm !!!!!!
// NOTED: the "0 0" should be printed at the end of the output, not the end of the input !!!!!!
#include <bits/stdc++.h>
using namespace std;

int m, n;

bool cmp(int a,int b){
    if(a%m==b%m){
        if(a&1==1 && b&1==1){
            return a>b;
        }
        else if((a&1)==0 && (b&1)==0){
            return a<b;
        }
        else{
            return a&1==1;
        }
    }
    return a%m < b%m;
}

int q[1000005];

int main(){
    while(cin >> n >> m){
        if(n == 0 && m == 0){
            break;
        }

        for(int i = 0; i < n; i++){
            cin >> q[i];
        }
        sort(q, q+n, cmp);

        cout << n << " " << m << endl;
        for(int i = 0; i < n; i++){
            cout << q[i] << endl;
        }
    }
    cout << "0 0" << endl;
    return 0;
}