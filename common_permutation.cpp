#include <bits/stdc++.h>
using namespace std;

int main(){
    string str1, str2;
    int table1[26] = {0}, table2[26] = {0};

    while(getline(cin, str1) && getline(cin, str2)){
        // store the two strings
        for(int i = 0; i < str1.length(); i++){
            table1[str1[i] - 'a']++;
        }
        for(int i = 0; i < str2.length(); i++){
            table2[str2[i] - 'a']++;
        }
        // print the common permutation
        // NOTED: the output should be in the ascending order !!!!!!
        // NOTED: memorize `for(int j = 0; j < min(table1[i], table2[i]); j++)` !!!!!!
        for (int i = 0; i < 26; i++){
            for(int j = 0; j < min(table1[i], table2[i]); j++){
                cout << (char)('a' + i);
            }
        }
        cout << endl;

        // clear the table
        memset(table1, 0, sizeof(table1));
        memset(table2, 0, sizeof(table2));

    }
    
    return 0;
}