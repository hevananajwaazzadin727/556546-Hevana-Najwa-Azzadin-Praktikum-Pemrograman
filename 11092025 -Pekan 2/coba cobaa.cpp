#include <iostream> 
#include <string> 
int main() { 
    std::string kalimat; 
    std::cout << "Masukkan sebuah kalimat: "; 
    std::getline(std::cin, kalimat); 
    std::cout << "Kalimat yang Anda masukkan: " << kalimat << std::endl; 
    return 0; 
}
