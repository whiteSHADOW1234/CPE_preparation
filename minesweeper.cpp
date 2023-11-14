// read user input and modify the field matrix
#include <bits/stdc++.h>
using namespace std;
int field[105][105];

int main(){
    int L, W;
    int turn = 0;
    while(cin >> L >> W){
        if( L == 0 && W == 0) break;
        if (turn != 0) cout << endl;
        turn++;
        memset(field, 0, sizeof(field));
        cout << "Field #" << turn << ":" << endl;

        for(int i = 0; i < L; i++){
            for(int j = 0; j < W; j++){
                char c;
                cin >> c;
                if(c == '*') {
                    for(int k = -1; k <= 1; k++){
                        for(int l = -1; l <= 1; l++){
                            if(i+k >= 0 && i+k <= L && j+l >= 0 && j+l <= W){
                                field[i+k][j+l]++;
                            }
                        }
                    }
                    field[i][j] = -1000;
                }
            }
        }
        for(int i = 0; i < L; i++){
            for(int j = 0; j < W; j++){
                if(field[i][j] < 0) cout << "*";
                else cout << field[i][j];
            }
            cout << endl;
        }

    }
    return 0;
}