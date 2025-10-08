#include <iostream>
using namespace std;

// Fungsi untuk menghitung kofaktor
void kofaktor(float mat[3][3], float temp[3][3], int p, int q, int n) {
    int i = 0, j = 0;
    for (int baris = 0; baris < n; baris++) {
        for (int kolom = 0; kolom < n; kolom++) {
            if (baris != p && kolom != q) {
                temp[i][j++] = mat[baris][kolom];
                if (j == n - 1) {
                    j = 0;
                    i++;
                }
            }
        }
    }
}

// Fungsi untuk menghitung determinan
float determinan(float mat[3][3], int n) {
    float det = 0;
    if (n == 1) return mat[0][0];
    
    float temp[3][3];
    int sign = 1;
    
    for (int f = 0; f < n; f++) {
        kofaktor(mat, temp, 0, f, n);
        det += sign * mat[0][f] * determinan(temp, n - 1);
        sign = -sign;
    }
    return det;
}

// Fungsi untuk menghitung adjugate
void adjugate(float mat[3][3], float adj[3][3]) {
    int sign = 1;
    float temp[3][3];
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            kofaktor(mat, temp, i, j, 3);
            sign = ((i + j) % 2 == 0) ? 1 : -1;
            adj[j][i] = sign * determinan(temp, 2);
        }
    }
}

// Fungsi untuk menghitung invers
bool inversMatriks3x3(float mat[3][3], float invers[3][3]) {
    float det = determinan(mat, 3);
    
    if (det == 0) {
        cout << "Matriks tidak memiliki invers" << endl;
        return false;
    }
    
    float adj[3][3];
    adjugate(mat, adj);
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            invers[i][j] = adj[i][j] / det;
        }
    }
    return true;
}

void tampilkanMatriks3x3(float mat[3][3], string nama) {
    cout << nama << ":" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    float matriks[3][3], invers[3][3];
    
    cout << "PROGRAM INVERS MATRIKS 3x3" << endl;
    cout << "==========================" << endl;
    
    // Input matriks
    cout << "\nMasukkan elemen matriks 3x3:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Elemen [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriks[i][j];
        }
    }
    
    tampilkanMatriks3x3(matriks, "Matriks Asli");
    
    if (inversMatriks3x3(matriks, invers)) {
        tampilkanMatriks3x3(invers, "Matriks Invers");
    }
    
    return 0;
}
