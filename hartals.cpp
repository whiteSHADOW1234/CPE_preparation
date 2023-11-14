// 
#include <bits/stdc++.h>
using namespace std;

int main(){
    // set a template for the days that does not need to work
    int tem[3650] = {0};
    for(int i=0; i<3650; i++){
        if(i % 7 == 5 || i % 7 == 6){
            tem[i] = 10;
        }
    }
    // set an array for hartal
    int hartal[100] = {0};
    int count = 0;
    int days = 0;
    int parties = 0;
    cin >> count;
    for(int i = 0; i < count; i++){
        // copy the template to a new array
        int total_days[3650];
        for (int i = 0; i < 3650; i++) {
            total_days[i] = tem[i];
        }

        // initialize
        hartal[100] = {0};
        days = 0;
        parties = 0;

        // get the input of hartal
        // NOTED: the days start from 1:sunday, 2:monday, 3:tuesday, 4:wednesday, 5:thursday, 6:friday, 7:saturday !!!
        cin >> days >> parties;
        for(int j = 0; j < parties; j++){
            cin >> hartal[j];            
        }
        // set the days that need to work to -1
        for(int k = 0; k < days; k++){ // traverse the days
            for(int l = 0; l < parties; l++){ // traverse the hartal 
                if((k+1) % hartal[l] == 0 && total_days[k] <= 0){// if the day is a multiple of hartal and the day is not a holiday
                    total_days[k] = -1;
                }
            }
        }
        // count the days that need to work
        int sum = 0;
        for(int m = 0; m < days; m++){
            if(total_days[m] == -1){
                sum++;
            }
        }

        cout << sum << endl;
        memset(hartal, 0, sizeof(hartal));
    }
    // system("pause");
    return 0;
}