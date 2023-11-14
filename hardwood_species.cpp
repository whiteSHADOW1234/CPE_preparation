// Memorize this code, only this works !!!!!!
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    getchar();
    getchar();
    while(t--){
        map<string, int> record;
        string tree;
        int n = 0;
        while(getline(cin, tree)){
            if(tree.compare("") == 0) break;
            record[tree]++;
            n++;
        }
        for(auto it = record.begin(); it != record.end(); it++){
            cout << it->first << " " << fixed << setprecision(4) << (double)it->second / n * 100 << endl;
        }
        if(t) cout << endl;
    }
    return 0;
}