#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	int a, b;
	float d;
	char c;
	
	cin >> a >> c >> b;
	
	if (c == '+'){
		cout << a + b;
	}else if (c == '-'){
		cout << a - b;
	}else if (c == '*'){
		cout << a * b;
	}else if (c == '/'){
		d = (float) a / b;
		cout << fixed << setprecision(2) << d;
	}
	return 0;
}