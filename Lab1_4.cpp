#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int h, m, s, second;
	int remain;
	
	cin >> second;
	h = second / 3600;
	remain = second % 3600;
	m = remain / 60;
	s= remain % 60;
	cout << h << " " << m << " " << s;
	return 0;
}