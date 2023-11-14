
// NOTED: 1 degree = 60 minutes = 3600 seconds  <--- Memorize it
// NOTED: arc length = radius * angle (in radians)  <--- Memorize it
// NOTED: chord length = 2 * radius * sin(angle/2)  <--- Memorize it

#include <bits/stdc++.h>

// NOTED: to get the accurate value of PI, you must add this 2 lines !!!(Memorize it)
#include <math.h>
#define _USE_MATH_DEFINES

using namespace std;

int main(){
    double s, a; // NOTED: the `s` and `a` should be double type !!!!!! <--- Memorize it
    string str;
    while(cin >> s >> a >> str) {
        if(str == "min") a /= 60; // convert to degree
        
        if(a > 180) a = 360 - a; // convert to acute angle <--- Memorize it

        double ang = a * M_PI/180; // convert to radian <--- Memorize it

        double arc =  (s + 6440) * ang; // arc length
        double chord = 2 * (s + 6440) * sin(ang/2); // chord length
        printf("%.6f %.6f\n", arc, chord);

    }
    return 0;
}