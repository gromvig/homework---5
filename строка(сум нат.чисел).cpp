#include<iostream>
using namespace std;
int sum(char* a, int n) {
	int p = 0;
	int k = 0;
	int m;
	int sum = 0;
	for (int i = n; i >= 0; i--) {
		if (a[i] != '+' && k == 1) {
			switch (a[i]) {
			case '0': m = 0; break;
			case '1': m = 1; break;
			case '2': m = 2; break;
			case '3': m = 3; break;
			case '4': m = 4; break;
			case '5': m = 5; break;
			case '6': m = 6; break;
			case '7': m = 7; break;
			case '8': m = 8; break;
			case '9': m = 9; break;
			default:
				m = 0;
				p--;
			}
			sum += m * pow(10, p++);
		}
		else {
			p = 0;
		}
		if (a[i] == '\0') {
			k = 1;
		}
	}
	return(sum);
}
int main() {
	setlocale(LC_ALL, "Rus");
	cout << "Ввести строку, в которой записана сумма натуральных чисел:";
	const int n = 100;
	char A[n];
	cin.getline(A, 100);
	cout << sum(A, n);
}