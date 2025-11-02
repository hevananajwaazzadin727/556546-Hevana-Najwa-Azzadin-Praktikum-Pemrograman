#include <iostream>
#include <iomanip>
using namespace std;

double hitungRataRata(int nilai[], int jumlah) {
    int total = 0;
    for (int i = 0; i < jumlah; i++) {
        total += nilai[i];
    }
    return static_cast<double>(total) / jumlah;
}

string tentukanStatus(double rataRata) {
    if (rataRata >= 70) {
        return "LULUS";
    } else {
        return "TIDAK LULUS";
    }
}

void tampilkanHasil(double rataRata, string status) {
    cout << fixed << setprecision(2);
    cout << "\nRata-rata: " << rataRata << endl;
    cout << "Status : " << status << endl;
}

int main() {
    int jumlahNilai;
    
    cout << "Masukkan jumlah nilai: ";
    cin >> jumlahNilai;
    
    int nilai[jumlahNilai];
    
    for (int i = 0; i < jumlahNilai; i++) {
        cout << "Nilai ke-" << (i+1) << ": ";
        cin >> nilai[i];
    }
    
    double rataRata = hitungRataRata(nilai, jumlahNilai);
    
    string status = tentukanStatus(rataRata);
    
    tampilkanHasil(rataRata, status);
    
    return 0;
}
