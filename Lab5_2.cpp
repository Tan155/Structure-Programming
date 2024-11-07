#include<iostream>

using namespace std;

int sum(int n);

int main(){
	int n,total;
	cin >> n;
	
	total = sum(n);
	cout << total;
	return 0;
}

int sum(int n){
	int remain, total;
	if (n == 0){
		return n;
	}else{
		return (n % 10) + sum(n / 10); 
	}
}