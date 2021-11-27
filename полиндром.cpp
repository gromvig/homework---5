#include<iostream>
#include<string>
#include<string.h>
using namespace std;
void polindrom(string a) {
	for (int i = 0; i < a.length() / 2; i++) {
		if (a[i] != a[a.length() - i - 1]) {
			cout << "Строка  не является полиндромом";
			return;
		}
	}
	cout << "Строка является полиндромом";
}
	int main() {
		setlocale(LC_ALL, "Rus");
		cout << "Введите символьную строку:";
		string a;
		cin >> a;
		polindrom(a);
	}
