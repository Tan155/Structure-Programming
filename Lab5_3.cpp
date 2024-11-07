#include<iostream>

using namespace std;

void fun1(int n);

int main(){
	int n;
	cin >> n;
	fun1(n);
	return 0;
}

void fun1(int n){
	if (n == 0){
	}else{
		fun1(n / 2);
		cout << n % 2;
	}
}