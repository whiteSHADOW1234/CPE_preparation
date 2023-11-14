#include <bits/stdc++.h>
using namespace std;

int main(){
    char input_str;
    int count = 0;
    while(cin.get(input_str)){
        if(input_str == '"' && count == 0){
            cout << "``";
            count++;
        }
        else if(input_str == '"' && count == 1){
            cout << "''";
            count--;
        }else{
            cout << input_str;
        }
        
    }
    // system("pause");
    return 0;
}