#include<iostream>
using namespace std;

int main(){
	int n, max, maximum;
	
	cin >> n;
	int a[n];
	
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	for (int i = 0; i < 1; i++){
		max = a[i];
		for (int j = n-1; j > i; j--){
			if (max > a[j]){
				maximum = max;
			}else{
				max = a[j];
				maximum = a[j];
			}
		}
	}
	
	cout << maximum;
	
	return 0;
}