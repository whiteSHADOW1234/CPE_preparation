// https://www.youtube.com/watch?v=O4QL4-4Etf0&ab_channel=%E9%8A%98%E5%82%B3%E5%A4%A7%E5%AD%B8%E8%B3%87%E8%A8%8A%E5%82%B3%E6%92%AD%E5%B7%A5%E7%A8%8B%E5%AD%B8%E7%B3%BB
// calculate a fibonacci sequence array which have 39 elements
// and then convert a decimal number to a fibonacci base number using the array above
#include <bits/stdc++.h>
using namespace std;

int main(){
    int fib[40];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < 40; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
        // cout << i << endl;
    }

    int dis0 = 0;
    int count = 0;
    int num = 0;
    cin >> count;
    for(int i = 0; i < count; i++){
        cin >> num;
        dis0 = 0;
        if(num == 0){
            cout << "0 = (fib)" << endl;
        } else {
            cout << num << " = ";
            for(int j = 39; j >=2 ; j--){
                if (num >= fib[j]){
                    dis0=1;
                    putchar('1');
                    num -= fib[j];
                    // cout << "\nAFTER MINUSING: " << num << "j:" << j << endl;

                } else {
                    if(dis0 == 1){
                        putchar('0');
                    }
                }
            }
            cout << " (fib)" << endl;
        }
    }
    system("pause");
    return 0;
}