#include<iostream>

using namespace std;

int main(){
	int number, total, flag;
	cin >> number;
	
	for (int i = 0; i < number; i++){
		cin >> total;
		flag = 0;
		if (total == 0){
			flag = 1;
		}else{
			for (int j = 2; j < total; j++){
				if (total % j == 0){
					flag = 0;
					break;
				}else{
					flag = 1;
				}
			}
		}
		
		if (flag){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
	}
	return 0;
}