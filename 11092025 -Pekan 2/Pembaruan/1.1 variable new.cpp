#include <iostream>
using namespace std;

int main() { 
    const int ANGKA = 10;           // Menggunakan const untuk nilai tetap
    const float DESIMAL = 5.5f;     // Menambahkan 'f' untuk literal float
    const char KARAKTER = 'A';      // Konstanta karakter
    
    int a = 1, b = 2, c = 3;        // Multiple variables
    
    // Output dengan format yang lebih baik
    cout << "Nilai angka: " << ANGKA << endl; 
    cout.precision(2);              // Set presisi untuk float
    cout << "Nilai desimal: " << fixed << DESIMAL << endl; 
    cout << "Nilai karakter: " << KARAKTER << endl; 
    cout << "Nilai a, b, c: " << a << ", " << b << ", " << c << endl; 
    
    return 0; 
}
