#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
	int n, t, count = 0;
	
	cin >> n >> t;
	int a[n];
	
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	for (int i = 0; i < n; i++){
		for (int j = n-1; j > i; j--){
			if (a[i] + a[j] == t){
				count++;
			}
		}
	}
	
	if (count){
		cout << count;
	}else{
		cout << "-1";
	}
	return 0;
}