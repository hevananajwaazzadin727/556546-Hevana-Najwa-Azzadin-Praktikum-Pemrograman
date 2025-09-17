#include <iostream>
using namespace std;

int main() {
    int matriks[3][3];
    
    cout << "PROGRAM INPUT MATRIKS 3x3" << endl;
    cout << "=========================" << endl;
    cout << "Masukkan 3 angka per baris (pisahkan dengan spasi)" << endl;
    cout << endl;
    
    for (int i = 0; i < 3; i++) {
        cout << "Baris " << (i + 1) << ": ";
        cin >> matriks[i][0] >> matriks[i][1] >> matriks[i][2];
    }
    
    cout << endl;
    cout << "MATRIKS YANG DIMASUKKAN:" << endl;
    cout << "========================" << endl;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
