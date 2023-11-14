// https://www.youtube.com/watch?v=lSh7iT8cnYk&ab_channel=%E9%8A%98%E5%82%B3%E5%A4%A7%E5%AD%B8%E8%B3%87%E8%A8%8A%E5%82%B3%E6%92%AD%E5%B7%A5%E7%A8%8B%E5%AD%B8%E7%B3%BB
// Sort the input array and output the middle element.
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    int count = 0;
    while(cin >> count){
        int inarray = 0;
        int min = 0, max = 0;
        for(int i = 0; i < count; i++){
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        sort(v.begin(), v.end());

        if (count % 2 == 1){// odd
            min = max = v[count/2];
        } else {// even
            min = v[count/2 - 1];
            max = v[count/2];
        }

        // get the session between the min and max in the input array
        for(int i = 0; i < count; i++){
            if (v[i] >= min && v[i] <= max){
                inarray++;
            }
        }

        cout << min << " " << inarray << " " << max-min+1 << endl;
        v.clear();

    }
    return 0;
}