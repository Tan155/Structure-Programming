#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	int a, b, c, max, min;
	cin >> a >> b >> c;
	
	if (a > b){
		max = a;
		min = b;
	}else{
		max = b;
		min = a;
	}
	
	if (b > c){
		max = b;
		min = c;
	}else{
		max = c;
		min = b;
	}
	
	if (a < min){
		min = a;
	}
	
	cout << max << " " << min;
	return 0;
}