#include <iostream>
using namespace std;

double rerata(double a, double b) {
    return (a + b) / 2;
}

string status(double r, double m) {
    if (r >= 70 || m > 80)
        return "Lulus";
    else
        return "Tidak Lulus";
}

void ucapan() {
    cout << "Exercise Prosedural" << endl;
}


int main() {
    double nilaiB[20], nilaiM[20];
    string nama[20], kondisi[20];
    int jl = 0, jtl = 0;
    // string nama;
    // double nilM, nilB;

    ucapan();
    for (int i = 0; i < 20; i++) {
        cout << "Masukkan Nama Pendaftar ke - " << (i + 1) << endl ;
        cin >> nama[i];
        cout << "Masukkan Nilai Bahasa Inggris = ";
        cin >> nilaiB[i];
        cout << "Masukkan Nilai Matematika = ";
        cin >> nilaiM[i];
        kondisi[i] = status(rerata(nilaiB[i], nilaiM[i]), nilaiM[i]);
        cout << "\n\n";
        
    }

    cout << "\n\n===Nama==="<< "=====Status====" << endl;
    for (int i = 0; i < 20; i++) {
        cout << " " << nama[i] << "     " << kondisi[i] << endl;
        
    }
}


