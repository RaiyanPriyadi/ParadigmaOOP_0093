#include <iostream>
using namespace std;

class Mahasiswa{
    public:
        int nim;
        string nama;
        flout nilai;
        void printData(){
            cout << "NIM: " << nim << endl;
            cout << "Nama: " << nama << endl;
            cout << "Nilai: " << nilai << endl;
        }