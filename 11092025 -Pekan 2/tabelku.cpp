#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string bulan[] = {"Januari", "Februari", "Maret", "April"};
    int penjualan[] = {10000, 200000, 50000, 0};
    
    cout << setw(27) << setfill('-') << "" << endl;
    cout << setfill(' ');
    cout << setw(20) << "Tabel Penjualan" << endl;
    cout << setw(27) << setfill('-') << "" << endl;
    cout << setfill(' ');
    
    cout << setw(12) << left << "Bulan" 
         << setw(15) << right << "Penjualan" << endl;
    cout << setw(27) << setfill('-') << "" << endl;
    cout << setfill(' ');
    
    for (int i = 0; i < 4; i++) {
        cout << setw(12) << left << bulan[i] 
             << setw(15) << right << penjualan[i] << endl;
    }
    
    cout << setw(27) << setfill('-') << "" << endl;
    
    return 0;
}
