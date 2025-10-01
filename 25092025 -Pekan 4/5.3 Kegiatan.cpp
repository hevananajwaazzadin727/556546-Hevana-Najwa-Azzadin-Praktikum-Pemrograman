#include <iostream>
using namespace std;

int main() {
    int num;
    
    while (true) {
        cout << "Masukkan bilangan bulat positif: ";
        
        // Cek jika input adalah bilangan
        if (!(cin >> num)) {
            cout << "Input bukan bilangan. Program dihentikan." << endl;
            break;
        }
        
        // Periksa apakah input adalah 0
        if (num == 0) {
            cout << "Program berhenti karena input 0." << endl;
            break;
        }
        
        // Periksa bilangan positif, ganjil/genap
        if (num > 0) {
            if (num % 2 == 0) {
                cout << "Bilangan " << num << " adalah genap." << endl;
            } else {
                cout << "Bilangan " << num << " adalah ganjil." << endl;
            }
        } else {
            cout << "Harap masukkan bilangan bulat positif!" << endl;
        }
    }
    
    return 0;
}
