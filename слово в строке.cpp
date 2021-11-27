#include<iostream>
#include<string>
#include<string.h>
#include<windows.h>
using namespace std;
int F(string a, string b) {
	int c = 0;
	int k = 0;
	int d = b.length();
	while (1) {
		c = a.find(b, c);
		if (c < 0) {
			return(k);
		}
		c += d;
		k++;
	}
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Введите строку:\n";
	string a, b;
	getline(cin, a);
	cout << "Введите слово для поиска в строке:\n";
	cin >> b;
	cout << "Заданное слово входит в строку " << F(a,b) << " раз";
	return(0);
}