// https://www.youtube.com/watch?v=pnzB5qHfzlM&ab_channel=%E9%8A%98%E5%82%B3%E5%A4%A7%E5%AD%B8%E8%B3%87%E8%A8%8A%E5%82%B3%E6%92%AD%E5%B7%A5%E7%A8%8B%E5%AD%B8%E7%B3%BB
/* First, declare four arrays: 
        finger[15][11] is to recode every used finger in each chord,
        code[255] is to recode the index of every chord in the finger array,
        state[11] is to recode the state of every finger (0 is not press, 1 is press),
        num[11] is to recode the number of every finger.
*/
// NOTED: Only `finger[temp][j] == 1 && state[j] == 0` will be counted, because if the finger is already pressed, it will not be counted again.
// NOTED: you can only initializethe array with const int, or you will get an error (so code array must be in main function)
#include <bits/stdc++.h>
using namespace std;
int finger[15][11]={
    {0,0,0,0,0,0,0,0,0,0, 0},
    {0,0,1,1,1,0,0,1,1,1,1},// c
    {0,0,1,1,1,0,0,1,1,1,0},// d
    {0,0,1,1,1,0,0,1,1,0,0},// e
    {0,0,1,1,1,0,0,1,0,0,0},// f
    {0,0,1,1,1,0,0,0,0,0,0},// g
    {0,0,1,1,0,0,0,0,0,0,0},// a
    {0,0,1,0,0,0,0,0,0,0,0},// b
    {0,0,0,1,0,0,0,0,0,0,0},// C
    {0,1,1,1,1,0,0,1,1,1,0},// D
    {0,1,1,1,1,0,0,1,1,0,0},// E
    {0,1,1,1,1,0,0,1,0,0,0},// F
    {0,1,1,1,1,0,0,0,0,0,0},// G
    {0,1,1,1,0,0,0,0,0,0,0},// A
    {0,1,1,0,0,0,0,0,0,0,0} // B
};

// record the index of every finger
int code[255];


// record the state of every finger
int state[11];

// record the number of every finger
int num[11];

void counting(string chord){
    int temp;
    for(int i = 0; i < chord.length(); i++){
        temp = code[chord[i]];
        for(int j = 1; j < 11; j++){
            // finger[][]=1 촑머ヶ; state[]=0 촑�{쫇줄쮁ヶ
            if(finger[temp][j] == 1 && state[j] == 0){
                state[j] = 1;
                num[j]++;
            }
            // finger[][]=0 촑머⑾; state[]=1 촑�{쫇줄쫇ヶ
            if(finger[temp][j] == 0){
                state[j] = 0;
            }

        }
    }
    for(int i = 1; i < 11; i++){
        cout << num[i];
        if(i != 10){
            cout << " ";
        } else {
            cout << endl;
        }
    }

}


int main(){
    code['c'] = 1;
    code['d'] = 2;
    code['e'] = 3;
    code['f'] = 4;
    code['g'] = 5;
    code['a'] = 6;
    code['b'] = 7;
    code['C'] = 8;
    code['D'] = 9;
    code['E'] = 10;
    code['F'] = 11;
    code['G'] = 12;
    code['A'] = 13;
    code['B'] = 14;
    int count = 0;
    cin >> count;
    // cout << count << endl;
    cin.ignore();
    for(int i = 0; i < count; i++){
        string chord;
        // cin >> chord;
        getline(cin, chord);
        counting(chord);
        memset(state, 0, sizeof(state));
        memset(num, 0, sizeof(num));
    }
    // system("pause");
    return 0;
}