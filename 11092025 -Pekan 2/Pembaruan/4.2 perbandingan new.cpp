#include <iostream>
using namespace std;

int main() { 
    const int x = 5, y = 10; 
    
    cout << boolalpha; // Menampilkan true/false instead of 1/0
    cout << "x == y : " << (x == y) << endl; 
    cout << "x != y : " << (x != y) << endl; 
    cout << "x > y : " << (x > y) << endl; 
    cout << "x < y : " << (x < y) << endl; 
    cout << "x >= y : " << (x >= y) << endl; 
    cout << "x <= y : " << (x <= y) << endl; 
    
    return 0; 
}
