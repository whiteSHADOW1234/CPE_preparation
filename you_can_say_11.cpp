// The method to solve this problem is to calculate the sum of the digits in the odd places and the sum of the digits in the even places, 
// and then calculate the difference between the two sums. 
// If the difference is a multiple of 11, then the original number is a multiple of 11.

#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while(cin >> s){
        if (s == "0"){
            break;
        }
        long int Lnum=0, Rnum=0;
        for (int i = 0; i < s.length(); i++){
            if (i % 2 == 0){
                Lnum += (int)s[i] - (int)'0';
            }else{
                Rnum += (int)s[i] - (int)'0';
            }
        }
        if(abs(Lnum - Rnum) %11 == 0){
            cout << s << " is a multiple of 11." << endl;
        }else{
            cout << s << " is not a multiple of 11." << endl;
        }

    }
    return 0;
}