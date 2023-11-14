// https://www.youtube.com/watch?v=z8cM3pTXqUI&ab_channel=%E9%8A%98%E5%82%B3%E5%A4%A7%E5%AD%B8%E8%B3%87%E8%A8%8A%E5%82%B3%E6%92%AD%E5%B7%A5%E7%A8%8B%E5%AD%B8%E7%B3%BB
#include <bits/stdc++.h>
using namespace std;

int main(){
    int count = 0;
    int min_cost = 2000000000;
    int cheaplistindex = 0;
    int cheapestlist[36]={0};
    cin >> count;
    int cost[36]={0};
    for(int i = 1; i <= count; i++){
        cout << "Case " << i << ":" << endl;

        // store all the cost of each elements in an array
        for(int j = 0; j < 36; j++){
            cin >> cost[j];
        }
        int times = 0;
        cin >> times;
        while(times--){
            int num = 0;
            cin >> num;
            min_cost = 2000000000;
            cheaplistindex = 0;

            for(int j = 2; j <= 36; j++){
                int temp = num;
                int sum = 0;

                // calculate the cost of each base
                while(temp){
                    sum += cost[temp%j];
                    temp /= j;
                }

                // compare the cost of each base
                if(sum < min_cost){
                    min_cost = sum;
                    cheapestlist[0] = j;
                    cheaplistindex = 1;
                } else if (sum == min_cost){
                    cheapestlist[cheaplistindex++] = j;
                }

            }
            cout << "Cheapest base(s) for number " << num << ":";
            for(int k = 0; k < cheaplistindex; k++){
                cout << " " << cheapestlist[k];
            }
            cout << endl;
        }
        if(i != count){
            cout << endl;
        }

    }
    return 0;
}