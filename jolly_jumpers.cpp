//This is the video thats talking about whats jolly: https://www.youtube.com/watch?v=vho6cEmwDAk&ab_channel=S.Y.Chien

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int length;
    
    while (cin >> length) {
        vector<int> num(length);
        vector<int> differences(length - 1);

        for (int i = 0; i < length; i++) {
            cin >> num[i];
        }

        // Calculate the absolute differences between consecutive elements
        for (int i = 0; i < length - 1; i++) {
            differences[i] = abs(num[i] - num[i + 1]);
        }

        // Sort the differences vector
        sort(differences.begin(), differences.end());

        // Check if the differences are distinct integers from 1 to length-1  <-- Memorize this !!!!!!
        bool is_jolly = true;
        for (int i = 0; i < length - 1; i++) {
            if (differences[i] != i + 1) {
                is_jolly = false;
                break;
            }
        }

        if (is_jolly) {
            cout << "Jolly" << endl;
        } else {
            cout << "Not jolly" << endl;
        }
    }

    return 0;
}
