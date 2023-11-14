#include <bits/stdc++.h>
using namespace std;
// The function thats finds the gcd of two numbers (Memorize this !!!!!!)
int gcd(int n, int m){
    if(n% m == 0){
        return m;
    }
    return gcd(m, n%m);
}

int main(){
    int count = 0;
    string s1, s2;
    int n, m;
    cin >> count;
    for(int i = 0; i < count; i++){
        cin >> s1 >> s2;

        // Turn the binary string into decimal (Memorize this !!!!!)
        n = stoi(s1, nullptr, 2);
        m = stoi(s2, nullptr, 2);

        int g = gcd(n, m);

        if(g == 1){
            cout << "Pair #" << i+1 << ": Love is not all you need!" << endl;
        }else{
            cout << "Pair #" << i+1 << ": All you need is love!" << endl;
        }
    }
    return 0;
}