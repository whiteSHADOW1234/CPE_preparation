#include <iostream>
#include <ctime> // NOTED: you have to include this header file 'ctime' to use 'mktime()'
using namespace std;

int main() {
    int year=2011, month, day, count;
    cin >> count;
    for (int i=0; i<count; i++) {
        cin >> month;
        cin >> day;

        // Create a tm struct with the input values (Memorize this snippet)
        tm timeinfo = {};
        timeinfo.tm_year = year - 1900; // Years since 1900
        timeinfo.tm_mon = month - 1;    // Months are zero-based
        timeinfo.tm_mday = day;

        // Calculate the day of the week (0=Sunday, 1=Monday, ..., 6=Saturday)
        mktime(&timeinfo);
        int dayOfWeek = timeinfo.tm_wday;

        // Array of day names
        const char* days[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

        // Print the day of the week
        cout << days[dayOfWeek] << endl;
    }
    
    // system("pause");
    return 0;
}
