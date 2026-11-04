#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama;
    float nilai1, nilai2, nilai3, rataRata;

    // Input data siswa
    cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;
    cout << "================================" << endl;

    cout << "Nama Siswa : ";
    getline(cin, nama);

    cout << "Nilai Pertandingan I : ";
    cin >> nilai1;

    cout << "Nilai Pertandingan II : ";
    cin >> nilai2;

    cout << "Nilai Pertandingan III : ";
    cin >> nilai3;

    // Menghitung nilai rata-rata
    rataRata = (nilai1 + nilai2 + nilai3) / 3;

    // Menampilkan hasil
    cout << "\n================================" << endl;
    cout << "HASIL PERHITUNGAN" << endl;
    cout << "================================" << endl;

    cout << "Siswa yang bernama " << nama << endl;
    cout << "Memperoleh nilai rata-rata: " << rataRata << endl;

    // Menentukan hadiah
    if (rataRata >= 85) {
        cout << "Hadiah yang didapat adalah Seperangkat Mobil" << endl;
    }
    else if (rataRata >= 70) {
        cout << "Hadiah yang didapat adalah Uang sebesar Rp. 500.000" << endl;
    }
    else {
        cout << "Hadiah yang didapat adalah Hiburan" << endl;
    }

    return 0;
}

