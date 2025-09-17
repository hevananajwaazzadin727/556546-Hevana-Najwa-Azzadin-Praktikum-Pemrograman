#include <iostream>
#include <iomanip> // Untuk setprecision
using namespace std;

int main() { 
    const int A = 10, B = 20; 
    const float C = 3.14f; 
    
    // Output format 1: Semua nilai dalam satu baris
    cout << "Nilai a: " << A << ", Nilai b: " << B << ", Nilai c: " << C << endl;
    
    // Output format 2: Setiap nilai di baris terpisah dengan presisi
    cout << "Nilai a: " << A << endl 
         << "Nilai b: " << B << endl 
         << fixed << setprecision(2) // Set presisi 2 digit desimal
         << "Nilai c: " << C << endl;
    
    return 0; 
}
