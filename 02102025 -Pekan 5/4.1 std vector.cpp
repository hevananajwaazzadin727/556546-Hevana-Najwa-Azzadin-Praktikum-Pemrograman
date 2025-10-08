#include <iostream>
#include <vector>
#include <string>
using namespace std;
using pii = pair<string, int>;

void bersihkan(vector<pii>& v) {
    
    for (int i = 0; i < v.size(); i++) {
        if (v[i].second <= 0) {
            v.erase(v.begin() + i);
            i--; 
        }
    }
}

void hapusduplikat(vector<pii>& v) {

    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++) {
            if (v[i].first == v[j].first) {
                v[i].second = v[j].second; 
                v.erase(v.begin() + j);
                j--; 
            }
        }
    }
}

void ringkasan(const vector<pii>& v) {
    
    if (v.empty()) {
        cout << "Tidak ada data" << endl;
        return;
    }
    
    int min = v[0].second;
    int max = v[0].second;
    int total = 0;
    
    for (int i = 0; i < v.size(); i++) {
        if (v[i].second < min) min = v[i].second;
        if (v[i].second > max) max = v[i].second;
        total += v[i].second;
    }
    
    cout << "Jumlah barang unik: " << v.size() << endl;
    cout << "Harga minimum: " << min << endl;
    cout << "Harga maksimum: " << max << endl;
    cout << "Harga rata-rata: " << total / v.size() << endl;
}

int main() {
    vector<pii> data = {
        {"apel", 2000}, {"jeruk", 1500}, {"apel", -100},
        {"mangga", 3000}, {"jeruk", 1500}, {"pisang", 0},
        {"apel", 2500}, {"mangga", 3000}
    };

    bersihkan(data);
    hapusduplikat(data);
    ringkasan(data);
    
    return 0;
}
