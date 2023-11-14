// // NOTED: You should build a move array which is a 2D array to store the move of the robot
// //        You should initialize the world array or this will fail
// //        You should check the move is valid or not
// //        You should check the robot is lost or not
// //        You should check the robot is lost or not before move forward
// //        You should build a array to record the direction of the robot (N, E, S, W)
#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, n, x1, x2, y1, y2, dir;
    string temp = "";
    int move[4][2] = {{1,0}, {0, -1}, {-1, 0},{0, 1}};
    int world[51][51]={}; // Initialize all elements to 0 <--- NOTED: You should initialize the array or this will fail
    char orient[5] = "ESWN";
    cin >> m >> n;
    while(cin >> x1 >> y1 >> temp){
        switch (temp[0])
        {
        case 'N':
            dir = 3;
            break;
        case 'E':
            dir = 0;
            break;
        case 'S':
            dir = 1;
            break;
        case 'W':
            dir = 2;
            break;
        }
        cin >> temp;
        int lost = 0;
        for(int i = 0; i < temp.length(); i++){
            if(temp[i] == 'R'){
                dir = (dir + 1) % 4;
            }
            else if(temp[i] == 'L'){
                dir = (dir + 3) % 4;
            }
            else if (temp[i] == 'F'){
                // move forward one step
                x2 = x1 + move[dir][0];
                y2 = y1 + move[dir][1];

                // check is it valid or not
                if(x2 < 0 || x2 > m || y2 < 0 || y2 > n){
                    if(world[x1][y1] == 0){
                        world[x1][y1] = 1;
                        cout << x1 << " " << y1 << " " << orient[dir] << " LOST" << endl;
                        lost = 1;
                        break;
                    }
                }
                else{
                    x1 = x2;
                    y1 = y2;
                }
            }
        }
        if(lost == 0){
            cout << x1 << " " << y1 << " " << orient[dir] << endl;
        }

    }
    return 0;
}
