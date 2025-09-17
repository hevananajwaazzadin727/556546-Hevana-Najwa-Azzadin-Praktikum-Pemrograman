#include <iostream>
#include <iomanip> 
using namespace std;

const int OUTPUT_WIDTH = 10;

void printNumber(int number) {
    cout << setw(OUTPUT_WIDTH) << number << endl;
}

int main() { 
    int numbers[] = {2000, 39800, 489688};
    int count = 3;
    
    cout << right; 
    
    for (int i = 0; i < count; i++) {
        printNumber(numbers[i]);
    }
    
    return 0; 
}
