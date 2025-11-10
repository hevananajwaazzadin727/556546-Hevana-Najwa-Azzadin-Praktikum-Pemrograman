#include<iostream>
#include<fstream>
using namespace std;

int bacaData(int arr[]) {
    ifstream file("angka_input.txt");
    int n = 0;
    while (file >> arr[n]) {
        n++;
    }
    file.close();
    return n;
}

int maksimumRekursif(int arr[], int n) {
    if (n == 1) return arr[0];
    int maxSisa = maksimumRekursif(arr, n - 1);
    if (arr[n-1] > maxSisa) {
        return arr[n-1];
    } else {
        return maxSisa;
    }
}

int main() {
    int arr[100]; 
    int n;
    n = bacaData(arr);
    cout << "Nilai terbesar: " << maksimumRekursif(arr, n) << endl;
    
    return 0;
}
