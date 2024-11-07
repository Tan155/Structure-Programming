#include<iostream>

using namespace std;

int main(){
	int n, a = 0, b = 1 ,c = 0;
	
	cin >> n;
	if (n == 1){
		cout << a << " " << b;
	}else{
		while (c < n){
			cout << c << " ";
			a = b;
			b = c;
			c = a + b;
		}
	}
	return 0;
}