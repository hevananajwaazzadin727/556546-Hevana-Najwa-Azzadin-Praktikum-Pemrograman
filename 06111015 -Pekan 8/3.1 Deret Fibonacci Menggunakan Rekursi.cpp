#include <iostream>
using namespace std;

int fibonacci(int n) {
	if (n <= 0) {
		return n;
	}
	else if (n == 1) {
		return 1;
	}
	else if (n >= 1) {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int main() {
	int angka;
	cout << "Masukkan angka untuk fibonacci: ";
	cin >> angka;
	cout << "Fibonacci dari " << angka << " adalah " << fibonacci(angka) << endl;
	return 0;
}
