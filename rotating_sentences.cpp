#include <bits/stdc++.h>
using namespace std;
int main(){
    char str[101][101]={0};
    int row = 0;
    int max_length = 0;
    // NOTED: you can only use 'gets()' to read a string in this question
    //        'cin.getline()' will cause an error   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    while(gets(str[row])){  
        if(strlen(str[row]) > max_length){
            max_length = strlen(str[row]);
        }
        row++;
    }

    for(int k = 0; k < max_length; k++){
        for(int j = row-1; j >= 0; j--){
            if(k >= strlen(str[j])){
                cout << " ";
            }
            else{
                cout << str[j][k];
            }
        }
        cout << endl;
    }
    // system("pause");
    return 0;
}


