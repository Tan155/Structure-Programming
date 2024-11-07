#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int radius;
	float area;
	const float PI = 3.14159;
	
	cin >> radius;
	
	area = (float) PI * (radius * radius);
	cout << fixed << setprecision(2) << area << endl;
	return 0;
}