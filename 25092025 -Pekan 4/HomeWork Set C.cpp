#include<iostream>
using namespace std;

int main(){
	int x;
	cout << "Masukkan jumlah deret Fibonacci:";
	cin >> x;
	int a, b;
	a = 1;
	b = 1;
	cout << "Deret Fibonacci:";
	for (int i = 1; i <= x; i++){
		cout << a << " ";
		int c = a + b;
		a = b;
		b = c;
	}
	return 0;
}
