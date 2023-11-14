// Use string to store the large number
// and use to_string() to get the large number's length
#include <bits/stdc++.h>
using namespace std;

int main(){
    string input;
    while(cin >> input){
        int depth = 0, current_num = 0;
        if(input == "0") break;
        else if (input == "9"){
            cout << "9 is a multiple of 9 and has 9-degree 1." << endl;
        } else {
            depth += 1;
            for (int i = 0; i < input.length(); i++){
                current_num += input[i] - '0';
            }
            while(to_string(current_num).length() >= 2){
                int temp = current_num;
                current_num = 0;
                for (int i = 0; i < to_string(temp).length(); i++){
                    current_num += to_string(temp)[i] - '0';
                }
                depth += 1;
            }

            if(current_num == 9){
                cout << input << " is a multiple of 9 and has 9-degree " << depth << "." << endl;
            } else {
                // cout << "current_num: " << current_num << endl; 
                cout << input << " is not a multiple of 9." << endl;
            }
        }
        

    }
    return 0;
}