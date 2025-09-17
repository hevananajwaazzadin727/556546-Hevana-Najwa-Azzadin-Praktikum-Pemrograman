#include <iostream>
#include<string> 
using namespace std;

int main() { 
	int angka; 
	float desimal; 
	char karakter;
	cout << "Masukkan sebuah angka: "; 
	cin >> angka; 
	cout << "Masukkan sebuah angka desimal: "; 
	cin >> desimal; 
	cout << "Masukkan sebuah karakter: "; 
	cin >> karakter;
	cout << "Angka yang Anda masukkan: " << angka << endl; 
	cout << "Desimal yang Anda masukkan: " << desimal << endl; 
	cout << "Karakter yang Anda masukkan: " << karakter << endl;

	cin.ignore();
	int bilangan1, bilangan2;
	cout << "Masukkan dua bilangan (pisahkan dengan spasi): "; 
	cin >> bilangan1 >> bilangan2; 
	cout << "Bilangan pertama: " << bilangan1 << endl; 
	cout << "Bilangan kedua: " << bilangan2 << endl; 

    cin.ignore();
	std::string kalimat; 
    std::cout << "Masukkan sebuah kalimat: "; 
    std::getline(std::cin, kalimat); 
    std::cout << "Kalimat yang Anda masukkan: " << kalimat << std::endl; 
    return 0; 
}
