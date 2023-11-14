// NOTED: the 32th character is space and it counts in this problem
//          So you should use `getline(cin, s)` to read the whole line !!!!!
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int freq[256];
    int max, count = 0;
    while(getline(cin, s)){
        count++;
        // check if this is the second line to output
        if(count > 1){
            cout << endl;
        }

        // initialize
        max = 0;
        for(int i = 0; i < 256; i++){
            freq[i] = 0;
        }

        // Store the frequency of each character into an array
        for(int i = 0; i < s.size(); i++){
            freq[s[i]]++;
            if(freq[s[i]] > max){
                max = freq[s[i]];
            }
        }

        // Output the frequency of each character from the highest to the lowest frequency and character value
        for(int i = 1; i <= max; i++){
            for(int j = 127; j >= 30; j--){
                if(freq[j] == i){
                    cout << j << " " << freq[j] << endl;
                }
            } 
        }
    }
    return 0;
}