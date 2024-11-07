#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	float w, h, bmi;
	
	cin >> w >> h;
	bmi = (float) w / (h * h);
	
	if (bmi >= 30.0){
		cout << "Obese";
	}else if (bmi >= 25.0){
		cout << "Overweight";
	}else if (bmi >= 18.6){
		cout << "Normal weight";
	}else{
		cout << "underweight";
	}
	return 0;
}