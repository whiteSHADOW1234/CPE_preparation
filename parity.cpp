#include <bits/stdc++.h>
using namespace std;   

int main(){
    int dis0 = 0;
    int num = 0;
    while(cin >> num){
        dis0 = 0;
        if (num == 0){
            // cout << "The parity of 0 is 0 (mod 2)." << endl;
            break;
        } else {
            cout << "The parity of ";
            //convert the number to binary using vector's push_back()
            vector<int> binary;
            while(num != 0){
                binary.push_back(num % 2);
                num /= 2;
            }

            //print the binary number in reverse order of the vector
            // and also count the number of 1's
            for (int i = binary.size() - 1; i >= 0; i--){
                cout << binary[i];
                if (binary[i] == 1){
                    dis0++;
                }
            }
            
            cout << " is " << dis0 << " (mod 2)." << endl;
        }

    }
    return 0;
}