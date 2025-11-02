#include <iostream>
#include <iomanip>
using namespace std;

double celciusToFahrenheit(double celcius) {
    return (celcius * 9/5) + 32;
}

double celciusToKelvin(double celcius) {
    return celcius + 273.15;
}

int main() {
    int jumlahData;
    
    cout << "Masukkan jumlah data suhu: ";
    cin >> jumlahData;
    
    double suhuCelcius[jumlahData];
    
    for (int i = 0; i < jumlahData; i++) {
        cout << "Masukkan suhu ke-" << (i+1) << " (Celcius): ";
        cin >> suhuCelcius[i];
    }
    
    cout << fixed << setprecision(2);
    cout << "\nCelcius\tFahrenheit\tKelvin" << endl;
    cout << "--------------------------------" << endl;
    
    for (int i = 0; i < jumlahData; i++) {
        double fahrenheit = celciusToFahrenheit(suhuCelcius[i]);
        double kelvin = celciusToKelvin(suhuCelcius[i]);
        
        cout << suhuCelcius[i] << "\t" << fahrenheit << "\t\t" << kelvin << endl;
    }
    
    return 0;
}
