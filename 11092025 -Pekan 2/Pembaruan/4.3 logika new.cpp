#include <iostream>
using namespace std;

int main() { 
    bool hasil; 
    
    // Operasi AND: kedua kondisi harus true
    hasil = (10 > 5) && (5 < 10); 
    cout << boolalpha << "10 > 5 AND 5 < 10 : " << hasil << endl; 
    
    // Operasi OR: salah satu kondisi true
    hasil = (10 > 5) || (5 > 10); 
    cout << "10 > 5 OR 5 > 10 : " << hasil << endl; 
    
    // Operasi NOT: membalik nilai boolean
    hasil = !(10 > 5);
    cout << "NOT (10 > 5) : " << hasil << endl; 
    
    return 0; 
}
