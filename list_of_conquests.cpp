// NOTED: By default, a Map in C++ is sorted in increasing order based on its key!!!
#include <bits/stdc++.h>
using namespace std;

map<string, int> country_map;
char name[75];  // NOTED: 75 is the maximum length of a name!!!!!!! And the name did not only contains first name and last name, it may contains middle name too.
int main(){
    string count="";
    string country_name="";
    cin >> count;
    for (int i = 0; i < stoi(count); i++)
    {
        cin >> country_name;
        country_map[country_name]++;
        cin.getline(name, 75);
    }
    
    // sort the map by country name in alphabetical order A to Z
    for(auto it = country_map.begin(); it != country_map.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    // system("pause");
    return 0;
}