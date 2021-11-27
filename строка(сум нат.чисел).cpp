#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int sum(string a) {
	int b = 0;
	string c = "";
	for (int i = 0; i < a.length(); i++) {
		if (a[i] != '+') {
			c += a[i];
		}
		else {
			b += stoi(c.empty() ? "0" : c);
			c = "";
		}
	}
	b += stoi(c.empty() ? "0" : c);
	return(b);
}
int main() {
	setlocale(LC_ALL, "Rus");
	cout << "Ввести строку, в которой записана сумма натуральных чисел:";
	string a;
	cin >> a;
	cout << sum(a);
}