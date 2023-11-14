// Use a bool array to record the sum of two numbers in the sequence.
// If the sum is repeated, then it is not a B2-Sequence.
// NOTED: The error handling while reading the input is required.
#include <bits/stdc++.h>
using namespace std;

int main(){
    int numlen = 0, count = 0;
    while (cin >> numlen){
        count++;
        bool legal = true;
        bool repeat[20002] =  {false};
        int input[101];
        for(int i = 0; i < numlen; i++){
            cin >> input[i];
            if(input[i] < 1){
                legal = false;
            }
            if(i > 0 && input[i] <= input[i-1]){
                legal = false;
            }
        }
        if(legal){
            for(int i = 0; i < numlen; ++i){
                for(int j = i; j < numlen; ++j){
                    int sum = input[i] + input[j];

                    if(repeat[sum]){
                        legal = false;
                        break;
                    }else{
                        repeat[sum] = true;
                    }
                }
            }
        }


        if(legal){
            cout << "Case #"<< count <<": It is a B2-Sequence.\n"<< endl;
        } else{
            cout << "Case #"<< count <<": It is not a B2-Sequence.\n"<< endl;
        }
    }
    return 0;
}