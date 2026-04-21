#include <iostream>
using namespace std;

class Barang
{
public:
    string nama;
    int jumlah;
    string kategori;
    string TanggalProduksi;

    void printdata()
    {
        cout << "Nama Barang :" << nama << endl;
        cout << "Jumlah :" << jumlah << endl;
        cout << "Kategori :" << kategori << endl;
        cout << "Tanggal Produksi :" << TanggalProduksi << endl;
    }
};

int main()
{
    Barang elektronik;
    elektronik.nama = "MonitorGaming";
    elektronik.jumlah = 15;
    elektronik.kategori = "Elektronik";
    elektronik.TanggalProduksi = "2026.02";
    elektronik.printdata();
    cout << endl;

    Barang Non;
    Non.nama = "MejaGaming";
    Non.jumlah = 12;
    Non.kategori = "Non Elektronik";
    Non.TanggalProduksi = "2024.12";
    Non.printdata();
}