#include <iostream>
using namespace std;

int main() { 
    const int a = 10, b = 3; 
    
    cout << "Penjumlahan: a + b = " << (a + b) << endl; 
    cout << "Pengurangan: a - b = " << (a - b) << endl; 
    cout << "Perkalian: a * b = " << (a * b) << endl; 
    cout << "Pembagian integer: a / b = " << (a / b) << endl; 
    cout << "Pembagian float: a / b = " << (static_cast<float>(a) / b) << endl;
    cout << "Modulus: a % b = " << (a % b) << endl; 
    
    return 0; 
}
