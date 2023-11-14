// Make sure there is no extra whitespace or newline characters at the end of the output !!!!!!!!
// you should consider the case when m = 1 or n = 1 or m > n
// Use a vector to get the result and print it out at the end
#include <bits/stdc++.h>
using namespace std;

int main() {
    bool success = true;
    vector<int> result;
    int n, m;
    while (cin >> n >> m) {
        if (m <= 1 || n <= 1 || m > n) {
            cout << "Boring!" << endl;
        } else {
            success = true;
            result.clear();
            result.push_back(n);
            while (n != 1) {
                if (n % m == 0) {
                    result.push_back(n / m);
                    n = n / m;
                } else {
                    success = false;
                    break;
                }
            }
            if (success) {
                for (int i = 0; i < result.size(); i++) {
                    cout << result[i];
                    if (i < result.size() - 1) {// This is the key !!!!!!
                        cout << " ";
                    }
                }
                cout << endl;
            } else {
                cout << "Boring!" << endl;
            }
        }
    }
    return 0;
}
