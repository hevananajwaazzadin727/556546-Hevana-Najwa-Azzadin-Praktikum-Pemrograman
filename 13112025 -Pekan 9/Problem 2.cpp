#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void selection_sort_asc(int data[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (data[j] < data[min_idx]) {
                min_idx = j;
            }
        }
        swap(data[i], data[min_idx]);
    }
}

int main() {
    int n;
    cin >> n;
    
    int data[n];
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }
    
    int ganjil[n], genap[n];
    int count_ganjil = 0, count_genap = 0;
    
    for (int i = 0; i < n; i++) {
        if (data[i] % 2 == 1) {
            ganjil[count_ganjil] = data[i];
            count_ganjil++;
        } else {
            genap[count_genap] = data[i];
            count_genap++;
        }
    }
    
    selection_sort_asc(ganjil, count_ganjil);
    selection_sort_asc(genap, count_genap);
    
    int hasil[n];
    int index = 0;
    
    for (int i = 0; i < count_ganjil; i++) {
        hasil[index] = ganjil[i];
        index++;
    }
    
    for (int i = 0; i < count_genap; i++) {
        hasil[index] = genap[i];
        index++;
    }
    
    for (int i = 0; i < n; i++) {
        cout << hasil[i];
        if (i < n - 1) {
            cout << ", ";
        }
    }
    cout << endl;
    
    return 0;
}
