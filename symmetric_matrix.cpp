// store all the inputs in a 1D array, and check for symmetry

#include <bits/stdc++.h>
using namespace std;

int main(){
    char ch;
    int count = 0;
    int turns = 0;
    int success = 1;
    cin >> turns;
    // cout << "TURNS: " << turns << endl;
    for(int k = 0; k < turns; k++){
        cin.ignore();
        scanf("N = %d", &count);
        long long int matrix1[count*count] = {0};
        for(int i = 0; i < count*count; i++){
            cin >> matrix1[i];
            if (matrix1[i] < 0){
                success = 0;
            }
        }
        
        // cout << "count: " << count << endl;
        if(success != 0){
            for(int i = 0; i < count*count/2; i++){
                    if(matrix1[i] != matrix1[count*count-i-1]){
                        // cout << i << ": " << matrix1[i] << " " << matrix1[count*count-i-1] << endl;
                        success = 0;
                        break;
                    }
                
            }
        }
        if(success == 0){
            cout << "Test #" << k + 1 << ":" << " Non-symmetric." << endl;
            success = 1;
        }else{
            cout << "Test #" << k + 1 << ":" << " Symmetric." << endl;
        }
    }

    // system("pause");
    return 0;
}