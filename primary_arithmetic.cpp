# include <bits/stdc++.h>
using namespace std;
int main(){
    int num1, num2;
    
    while(cin >> num1 >> num2){
        if (num1 == 0 && num2 == 0){
            return 0;
        }
        int carry = 0, count = 0;
        while(num1 != 0 || num2 != 0){
            if(num1%10 + num2%10 + carry >= 10){ // NOTED: use "%" operator to get the last digit of a number
                count++;
                carry = 1;
            }
            else{
                carry = 0;
            }
            // update the number
            num1 /= 10;
            num2 /= 10;
        }
        if (count == 0){
            cout << "No carry operation." << endl;
        }
        else if (count == 1){
            cout << "1 carry operation." << endl;
        }
        else{
            cout << count << " carry operations." << endl;
        }
    }
    return 0;
}