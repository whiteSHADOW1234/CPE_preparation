// NOTED: Do not use recursion to solve this problem, it will cause time limit exceeded !!!
//          Use the while loop instead !!!
#include <bits/stdc++.h>
using namespace std;

// this swap function takes two pointers as parameters, and swap the values of the two pointers
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp; 
}

// This function counts the cycle length of a number using a while loop
int countCycle(int i){
    int count = 1;
    while(i != 1){
        if (i%2 == 0){
            i /= 2;
        }
        else{
            i = 3*i + 1;
        }
        count++;
    }
    return count;
}

int main(){
    int num1, num2;
    while(cin >> num1 >> num2){// use "cin >> num1 >> num2" to avoid the input of EOF
        cout << num1 << " " << num2 << " ";
        if (num1 > num2){
            swap(&num1, &num2);// Or you can just write a swap in here
        }

        int max_len = 0;
        for(int i =num1; i <= num2; i++){
            int len = countCycle(i);
            if (len > max_len){
                max_len = len;
            }
        }
        cout << max_len << endl;
    }
    return 0;
}