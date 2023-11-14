#include <bits/stdc++.h>
using namespace std;

int main(){
    int count, s, d;
    cin >> count;
    for (int i = 0; i < count; i++){
        cin >> s >> d;
        if(s < d || (s + d) % 2 == 1){ // Their sum must be even because the two numbers must be integers
            cout << "impossible" << endl;
        }else{
            cout << (s + d) / 2 << " " << (s - d) / 2 << endl; // Memorize this formula to calculate the two numbers by knowing their sum and difference
        }
    }
    return 0;
}