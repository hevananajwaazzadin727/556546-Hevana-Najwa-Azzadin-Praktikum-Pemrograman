#include <iostream>
using namespace std;

void tukarByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void tukarByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;
    
    cout << "Masukkan bilangan pertama: ";
    cin >> a;
    cout << "Masukkan bilangan kedua: ";
    cin >> b;

    int a_awal = a, b_awal = b;
    
    cout << "\nSebelum ditukar: a = " << a << ", b = " << b << endl;
    
    tukarByValue(a, b);
    cout << "Setelah tukarByValue : a = " << a << ", b = " << b << endl;
    
    a = a_awal;
    b = b_awal;
    
    tukarByReference(a, b);
    cout << "Setelah tukarByReference : a = " << a << ", b = " << b << endl;
    
    return 0;
}
