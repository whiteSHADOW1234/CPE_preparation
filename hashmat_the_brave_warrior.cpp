// Just simpliy output the difference between two numbers
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int my_army, enemy_army;// use long long int to avoid overflow when the input is 2^32
    while(cin >> my_army >> enemy_army){
        cout << abs(my_army - enemy_army) << endl;
    }
    return 0;
}