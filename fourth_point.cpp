// NOTED: the way to find the fourth point of parallelogram is a + c - b
#include <bits/stdc++.h>
using namespace std;

int main(){
    double x1, y1, x2, y2, x3, y3, x4, y4;
    while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4){
        // a + c + 2b
        double sumx = x1 + x2 + x3 + x4;
        double sumy = y1 + y2 + y3 + y4;
        // a + c + 2b - 3b = a + c - b
        if((x1 == x3 && y1 == y3) || (x1 == x4 && y1 == y4)){
            // (x1, y1) is the repeated point
            sumx -= 3 * x1;
            sumy -= 3 * y1;
        } else {
            // (x2, y2) is the repeated point
            sumx -= 3 * x2;
            sumy -= 3 * y2;
        }

        cout << fixed << setprecision(3) << sumx << " " << sumy << endl;
    }
    return 0;
}