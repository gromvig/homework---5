#include<iostream>
#include<windows.h>
using namespace std;
void F(char* a, char* b, int n) {
	int	i1 = 0;
	int x;
	for (int i = n; i >= 0; i--) {
		if (a[i] == '\0')
		x = i;
		if (a[i] == '.') {
			for (int j = i + 1; j < n; j++) {
				a[j] = b[i1];
				i1++;
			}
			return;
		}
		
	}
	a[x] = '.';
	for (int j = x + 1; j < n; j++) {
		a[j] = b[i1];
		i1++;
	}
}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int n = 100;
	char A[n];
	char B[n];
	cout << "Введите имя файла для изменения\n";
	cin >> A;
	cout << "Введите необходимое расширение\n";
	cin >> B;
	F(A, B, n);
	cout << A;
}

