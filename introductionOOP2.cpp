#include <iostream>
using namespace std;

class Barang {
private:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

public:
    // Constructor
    Barang(string n, int j, string k, string t) {
        nama = n;
        jumlah = j;
        kategori = k;
        tanggalProduksi = t;
    }

    // Method tampil data
    void tampilkanData() {
        cout << "Nama Barang      : " << nama << endl;
        cout << "Jumlah           : " << jumlah << endl;
        cout << "Kategori         : " << kategori << endl;
        cout << "Tanggal Produksi : " << tanggalProduksi << endl;
        cout << "-----------------------------------" << endl;
    }
};

int main() {
    Barang elektronik("Laptop", 10, "Elektronik", "15-01-2024");
    Barang nonElektronik("Kursi", 20, "Non Elektronik", "10-11-2023");

    cout << "=== Data Barang Elektronik ===" << endl;
    elektronik.tampilkanData();

    cout << "=== Data Barang Non Elektronik ===" << endl;
    nonElektronik.tampilkanData();

    return 0;
}