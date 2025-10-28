#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

struct Karyawan {
    string nama;
    int umur;
    string nik;
    string jabatan;
};

int main() {
    const int jumlahKaryawan = 100;
    Karyawan karyawan[jumlahKaryawan];
    int count = 0;
    ifstream inputFile("pegawai.txt");
    if (!inputFile) {
        cerr << "Tidak dapat membuka file!" << endl;
        return 1;
    }
    string line;
    while (getline(inputFile, line) && count < jumlahKaryawan) {
        stringstream ss(line);
        ss >> karyawan[count].nik >> karyawan[count].nama >> karyawan[count].umur >> karyawan[count].jabatan;
        count++;
    }
    inputFile.close();
    
    int pilihan;
    do {
        cout << "\n=== MENU KARYAWAN ===" << endl;
        cout << "1. Tampilkan Data\n2. Tambah Data\n3. Edit Data\n4. Hapus Data\n5. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;

        if (pilihan == 1) {
            cout << "\n=== Data Karyawan: ===" << endl;
            for (int i = 0; i < count; i++) {
                cout << "\n== Pegawai " << i + 1 << ":" << endl;
                cout << "NIK: " << karyawan[i].nik << endl;
                cout << "Nama: " << karyawan[i].nama << endl;
                cout << "Umur: " << karyawan[i].umur << endl;
                cout << "Jabatan: " << karyawan[i].jabatan << endl;
                cout << endl; 
            }
        }
        else if (pilihan == 2) {
            if (count >= 100) {
                cout << "Data penuh!" << endl;
            } else {
                cout << "\n=== Tambah Karyawan ===" << endl;
                cout << "NIK: "; cin >> karyawan[count].nik;
                cin.ignore();
                cout << "Nama: "; getline(cin, karyawan[count].nama);
                cout << "Umur: "; cin >> karyawan[count].umur;
                cin.ignore();
                cout << "Jabatan: "; getline(cin, karyawan[count].jabatan);
                count++;
                cout << "\nData berhasil ditambah!\n";
            }
        } 
        else if (pilihan == 3) {
            // FITUR EDIT DATA
            string nik;
            cout << "\n=== Edit Data Karyawan ===" << endl;
            cout << "Masukkan NIK yang ingin diedit: ";
            cin >> nik;

            bool ditemukan = false;
            for (int i = 0; i < count; i++) {
                if (karyawan[i].nik == nik) {
                    ditemukan = true;
                    cout << "\nData yang akan diedit:" << endl;
                    cout << "NIK: " << karyawan[i].nik << endl;
                    cout << "Nama: " << karyawan[i].nama << endl;
                    cout << "Umur: " << karyawan[i].umur << endl;
                    cout << "Jabatan: " << karyawan[i].jabatan << endl;
                    
                    cout << "\nMasukkan data baru:" << endl;
                    cout << "Nama: "; 
                    cin.ignore();
                    getline(cin, karyawan[i].nama);
                    cout << "Umur: "; 
                    cin >> karyawan[i].umur;
                    cin.ignore();
                    cout << "Jabatan: "; 
                    getline(cin, karyawan[i].jabatan);
                    
                    cout << "\nData berhasil diupdate!" << endl;
                    break;
                }
            }

            if (!ditemukan) {
                cout << "NIK tidak ditemukan!" << endl;
            }
        }
        else if (pilihan == 4) {
            string nik;
            cout << "\nMasukkan NIK yang ingin dihapus: ";
            cin >> nik;

            bool ditemukan = false;
            for (int i = 0; i < count; i++) {
                if (karyawan[i].nik == nik) {
                    for (int j = i; j < count - 1; j++)
                        karyawan[j] = karyawan[j + 1];
                    count--;
                    ditemukan = true;
                    break;
                }
            }

            if (ditemukan) {
                cout << "Data berhasil dihapus!" << endl;
            } else {
                cout << "NIK tidak ditemukan!" << endl;
            }
        } 
        else if (pilihan == 5) {
            cout << "\n=== Terima Kasih ===" << endl;
        } 
        else {
            cout << "Pilihan salah!" << endl;
        }

    } while (pilihan != 5);

    return 0;
}
