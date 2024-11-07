#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int a, b, c;
	float average;
	cin >> a >> b >> c;
	average = (float) (a + b + c) / 3;
	cout << fixed << setprecision(3) << average<< endl;
	return 0;
}