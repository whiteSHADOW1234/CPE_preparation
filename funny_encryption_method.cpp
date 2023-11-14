#include <bits/stdc++.h>
using namespace std;

int main(){
    int count = 0;
    int num = 0;
    cin >> count;
    for(int i =0; i < count; i++){
        cin >> num;
        int b1 = 0, b2 = 0;
        int temp = num;
        // Calculate decimal to binary
        while(num != 0){
            if(num % 2 == 1){
                b1++;
            }
            num /= 2;
        }
        // Calculate hex to binary
        // By knowing that hex is 4 bits and binary is 1 bit
        // We can just convert each hex digit to binary
        // and add them up
        // NOTED: There's no 'A', 'B', 'C', 'D', 'E', 'F' in this example!!!
        while(temp != 0){
            int rem = temp % 10;
            while(rem != 0){
                if(rem % 2 == 1){
                    b2++;
                }
                rem /= 2;
            }
            temp /= 10;
        }

        cout << b1 << " " << b2 << endl;
    }
    return 0;
}