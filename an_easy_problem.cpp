// https://www.youtube.com/watch?v=4loEaRKBMlY&ab_channel=%E9%8A%98%E5%82%B3%E5%A4%A7%E5%AD%B8%E8%B3%87%E8%A8%8A%E5%82%B3%E6%92%AD%E5%B7%A5%E7%A8%8B%E5%AD%B8%E7%B3%BB
#include <bits/stdc++.h>
using namespace std;

int main(){
    string c;
    int max, a, b, sum;
    while(getline(cin, c) && !cin.eof()){
        max = 1;
        sum = 0;
        bool success = false;
        for (int i = 0; i < c.length(); i++){
            // find the digit of each character
            a = 0;
            if(c[i] >= '0' && c[i] <= '9'){
                a = (c[i] - '0');
            } else if(c[i] >= 'A' && c[i] <= 'Z'){
                a = (c[i] - 'A' + 10);
            } else if(c[i] >= 'a' && c[i] <= 'z'){
                a = (c[i] - 'a' + 36);
            }
            sum += a;
            if(a > max){
                max = a;
            }
        }

        for(int i = max+1; i <= 62; i++){
            if(sum % (i-1) == 0){
                max = i;
                success = true;
                break;
            }
        }

        if(success){
            cout << max << endl;
        } else {
            cout << "such number is impossible!" << endl;
        }

    }
    return 0;
}