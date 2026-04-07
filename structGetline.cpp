#include <iostream>
using namespace std;

struct DetailAlamat{
    string desa;
    string kota;
};
struct orang{
    string nama;
    DetailAlamat alamat;
    int umur;
};
int main()
{
    //Deklarasi obyek dari struct orang
    orang mhs;
    //isi objek
    cout << "Nama Mahasiswa:";
    getline(cin, mhs.nama);
    cout << "Alamat Desa:";
    getline(cin, mhs.alamat.desa);
    cout << "Alamat Kota:";
    getline(cin, mhs.alamat.kota);
    cout << "Umur:";
    cin >> mhs.umur;
    cout << endl;
}