#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
	int n;
	float a, r, sum;
	
	cin >> a >> r >> n;
	
	for (int i = 0;i < n; i++){
		sum += (float) a * pow(r,i);
	}
	cout << fixed << setprecision(3) << sum;
	return 0;
}