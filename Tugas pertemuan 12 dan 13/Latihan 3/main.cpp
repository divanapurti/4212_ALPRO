#include <iostream>
using namespace std;

const float PI = 3.14159; // Nilai phi

typedef struct {
    float panjang;
    float lebar;
} PersegiPanjang;

typedef struct {
    float jariJari;
} Lingkaran;

typedef struct {
    float jariJari;
    float tinggi;
} Kerucut;

typedef struct {
    float jariJari;
} Bola;

// Fungsi untuk menghitung luas persegi panjang
float hitungLuasPersegiPanjang(const PersegiPanjang& persegiPanjang) {
    return persegiPanjang.panjang * persegiPanjang.lebar;
}

// Fungsi untuk menghitung luas lingkaran
float hitungLuasLingkaran(const Lingkaran& lingkaran) {
    return PI * lingkaran.jariJari * lingkaran.jariJari;
}

// Fungsi untuk menghitung volume kerucut
float hitungVolumeKerucut(const Kerucut& kerucut) {
    return (1.0 / 3.0) * PI * kerucut.jariJari * kerucut.jariJari * kerucut.tinggi;
}

// Fungsi untuk menghitung volume bola
float hitungVolumeBola(const Bola& bola) {
    return (4.0 / 3.0) * PI * bola.jariJari * bola.jariJari * bola.jariJari;
}

int main() {
    // Contoh penggunaan
    PersegiPanjang persegiPanjang;
    persegiPanjang.panjang = 5.0;
    persegiPanjang.lebar = 3.0;
    float luasPersegiPanjang = hitungLuasPersegiPanjang(persegiPanjang);
    cout << "Luas Persegi Panjang: " << luasPersegiPanjang << endl;

    Lingkaran lingkaran;
    lingkaran.jariJari = 4.0;
    float luasLingkaran = hitungLuasLingkaran(lingkaran);
    cout << "Luas Lingkaran: " << luasLingkaran << endl;

    Kerucut kerucut;
    kerucut.jariJari = 3.0;
    kerucut.tinggi = 7.0;
    float volumeKerucut = hitungVolumeKerucut(kerucut);
    cout << "Volume Kerucut: " << volumeKerucut << endl;

    Bola bola;
    bola.jariJari = 5.0;
    float volumeBola = hitungVolumeBola(bola);
    cout << "Volume Bola: " << volumeBola << endl;

    return 0;
}


