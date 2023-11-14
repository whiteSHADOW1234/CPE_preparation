#include <bits/stdc++.h>
using namespace std;


int main(){
    long long num = 0;
    while(cin >> num){
        if (num == 0) break;
        while(num > 9){
            long long sum = 0;
            while(num > 0){
                sum += num % 10; // increment sum by the last digit using modulo (%)
                num /= 10; // remove the last digit using division (/)
            }
            num = sum;
        }
        cout << num << endl;
    }
    return 0;
}