#include <iostream>
using namespace std;

int pangkat(int n, int m){
	if(m == 0){
		return 1;
	}
	else if(n == 1){
		return n;
	}
	else if(m > 1){
		return n*pangkat(n, m-1);
	}
}

int main(){
	int n, m;
	cout << "masukkan angka: " ;
	cin >> n;
	cout << "masukkan pangkat: ";
	cin >> m;
	cout << "Hasil dari " << n << " pangkat " << m << " adalah: " << pangkat(m, n) << endl;
}
