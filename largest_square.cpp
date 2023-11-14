// https://www.youtube.com/watch?v=a33aDBfUZzA&ab_channel=%E9%8A%98%E5%82%B3%E5%A4%A7%E5%AD%B8%E8%B3%87%E8%A8%8A%E5%82%B3%E6%92%AD%E5%B7%A5%E7%A8%8B%E5%AD%B8%E7%B3%BB
// Build a isSquare function to check if the square is valid
// NOTED: The square's side length is 2*radius-1 !!!
#include <bits/stdc++.h>
using namespace std;

char mmapp[100][100];
// int top, bottom, left, right;
int W,H;

bool isSquare(int x, int y, int rad){
    int top = x - rad;
    int bottom = x + rad;
    int left = y - rad;
    int right = y + rad;
    if(top < 0 || bottom >= H || left < 0 || right >= W){
        return false;
    }
    char center = mmapp[x][y];
    for(int i = top; i <= bottom; i++){
        for(int j = left; j <= right; j++){
            if(mmapp[i][j] != center){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int count = 0;
    int centers = 0;
    cin >> count;
    for(int i = 0; i < count; i++){
        cin >> H >> W >> centers;
        for(int j = 0; j < H; j++){
            // gets(mmapp[j]);
            for(int k = 0; k < W; k++){
                cin >> mmapp[j][k];
            }
        }
        cout << H <<" "<< W <<" "<< centers << endl;
        for(int j = 0; j < centers; j++){
            int x, y;
            cin >> x >> y;
            int rad = 0;
            while(isSquare(x, y, rad)){
                rad++;
            }
            cout << rad*2-1 << endl;
        }
    }
    // system("pause");
    return 0;
}