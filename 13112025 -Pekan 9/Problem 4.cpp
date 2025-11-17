#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void insertion_sort(int data[], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (data[j] > data[i]) {
                swap(data[j], data[i]);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    
    int data[n];
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }
    
    insertion_sort(data, n);
    
    double median;
    if (n % 2 == 1) {
        median = data[n / 2];
        cout << median << endl;
    } else {
        median = (data[n / 2 - 1] + data[n / 2]) / 2.0;
        cout << median << endl;
    }
    
    return 0;
}
