#include<iostream>
#include<string>
#include<string.h>
#include<windows.h>
using namespace std;
void F(string &a,string b) {
	int k = 0;
	int i = a.find_last_of('.');
	if (i < 0) {
		a += "." + b;
		return;
	}
	k = a.length() - i - 1;
	a.replace(i + 1, k, b);
}
	int main() {
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		cout << "Введите имя файла для изменения\n";
		string a;
		cin >> a;
		cout << "Введите необходимое расширение\n";
		string b;
		cin >> b;
		F(a, b);
		cout << a;
	}

