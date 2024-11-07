#include<iostream>

using namespace std;

int main(){
	int n, remain;
	
	cin >> n;
	
	while (n){
		remain = n % 10;
		cout << remain;
		n /= 10;
	}
	return 0;
}