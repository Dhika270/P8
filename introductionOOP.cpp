#include <iostream>
using namespace std;

class Barang {
public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void printData() {
        cout << "Nama Barang       : " << nama << endl;
        cout << "Jumlah            : " << jumlah << endl;
        cout << "Kategori          : " << kategori << endl;
        cout << "Tanggal Produksi  : " << tanggalProduksi << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {  
    Barang elektronik;
    elektronik.nama = "Laptop";
    elektronik.jumlah = 5;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "2025-01-10";

    Barang nonElektronik;
    nonElektronik.nama = "Buku";
    nonElektronik.jumlah = 20;
    nonElektronik.kategori = "Non Elektronik";
    nonElektronik.tanggalProduksi = "2024-12-01";

    elektronik.printData();
    nonElektronik.printData();

    return 0;
}