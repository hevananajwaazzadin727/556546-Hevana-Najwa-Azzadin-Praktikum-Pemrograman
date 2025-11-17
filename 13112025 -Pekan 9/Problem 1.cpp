#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void selection_sort_desc(int data[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int max_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (data[j] > data[max_idx]) {
                max_idx = j;
            }
        }
        swap(data[i], data[max_idx]);
    }
}

int main() {
    int n;
    cin >> n;
    
    int data[n];
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }
    
    selection_sort_desc(data, n);
    
    for (int i = 0; i < n; i++) {
        cout << data[i];
        if (i < n - 1) {
            cout << ", ";
        }
    }
    cout << endl;
    
    return 0;
}
