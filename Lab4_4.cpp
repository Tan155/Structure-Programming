#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
	int n, total;
	cin >> n;
	int a[n][n], b[n][n], c[n][n];
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin >> b[i][j];
		}
	}
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			c[i][j] = 0;
			total = 0;
			for (int k = 0; k < n; k++){
				total += a[i][k] * b[k][j];
				c[i][j] = total;
			}
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}