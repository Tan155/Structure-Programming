#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
	int n, count = 0, total_1, total_2, score;
	
	cin >> n;
	
	int a[n][n];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	
	for (int i = 0; i < n-1; i++){
		total_1 = 0;
		total_2 = 0;
		for (int j = 0; j < n; j++){
			total_1 += a[i][j];
			total_2 += a[i+1][j];
		}
		if (total_1 == total_2){
			count = 1;
		}else{
			count = 0;
			break;
		}
	}
	
	if (count){
		cout << "yes";
	}else{
		cout << "no";
	}
	
	return 0;
}