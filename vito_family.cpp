#include <bits/stdc++.h>
using namespace std;
// main idea: find the median of the street numbers, then calculate the total distance
int main(){
    int count, stcount, stnum; 
    // count = number of test cases, stcount = number of streets, stnum = street number
    vector<int> street;// use vector to store street numbers (because it has push_back function and sort function)
    cin >> count;

    for (int i = 0; i < count; i++){
        cin >> stcount;

        for(int j = 0; j < stcount; j++){
            cin >> stnum;
            street.push_back(stnum);
        }

        sort(street.begin(), street.end());
        int total = 0;
        // calculate the total distance
        for(int k = 0; k < stcount; k++){
            total += abs(street[k] - street[stcount/2]);
        }
        cout << total << endl;
        street.clear();// clear the vector for next test case
    }
    // system("pause");
    return 0;
}