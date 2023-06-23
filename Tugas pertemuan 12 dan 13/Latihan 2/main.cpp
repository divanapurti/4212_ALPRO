#include <iostream>
#include <string>
using namespace std;

struct Sepeda {
    string merk;
    string tipe;
    int tahun;
    string harga;
};

int main() {
    Sepeda sepeda_polygon;
    sepeda_polygon.merk = "Polygon";
    sepeda_polygon.tipe = "Sepeda Gunung";
    sepeda_polygon.tahun = 2013;
    sepeda_polygon.harga = "2.000.000";

    cout << "Merk: " << sepeda_polygon.merk << endl;
    cout << "Tipe: " << sepeda_polygon.tipe << endl;
    cout << "Tahun: " << sepeda_polygon.tahun << endl;
    cout << "Harga: " << sepeda_polygon.harga << endl;



    return 0;
}
