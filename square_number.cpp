// Use `ceil`, `floor`, and `sqrt` to solve the problem.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, count;
    while(cin >> a >> b){
        if(a == 0 && b == 0){
            return 0;
        }
        count = 0;
        a = ceil(sqrt(a));
        b = floor(sqrt(b));
        count = b - a + 1;
        cout << count << endl;
    }
    return 0;

}