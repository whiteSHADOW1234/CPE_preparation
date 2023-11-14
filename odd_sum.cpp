#include <bits/stdc++.h>
using namespace std;

int main(){
    int count = 0, start, end;
    long long sum = 0;
    cin >> count;
    for (int i = 0; i < count; i++){
        cin >> start >> end;
        while(start <= end){
            if(start % 2 == 1){
                sum += start;
            }
            start++;
        }
        cout << "Case " << i + 1 << ": ";
        cout << sum << endl;
        sum = 0;

    }
    // system("pause");
    return 0;
}