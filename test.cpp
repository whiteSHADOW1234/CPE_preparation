#include <bits/stdc++.h>
using namespace std;

int countCycle(int num){
	int cycle = 1;
	while(num != 1){
		cycle++;
		if(num%2 == 1){
			num = 3*num+1;
		} else{
			num /= 2;
		}
	}
	return cycle;
	
}

int main(){
	int num1, num2, max_len = 0;
	
	while(cin >> num1 >> num2){
		if(num1 >= num2){
			int temp = num1;
			num1 = num2;
			num2 = temp;
		}
		for(int i = num1; i <= num2; i++){
			if(max_len < countCycle(i) ){
				max_len = countCycle(i);
			}
		}
		cout << num1 << " " << num2 << " " << max_len << endl;
	}
	return 0;
}
			
		