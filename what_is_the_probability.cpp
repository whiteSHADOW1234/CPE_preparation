#include <bits/stdc++.h>
using namespace std;
// https://kai-y.medium.com/uva-10056-what-is-the-probability-2985ac5d50cb
// ※假設獲勝機率：p、輸機率：q=1-p，每次遊戲有n個人參與遊戲、第k個人獲勝。
// ※使用等比級數整理每個回合獲勝的機率就可以獲得此公式：(q^(k-1)*p)/ (1-q^n)。(首項：(q^(k-1)*p)、公比：q^n)
int main(){
    int sets, players, winner;
    double prob, q;
    double ans, round;
    cin >> sets;
    for (int i = 0; i < sets; i++){
        cin >> players >> prob >> winner;
        if(prob == 0){
            ans = 0;
        } else{
            q = 1 - prob;
            ans = pow(q, winner - 1)*prob / (1 - pow(q, players));
        }
        cout << fixed << setprecision(4) << ans << endl;
    }
    return 0;
}