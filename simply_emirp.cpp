// First, build a function to check if a number is prime.
// Then, check if the reverse number is emirp.
// NOTED: To check is emirp, the reverse number should not be the same as the original number !!!!!!

#include <bits/stdc++.h>
using namespace std;
bool isPrime(int num){
    if(num == 1) return false;
    for(int i = 2; i <= sqrt(num); i++){
        if(num % i == 0) return false;
    }
    return true;
}


int main(){
    int num = 0;
    while(cin >> num){
        if(isPrime(num)){
            int rev = 0;
            int temp = num;
            while(temp != 0){
                rev = rev * 10 + temp % 10;
                temp /= 10;
            }
            if(isPrime(rev) && rev != num){ // The reverse number should not be the same as the original number !!!!!!
                cout << num << " is emirp." << endl;
            } else {
                cout << num << " is prime." << endl;
            }
        } else {
            cout << num << " is not prime." << endl;
        }

    }
    return 0;
}