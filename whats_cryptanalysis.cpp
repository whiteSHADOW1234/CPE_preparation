// NOTED: Get all the input string and convert them into uppercase
//        Then, count their ocurrences and store them in a map
//        Next, store map elements in a vector of pairs and sort them using custom comparator
//        Use `const auto& pair : char_vector` to iterate through the vector to print out the output.

#include <bits/stdc++.h>
using namespace std;

// Custom comparator function to sort first by character, then by int
bool customComparator(const pair<char, int>& a, const pair<char, int>& b) {
    if (a.second == b.second) {
        return a.first < b.first;  // If the integers are equal, sort by character
    }
    return a.second > b.second;  // Sort by integer in descending order
}

int main() {
    string input = "";
    int count = 0;
    char c;
    cin >> count;


    // read the input and convert all characters to uppercase
    for (int i = 0; i <= count; i++) {
        while (cin.get(c) && c != '\n') {
            if ((c >= 'A' && c <= 'Z')) {
                input += c;
            } else if ((c >= 'a' && c <= 'z')) {
                input += toupper(c);
            }
        }
    }


    // count the occurences of each character
    map<char, int> char_map;

    for (int i = 0; i < input.length(); i++) {
        char_map[input[i]]++;
    }

    // Store map elements in a vector of pairs
    vector<pair<char, int>> char_vector(char_map.begin(), char_map.end());

    // Sort the vector using the custom comparator
    sort(char_vector.begin(), char_vector.end(), customComparator);

    // Print the sorted elements
    for (const auto& pair : char_vector) {
        cout << pair.first << " " << pair.second << endl;
    }

    // system("pause");
    return 0;
}
