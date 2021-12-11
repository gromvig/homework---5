#include<iostream>
#include<windows.h>
using namespace std;
int F(char* str, char* word, int k) {
	int k1 = 0;
	int count = 0;
	int j = 0;
	for (int i = 0; str[i] != '\0'; i++) {
			if (str[i] == word[j]) {
				k1++;
				j++;
				if (k1 == k) {
					count++;
					k1 = 0;
					j = 0;
				}
			}
			else {
				j = 0;
				k1 = 0;
			}
		}
	return(count);
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int n = 100;
	int k = 0;
	char str[n];
	char word[n];
	cout << "Введите строку:\n";
	cin >> str;
	cout << "Введите слово для поиска в строке:\n";
	cin >> word;
	for (int i = 0; word[i] != '\0'; i++)
		k++;
	cout << "Заданное слово входит в строку " << F(str, word, k) << " раз";
	return(0);
}