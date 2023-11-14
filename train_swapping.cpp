// NOTED: All the array should be fixed size, otherwise it will be wrong !!!!!!
/*
Memorize the bubble sort algorithm:
    n = length(array)
    int swap = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swap++;
            }
        }
    }
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int count = 0;
    int len = 0;
    cin >> count;
    for(int i = 0; i < count; i++){
        cin >> len;
        int train[50] = {0};
        for(int j = 0; j < len; j++){
            cin >> train[j];
        }
        int swap = 0;
        // bubble sort
        for(int j = 0; j < len; j++){
            for(int k = 0; k < len - 1; k++){
                if(train[k] > train[k + 1]){
                    int temp = train[k];
                    train[k] = train[k + 1];
                    train[k + 1] = temp;
                    swap++;
                }
            }
        }
        cout << "Optimal train swapping takes " << swap << " swaps." << endl;
    }
    return 0;
}