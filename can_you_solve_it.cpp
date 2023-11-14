// https://www.youtube.com/watch?v=mgoIwBhOx2A&ab_channel=%E9%8A%98%E5%82%B3%E5%A4%A7%E5%AD%B8%E8%B3%87%E8%A8%8A%E5%82%B3%E6%92%AD%E5%B7%A5%E7%A8%8B%E5%AD%B8%E7%B3%BB
// NOTED: The formula for this question is "(x+y) * ((x+y) + 1) / 2 + x"
// NOTED: `long long int` is used to avoid overflow !!!
#include <bits/stdc++.h>
using namespace std;
long long int loc(long long int x, long long int y){
    return ((x+y) + 1)*(x+y)/2 + x;
}

int main(){
    long long int count, x1, y1, x2, y2;
    cin >> count;
    for(int i = 0; i < count; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        cout << "Case " << i+1 << ": " <<loc(x2, y2) - loc(x1, y1) << endl;
    }
    return 0;
}