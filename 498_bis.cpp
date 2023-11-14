#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int main(){
    int x;
    while(cin>>x){
        int n;
        for(n=0;;n++){
            scanf("%d",&a[n]);
            if(getchar()=='\n'){
                break;
            }
        }
        long long sum=0;
        int exp=1;
        for(int i=n-1;i>=0;i--){
            sum+=a[i]*exp*(n-i);
            exp*=x;
        }
        printf("%d\n",sum);// 'cout' could not works in this problem!!!!!!
    }
}