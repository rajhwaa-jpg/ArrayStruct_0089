#include <iostream>
using namespace std;

struct DetailAlamat {
    string desa;
    string kota;
};

struct orang {
    string nama;
    DetailAlamat alamat;
    int umur;
};

int main() {
    // Deklarasi obyek dari struct orang
    orang mhs;

    // Isi objek
    cout << "Nama Mahasiswa: ";
    cin >> mhs.nama;
    cout << "Alamat Desa: ";
    cin >> mhs.alamat.desa;
    cout << "Alamat Kota: ";
    cin >> mhs.alamat.kota;
    cout << "Umur: ";
    cin >> mhs.umur;
    cout << endl;
   
}
