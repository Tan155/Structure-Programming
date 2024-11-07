#include<iostream>

using namespace std;
void reverse(int n);
int main(){
	int n;
	cin >> n;
	reverse(n);
	return 0;
}

void reverse(int n){
	if (n == 0){
	}else{
		cout << n%10;
		reverse(n / 10);
	}
}