#include <bits/stdc++.h>
using namespace std;

// Memorize the following function !!!!!!
void bangla(long long num){
    if (num >= 10000000){
        bangla(num / 10000000);
        cout << " kuti";
        num %= 10000000;
    } 
    if (num >= 100000){
        bangla(num / 100000);
        cout << " lakh";
        num %= 100000;
    } 
    if (num >= 1000){
        bangla(num / 1000);
        cout << " hajar";
        num %= 1000;
    } 
    if (num >= 100){
        bangla(num / 100);
        cout << " shata";
        num %= 100;
    } 
    if (num){
        cout << " " << num;
    }
}

int main(){
    long long input_num = 0;
    int count = 0;
    while(cin >> input_num){
        count++;
        cout << setw(4) << count << ".";
        if(input_num){
            bangla(input_num);
        } else {
            cout << " 0";
        }
        cout << endl;
    }
    return 0;
}