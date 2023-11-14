#include <iostream>
#include <string>
using namespace std;

// Function to replace a character with the two characters to its left on the keyboard
char replaceChar(char c) {
    // Define the keyboard layout
    string keyboard = "1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";

    // Find the position of the character in the keyboard layout
    size_t pos = keyboard.find(c);

    // If the character is found in the keyboard layout, replace it
    if (pos != string::npos) {
        // NOTED: If the text is not found, find() returns "string::npos" to indicate that the substring was not found.
        // Handle special case for '1' and '`' to avoid negative index
        if (pos == 0)
            return c;
        else
            return keyboard[pos - 2];
    } else {
        // Character not found in the keyboard layout, return it as is
        return c;
    }
}

int main() {
    string input;
    getline(cin, input);

    string transformedString = "";

    // Iterate through each character in the input string and replace it
    for (char c : input) {
        // detect the char is upper case or lower case, if it's upper case, convert it to lower case
        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }
        transformedString += replaceChar(c);
    }
    cout << transformedString << endl;
    // system("pause");
    return 0;
}
