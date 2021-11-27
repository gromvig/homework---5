#include<iostream>
#include<string>
#include<string.h>
#include<windows.h>
using namespace std;
void FIO(string a) {
	string c = " ";
	string b = "";
	int i = 0;
	int k = 0;
	while (i < a.length()) {
		if (a[i] != ' ') {
			if (k == 0) {
				c += a[i];
			}
		}
		else k++;
		if (a[i] == ' ' && (k > 0) && a[i + 1] != ' ') {
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
	string  a;
	getline(cin,a);
	FIO(a);
}