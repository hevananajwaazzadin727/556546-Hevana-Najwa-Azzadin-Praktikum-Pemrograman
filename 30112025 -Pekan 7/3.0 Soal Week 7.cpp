#include <iostream>
#include <iomanip>
using namespace std;

int totalHadir = 0;

void updateKehadiran(int hadir) {
    totalHadir += hadir;
}

double hitungPresentase(int totalPertemuan, int jumlahMahasiswa) {
    int totalMaksimal = jumlahMahasiswa * totalPertemuan;
    return (static_cast<double>(totalHadir) / totalMaksimal) * 100;
}

void tampilkanHasil(int totalPertemuan, int jumlahMahasiswa) {
    int totalMaksimal = jumlahMahasiswa * totalPertemuan;
    double presentase = hitungPresentase(totalPertemuan, jumlahMahasiswa);
    
    cout << fixed << setprecision(2);
    cout << "Total kehadiran kelas : " << totalHadir << " dari " << totalMaksimal << endl;
    cout << "Presentase kehadiran : " << presentase << " %" << endl;
}

int main() {
    int jumlahMahasiswa, totalPertemuan;
    
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;
    cout << "Masukkan total pertemuan: ";
    cin >> totalPertemuan;
    
    for (int i = 0; i < jumlahMahasiswa; i++) {
        int kehadiran;
        cout << "Kehadiran mahasiswa ke-" << (i+1) << ": ";
        cin >> kehadiran;
        updateKehadiran(kehadiran);
    }
    
    cout << endl;
    tampilkanHasil(totalPertemuan, jumlahMahasiswa);
    
    return 0;
}
