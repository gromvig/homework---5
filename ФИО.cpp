#include<iostream>
#include<windows.h>
using namespace std;
void FIO(char* a, int n) {
	string c = " ";
	string b = "";
	int i = 0;
	int k = 0;
	while (i < n) {
		if (a[i] != ' ') {
			if (k == 0) {
				c += a[i];
			}
		}
		else k++;
		if (a[i] == ' '  && a[i + 1] != ' ') {
			b = b + a[i + 1] + '.';
			if (k > 1) {
				cout << b << c;
				return;
			}
		}
		i++;
	}
}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Введите с клавиатуры в одну строку фамилию, имя и отчество, разделив их пробелом:\n";
	const int n = 100;
	char A[n];
	cin.getline(A, 100);
	FIO(A,n);
}