//Плоткин Роман
#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>
using namespace std;
int main() {
	//задание 4
	/*const int n = 3;
	int mas[n][n];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			mas[i][j] = rand() % 81 - 40;
		}
	}
	cout << "matrix\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << setw(4) << mas[i][j];
		}
		cout << endl;
	}
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (mas[i][n - 1 - i] % 2 != 0) {
			k++;
		}
	}
	cout << k << endl;
		return 0;*/
	//задание 3
	/*const int n = 3;
	int mas[n][n];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			mas[i][j] = rand() % 61 - 30;
		}
	}
	cout << "matrix\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << setw(4) << mas[i][j];
		}
		cout << endl;
	}
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (mas[i][i] >0) {
			k++;
		}
	}
	cout << k << endl;
	return 0;*/
	const int n = 3;
const int m = 5;
int mas[n][m];
srand(time(0));
for (int i = 0; i < n; i++) {
	for(int j=0;j<m;j++){
		mas[i][j] = rand() % 41 - 20;
	}
}
cout << "matrix\n";
for (int i = 0; i < n; i++) {
	for (int j = 0; j < m; j++) {
		cout << setw(4) << mas[i][j];
	}
	cout << endl;
}
int k;
cin >> k;
int sum = 0;
for (int p = 0; p < n; p++) {
	cout << mas[p][k] << ' ';
	sum = mas[p][k] + sum;
	cout << sum << endl;
}
}