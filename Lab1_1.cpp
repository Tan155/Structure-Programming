#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	float fahrenheit, celsius;
	
	cin >> fahrenheit;
	
	celsius = (fahrenheit - 32.0) * (5.0 / 9.0);
	
	cout << fixed << setprecision(2) << celsius;
	return 0;
}