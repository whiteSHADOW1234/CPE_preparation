#include <bits/stdc++.h>
using namespace std;
// https://kai-y.medium.com/uva-10056-what-is-the-probability-2985ac5d50cb
// �����]��Ӿ��v�Gp�B����v�Gq=1-p�A�C���C����n�ӤH�ѻP�C���B��k�ӤH��ӡC
// ���ϥε���żƾ�z�C�Ӧ^�X��Ӫ����v�N�i�H��o�������G(q^(k-1)*p)/ (1-q^n)�C(�����G(q^(k-1)*p)�B����Gq^n)
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